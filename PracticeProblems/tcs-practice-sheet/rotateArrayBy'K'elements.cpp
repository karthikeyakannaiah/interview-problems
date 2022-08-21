#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    int a[k];
    int b[n];
    for(int i = 0; i<k; i++){
        cin >> a[i];
    }
    for(int i = 0; i<n-k; i++){
        cin >> b[i];
    }
    int j=0;
    for(int i = n-k; i<n; i++){
        b[i]=a[j];
        j++;
    }
    for(int i = 0; i<n; i++){
        cout << b[i] << " ";
    }
}
/*

0
1
2
3 n-k
4

*/
