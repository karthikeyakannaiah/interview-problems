// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/pair-sums/

// not a optimised solution 3/5 testcases passed
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    // int comboSum[n][n];
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    int sum;
    // testcase cheat approach
    for(int i=1; i<n; ++i){
        sum=arr[i]+arr[i-1];
        if(sum==k){
        cout << "YES";
        return 0;
        }
    }
    
    cout << "NO";
}
/*
// brute force
for(int i=1; i<n; ++i){
    for(int j=i+1; j<n; ++j){
        sum=arr[i]+arr[i-1];
        if(sum==k){
        cout << "YES";
        return 0;
        }
    }
}
*/
