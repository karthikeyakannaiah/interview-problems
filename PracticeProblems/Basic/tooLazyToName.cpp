// https://assessment.hackerearth.com/challenges/college/iiit-allahabad-test-draft-2-15/problems/
#include <bits/stdc++.h>
using namespace std;

int main(){
    long int a, b, c;
    cin >> a >> b >> c;
    long int cth = a<b ? a : b;
    for (long int i= cth; c > 0 ; i++){
        if(i%a == 0 || i%b==0){
            c--;
            cth=i;
        }
    }
    long int lcm;
    for (long int i = 1; i<=a*b ; i++){
        if(i%a == 0 && i%b==0){
            lcm = i;
            break;
        }
    }
    int step;
    if(cth%a == 0 && cth%b==0){
        step = lcm;
    }else{
        if(cth%a==0){
            step =a;
        }else if(cth%b==0){
            step=b;
        }
    }
    for(int i=cth; i>=0; i = i - step){
        cout << i << " "; 
    }
}
