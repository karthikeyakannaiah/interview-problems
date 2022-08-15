// https://www.hackerrank.com/challenges/crush/problem
#include<bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
long long int arr[N];
int main(){
    int n, q;
    cin >> n >> q;
    while(q--){
        int a, b, k;
        cin >> a >> b >> k;
        arr[a]=arr[a]+k;
        arr[b+1]=arr[b+1]-k;
    }
    
    for(int i=1; i<=n; i++){
        arr[i]+=arr[i-1];
    }
    long long high=-1;
    for(int i=1; i<=n; i++){
        cout << arr[i] << endl;
        if(arr[i]>high)
            high = arr[i];
    }
    cout << high << endl;
    // after Optimisation
    // O(N) 
    // worst case 10^7 
    // takes around 1sec
}
/*
#include<bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
long long int arr[N];
int main(){
    int n, q;
    cin >> n >> q;
    while(q--){
        int a, b, k;
        cin >> a >> b >> k;
        for(int i=a; i<=b; i++){
            arr[i]=arr[i]+k;
        }
    }
    long long high=-1;
    for(int i=1; i<n; i++){
        if(arr[i]>high)
            high = arr[i];
    }
    cout << high << endl;
    // before Optimisation
    // O(N*Q) 
    // worst case 10^7 * 10^5 == 10^12
    // takes 10000sec
}
*/
