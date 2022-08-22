// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/xsquare-and-double-strings-1/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        int a[26]={0};
        for(int i=0; i<s.length(); ++i){
            a[s[i]-'a']++;
        }
        int count=0;
        for(int i=0; i<26; ++i){
            if(a[i]>=2){
                count++;
                break;
            }
        }
        if(count==1){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl; 
        }      
    }
}
/*
INPUT
5
wow
tata
a
ab
lala

OUTPUT
YES
YES
NO
NO
YES
*/
