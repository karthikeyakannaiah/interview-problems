#include <bits/stdc++.h>
using namespace std;
// not an optimised solution for large arrays
// but achieves general functionality
bool alreadyExists(vector<int> a, int key){
    for(int i=0; i<a.size(); ++i){
        if(key==a[i])
            return true;
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    vector<int> v;
    int count=0;
    for(int i=0; i<n; ++i){
        int t;
        cin >> t;
        if(alreadyExists(v,t))
            count++;
        else
            v.push_back(t);
    }
    for(int i=0; i<n-count; ++i){
        cout << v[i] << " ";
    }
}
