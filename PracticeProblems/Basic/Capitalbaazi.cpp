// https://assessment.hackerearth.com/challenges/college/iiit-allahabad-test-draft-2-15/problems/
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    for(int i=0; i<s.length(); i++){
        if (s[i]==' '){
            cout << endl;
        }
        else {
            cout << (char) toupper(s[i]);
        }
    }
}
