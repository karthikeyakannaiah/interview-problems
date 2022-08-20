#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i){
        int t;
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    cout << v[2] << " " << v[n-2];
}
