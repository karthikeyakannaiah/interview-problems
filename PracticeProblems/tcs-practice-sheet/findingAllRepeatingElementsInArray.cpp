#include <bits/stdc++.h>
using namespace std;
// answer comes sorted
int main(){
    int n;
    cin >> n;
    map<int,int> m;
    for(int i=0;i<n;++i){
        int t;
        cin >> t;
        m[t]+=1;
    }
    for(auto &pr:m){
        if(pr.second > 1)
            cout << pr.first << " ";
    }cout << endl;
}
