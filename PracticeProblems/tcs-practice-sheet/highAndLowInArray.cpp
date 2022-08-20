#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int high = INT_MIN;
    int low = INT_MAX;
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        if(x>high){
            high=x;
        }
        if(x<low){
            low=x;
        }
    }
    cout << high << " " << low;
}
