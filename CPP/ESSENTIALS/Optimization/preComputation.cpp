/*
Given T testcases in each case a Number N.
Print its factorial for each test case % M
where M = 10^9 + 7

Constraints
1 <= T <= 10^5
1 <= N <= 10^5
*/
#include <bits/stdc++.h>
using namespace std;
int M = 1e9 + 7;
int N = 1e5 + 10;
long long fact[N];
int main(){
    fact[0]=fact[1]=1;
    // precomputing all the values and storing them
    for(int i = 2; i<N ; ++i){
        fact[i]= (fact[i-1]*i)%M;
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << fact[n] << endl;
        // we dont need to calculate 
        // we just need to  display already computed value
    }
    // after pre computation
    // O(N)+O(T)
    // N is 10^5 and T in max case is 10^5
    // 10^5 + 10^5 ---> 2*(10^5) 
    // order will be 10^5 
    // which will execute in under 1 second
}



/* 
// Before pre-computation

#include <bits/stdc++.h>
using namespace std;
int M = 1e9 + 7;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long int fact = 1;
        for(int i =2; i<=n; ++i){
            fact = (fact*i)%M;
        }
        cout << fact << endl;
    }
    // O(T*N) ---> without precomputation
    // worst case 10^5 * 10^5 = 10^10 (will take 1000s)
}
*/
