#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string, int> m;
    int n;
    cin >> n;
    for ( int i = 0; i<n ; i++){
        string s;
        cin >> s;
        m[s]=m[s]+1; // or m[s]++
    }
    for (auto &pr : m){
        cout << pr.first << " " << pr.second << endl;
    }
}
/*
    Problem
    Give N strings, print unique strings
    in lexicographical order with their frequency
    N <= 10^5
    |s| <= 100  (string size)
    
    input: 
    8
    abc
    def
    abc
    ghj
    jkl
    ghj
    ghj
    abc
    
    output:
    abc 3
    def 1
    ghj 3
    jkl 1
    
    input:
    4
    ab
    bc
    ab
    bc
    
    output:
    ab 2
    bc 2
*/
/*
    Lexicographical order is nothing 
    but the dictionary order or preferably the order 
    in which words appear in the dictonary.
*/
