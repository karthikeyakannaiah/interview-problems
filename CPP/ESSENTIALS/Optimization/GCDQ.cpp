//  PRECOMPUTATION TECHNIQUE -- practice problem

/*
https://www.codechef.com/problems/GCDQ

*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        int a[n+10];
        int forwardArr[n+10];
        int backwardArr[n+10];
        forwardArr[0]=backwardArr[n+1]=0;
        for(int i=1; i<=n; ++i){
            cin >> a[i];
        }
        for(int i=1; i<=n; ++i){
            forwardArr[i]= __gcd(forwardArr[i-1], a[i]);
        }
        for(int i=n; i>=1; --i){
            backwardArr[i]= __gcd(a[i], backwardArr[i+1] );
        }
        while(q--){
            int l, r;
            cin >> l >> r;
            cout << __gcd(forwardArr[l-1],backwardArr[r+1]) << endl;
        }
    }
    // prefix (precomputation)
    // note : given sum of N over all the testcases will be <= 10^6
    // O(T*(4*N)) --> O(T*N) =+> 10^6
}


/*
// Before precomputation
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        int a[n+10];
        for(int i=1; i<=n; ++i){
            cin >> a[i];
        }
        while(q--){
            int l, r;
            cin >> l >> r;
            int gc=0;
            for(int i =1; i<=l-1; ++i){
                gc = __gcd(gc, a[i]); // __gcd() takes O(log(n))
            }
            for(int i =r+1; i<=n; ++i){
                gc = __gcd(gc, a[i]);
            }
            cout << gc << endl;
        }
    }
    // brute force approach
    // O(T*(N+Q*(N))) => O(T*Q*N) 
} 

*/
