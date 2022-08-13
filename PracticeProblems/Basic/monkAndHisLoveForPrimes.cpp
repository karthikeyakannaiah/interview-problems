// https://assessment.hackerearth.com/challenges/college/iiit-allahabad-test-draft-2-15/problems/
#include <bits/stdc++.h>
using namespace std;
int main(){
    // char a = 'Z';
    // if((int)a<91)
    //     a = (char)((int)a + 32);
    // else
    //     a = (char)((int)a - 32);
    // cout << a << endl;
    string s;
    cin >> s;
    int sum = 0;
    for(int i=0; i<s.length(); i++){
        if((int)s[i]<91){
            sum = sum - ((int)s[i]+32);
        }else{
            sum = sum + ((int)s[i]-32);
        }

    }
    sum = abs(sum);
    cout << sum << endl;
    for(int i = 2; i<sum; i++){
        if(sum%i==0){
            cout << 0;
            return 0;
        }
    }
    cout << 1;
}
