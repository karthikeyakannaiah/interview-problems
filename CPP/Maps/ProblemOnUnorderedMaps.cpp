/*
  Given N strings and Q queries
  In each each query you are given a string
  print frequency of that string
  N <= 10^6
 |S| <= 100
  Q <= 10^6
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string, int> um;
    int n;
    cin >> n;
    for (int i =0; i<n; i++){
        string s;
        cin >> s;
        um[s]++;
    }
    int q;
    cin >> q;
    string queries[q];
    for (int j = 0; j<q; j++){
        cin >> queries[j];
    }
    for (int j = 0; j<q; j++){
        auto it = um.find(queries[j]);
        if (it != um.end())
            cout << (*it).first << " " << (*it).second << endl;
    }
}
  // try this if you want to return value immediately for every query taken. SEE SECOND INPUT OUTPUT
//     while(q--){
//         string s;
//         cin >> s; 
//         cout << um[s] <<endl;
//     }


/*
    Use Unordered maps incase if you dont need lexicographical ordering
    It will save time
*/

/*
INPUT:
8
abc
def
abc
ghj
jkl
ghj
ghj
abc
2
abc
ghj

OUTPUT:
abc 3
ghj 3

SECOND
INPUT/OUTPUT:
4
ab
bc
ab
bc
2
ab
2     ->output
bc
2     ->output
*/
