#include <bits/stdc++.h>
using namespace std;
/*
Multimap is similar to a map with the addition that multiple elements can have the same keys. 
Also, it is NOT required that the key-value and mapped value pair have to be unique in this case. 
One important thing to note about multimap is that multimap keeps all the keys in sorted order always. 
These properties of multimap make it very much useful in competitive programming.
*/
int main(){
    multimap<int, string> m;
    m.insert({3,"dsi"}); // we can insert using ".insert()" method
    m.insert({3,"aer"});
    m.insert({1,"rt"});
    m.insert({2,"oh"});
    for (auto &pr : m){
        cout << pr.first << " " << pr.second << endl;
    }
}

/*
OUTPUT:
1 rt
2 oh
3 dsi
3 aer
*/
