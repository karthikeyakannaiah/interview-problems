// https://assessment.hackerearth.com/challenges/college/iiit-allahabad-test-draft-2-15/problems/
#include <bits/stdc++.h>
using namespace std;
int main() {
    long n;
    long product = 1;
    cin >> n;
    while(n--){
        long size;
        cin >> size;
        while(size--){
            long p;
            cin >> p;
            product = product * p;
        }
        product = product % 10;
        if( product == 2 || product == 3 || product == 5  ){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
        product = 1;
    }
}
