#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    float median; 
    vector<int> v;
    for(int i=0;i<n;++i){
        int t;
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(),v.end()); 
    // need not use in case 
    // where input array is already a sorted one
    if(n%2==0){
        median=((float)v[n/2]+(float)v[(n-2)/2])/2; 
        // as index starts from zero
        // median=(v[n+1/2]+v[(n-1)/2])/2;
        // usual formula in case index starts from zero
    }else{
        median=(float)v[n/2];
    }
    cout << median;
}
