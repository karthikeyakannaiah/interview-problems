#include <bits/stdc++.h>
// Unordered maps
// map is an ordered sequence of unique keys whereas in unordered_map key can be stored in any order, so unordered. 
/* 
    The map is implemented as a balanced tree structure that is why it is possible to maintain order between the elements (by specific tree traversal). 
    The time complexity of map operations is O(log n) while for unordered_map, it is O(1) on average. 
    Three differences between map and unordered maps
    1. Inbuilt implementation
        while maps use RB trees whereas unordered maps use hash tables
        generates hasvalues for every key and maintains a hash table
    2. Time Complexity
        O(1) for insertion and accessing in case of Unordered maps
        for most cases (On an average)
    3. valid keys datatype
        We can not use complex datatypes/structures such as pairs, vectors, set etc.., as keys.
        As Unordered maps is an inbuilt implementation, and it has to produce hash values for keys
        and for complex datatypes there are no inbuilt hash function to produce hash valus for hash table
        So only datatypes for hash function is available are considered to be vaild.
        In case of maps as they balanced trees we can  use any dataptype as keys.
*/
using namespace std;
void print(unordered_map<int, string> &um){
    cout << "Size of unordered map is " << um.size() << endl;
    for ( auto &pr : um){
        cout << pr.first << " " << pr.second << endl;
    } // n * O(1)
    cout << endl;
}
using namespace std;
int main(){
    unordered_map<int, string> um;
    um[1]="bdsj"; // O(1) for inserition
    um[3]="kdfe";
    um[5]="dsio";
    um[2]="adsh";
    um[6]="weru";
    print(um);
    auto it = um.find(6); // O(1) 
    if (it != um.end()) {
        um.erase(it); // O(1)
    }
    print(um);
}
