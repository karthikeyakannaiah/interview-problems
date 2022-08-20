#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a;
    b=a;
    int temp=0;
    int n=-1;
    while(b){
        b=b/10;
        n++;
    }
    while(a){
        temp+=(a%10)*pow(10,n);
        a=a/10;
        n--;
    }
    cout << temp;
}
/*
input:
1234523

output:
3254321
*/
