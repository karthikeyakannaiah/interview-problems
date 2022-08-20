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
    sort(v.begin(),v.end()); // increasing order
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }cout << endl;
    sort(v.begin(),v.end(), greater<int>()); // decreasing order
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
}
