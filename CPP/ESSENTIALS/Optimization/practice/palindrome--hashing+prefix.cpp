#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int hsh[N][26];
int main()
{
    int t;int n; int q; cin>>t ;
    while(t--)
    {
        cin>>n ;cin>>q ;
        for (int i=0;i<n;i++) 
        {
            for (int j=0;j<26;j++) 
            {
                hsh[i][j]=0 ; 
            }
        }
        
        string s ;
        cin>>s ;
        for (int i=0;i<n;i++)  
        {
            hsh[i][s[i]-'a']++ ;  
        }
        for (int i=0;i<26;i++) 
        {
            for (int j=1;j<n;j++) 
            {
                hsh[j][i]+=hsh[j-1][i] ; 
            }
        }
        while(q--)
        {
            int l,r ; cin>>l>>r ; int oddcount=0; 
            for(int i=0;i<26;i++)
            {
                int charcount=hsh[r-1][i]-hsh[l-2][i]; 
                if (charcount%2==1) oddcount++ ;
            }
            if(oddcount<=1) cout<<"YES"<<endl ;
            else cout<<"NO"<<endl;
        }
    }
    // after Optimisation
    // O(T*(N+ 52*N +Q*26)) ==> O(T*N)
    // worst case 10 * 10^5  ==> 10^6
    // takes around 1sec
}
/*
#include<bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
long long int arr[N];
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        string s;
        cin >> n >> q ;
        cin >> s;
        while(q--){
            int l, r;
            cin >> l >> r;
            int hsh[26]={0};
            l--;r--;
            for(int i=l; i<=r; ++i){
                hsh[s[i]-'a']++;
            }
            int oddCt=0;
            for(int i=0; i<26;++i){
                if(hsh[i]%2 != 0) oddCt++;
            }
            if(oddCt>1) cout << "NO\n";
            else cout << "YES\n";
        }
    }
    // before Optimisation
    // O(T*Q*N) 
    // worst case 10 * 10^5 * 10^5 ==> 10^11
    // takes around 10000sec
}

*/
/*
INPUT:
2
5 5
abcec
1 2
2 5
3 5
1 5
1 4
5 5
aabbc
1 2
2 5
3 5
1 5
1 4

OUTPUT:
NO
NO
YES
NO
NO
YES
NO
YES
YES
YES
*/
