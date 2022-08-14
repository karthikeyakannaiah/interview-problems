//  PRECOMPUTATION TECHNIQUE -- HASHING

/*
    Given array a of N integers
    Given Q queries and in each query
    given a number X,
    print count of that number in array.
    
    (occurences of the number)

    Constraints
    1 <= N <= 10^5
    1 <= a[i] <= 10^7
    1 <= q <= 10^5
*/
#include<bits/stdc++.h>
using namespace std;
int N = 1e7+10;
// int a[N]; // global array usually initialised with zero
int main(){
    int n;
    cin >> n;
    int a[N]={0}; // hash array
    for(int i =0; i<n; i++){
        int t;
        cin >> t;
        a[t]=a[t]+1;
    }
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        cout << a[x] << endl;
    }

    // after preComputation
    // O(N)+O(Q) 
    // for a worst case (10^5 + 10^5)
    // complexity will be 10^5 
    // which will take around 1s
}



/*
// Before precomputation

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i =0; i<n; i++){
        cin >> a[i];
    }
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        int count=0;
        for(int i = 0; i<n; i++){
            if(a[i]==x){
                count++;
            }
        }cout << count << endl;
        count=0;
    }
    // Before 
    // O(N)+O(Q*N)  ==> O(Q*N)
    // worst case 
    // 10^5 * 10^5 = 10^10 ==> will take 1000s
}
*/
