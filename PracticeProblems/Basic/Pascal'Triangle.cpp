// https://assessment.hackerearth.com/challenges/college/iiit-allahabad-test-draft-2-15/problems/
#include <bits/stdc++.h>
using namespace std;
// pascal's triangle
// printing for t test cases means t no.of trees
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n][n];
        a[0][0]=1;
        a[1][0]=1;
        a[1][1]=1;
        for (int i = 2; i<n; i++){
            a[i][0]=1;
            a[i][i]=1;
            for (int j= 1; j<i; j++){
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
        for (int i = 0; i<n; i++){
            for (int j= 0; j<i+1; j++){
                cout << a[i][j] << " ";
            }cout << endl;
        }
    }
}
