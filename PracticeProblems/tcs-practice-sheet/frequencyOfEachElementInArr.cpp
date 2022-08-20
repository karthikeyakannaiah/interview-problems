#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<int, int> m; // or we can use unordered_map
    for(int i=0; i<n; ++i){
        int t;
        cin >> t;
        m[t]+=1;
    }
    for(auto &pr : m){
        cout << pr.first << " " << pr.second << endl;
    }
}
