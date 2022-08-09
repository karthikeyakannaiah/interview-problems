// Concept of maps -> https://youtu.be/gUrfXZ0hqoA
#include <bits/stdc++.h>
// bits/stdc++.h used in competitive programming to reduce preprocessing work and has everything we need in it.
using namespace std;
// MAPS are dynamic pairs list and they dont need contiguous memory
/*
    types of maps:
        1 Maps
            naturally ordered, they use red black trees to sort themselves out.
            map<int, string> m;
        2 Unordered Maps
        3 Multi Maps
*/
void print(map<int , string> &m){
    cout << "print size of map : "<< m.size() << endl;
    for (auto &pr : m){
        cout << pr.first << " " << pr.second << endl;
    }
    cout << endl;
    // Accessing values is O(n)
    /*
        Explanation : Accessing values through iterator is a O(1) operation as iterator has address of the value and access value at some address if you know the address is a unit time operation. 
        Now when we traverse the map, we start from m.begin() and are doing it++ in each step, it++ is also O(1) ,  
        at this we are not using iterators but internally that only is happening, pr is the value at address pointer by iterator, internally range based loops is also iterating through maps using iterators and then providing us reference to to the value at that address.
        But when you want to directly access some specific value in map using m[key] or m.find(key), these are log(n) operations as log(n)time is taken by map to search this key.
    */
}
void search(map<int, string> &m , int key){
    // find operation
    auto itt = m.find(key); // O(log(n)) to find a key-value pair
    // ".find()" will return iterator for target value
    // if target is not present in map it will return ".end()" iterator which will point to null.
    if ( itt == m.end()){
        cout << "Not found\n";
    }else {
        cout << (*itt).first << " " << (*itt).second << endl;
    }
}
int main() {
	map<int, string> m;
    m[1]="abc"; // takes O(log(n)) for insertion
    m[3]="cdc";
    m[2]="ajs";
    // using iterator
    map<int, string> :: iterator it;
    for (it=m.begin(); it!=m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }
    cout << endl <<endl;
    // for insertion we can use ".insert()" and pass in key value pair.
    m.insert({7,"njs"});
    // using auto iterator
    // &pr so that it wont create copies
    for (auto &pr : m){
        cout << pr.first << " " << pr.second << endl;
    }
    cout << endl << endl;
    // KEYS are Unique
    // We also cannot have duplicates of keys in maps
    // We can update value of that key but cannnot create another instance in the map with same key and different/same value
    m[7]="kar"; // this will update the instance but create another instance.
    m[6]; // this will have key 6 and empty string in the value
    print(m);
    cout << endl;
    
    // find operation
    search(m,2);
    search(m,9);
    cout << endl;
    
    // erase operation
    // we can give either key or iterator
    m.erase(3); // O(log(n))
    auto r = m.find(6); // returns iterator to key '6'
    if ( r != m.end())
        m.erase(r); // fun: try --r
    print(m);
    
    // clear operation
    m.clear();
    print(m);
	return 0;
}

/*
    NOTE:
    Time complexity for insertion actually depends on key's datatype
    for suppose, we have a map variable 
    map<string, string> m;
    Here key is a string
    so O(log(n)) will not be be the time complexity for insertion
    let 
    m["abcd"]="abcd";
    here the time complexity changes to
    keyString.size() * log(n)
    
    Maps use red black trees to manage themselves for sorting
    
*/
/*
OUTPUT:

1 abc
2 ajs
3 cdc
1 abc
2 ajs
3 cdc
7 njs
print size of map : 5
1 abc
2 ajs
3 cdc
6 
7 kar
2 ajs
Not found
print size of map : 3
1 abc
2 ajs
7 kar

print size of map : 0

*/
