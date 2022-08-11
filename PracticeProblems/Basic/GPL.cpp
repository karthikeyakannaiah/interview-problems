// https://assessment.hackerearth.com/challenges/college/iiit-allahabad-test-draft-2-15/problems/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        unsigned long long int res=0;
        int count=0;
        cin >> n;
        string s;
        cin >> s;
        while(n--){
            // cout << (int) s[n] - 48 << endl;
            res = res + ((unsigned long long int) s[n] - 48) * (unsigned long long int) pow(2,count);
            count++;
        }
        cout << res << endl;
    }
}
