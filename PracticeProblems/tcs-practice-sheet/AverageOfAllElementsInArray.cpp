#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    float sum=0; 
    // we can also use int if we dont want decimal
    for (int i = 0; i < n; ++i){
        int t;
        cin >> t;
        sum+=t;
    }
    cout << sum/n;
}
