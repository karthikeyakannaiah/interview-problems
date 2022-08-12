#include <bits/stdc++.h>
using namespace std;
// N < 100000
// a[i][j] < 100000

int main(){
    int n; // --> 1
    cin >> n; // --> 1
    int count = 0; // --> 1
    while(n>0){ // ---==+> log(n)
        n=n/2; 
        count++;
    }
    cout << count << endl;
    
}
// TIME COMPLEXITY O(log(n)) 
/*
    let k = count

    Now we have, 
    
    F(n)= n/2^k + 3

    assume,
    n/2^k = 1

    n = 2^k
    apply log to the base 2
    log(n) = k log2 
    -- log2 to base 2 = 1 --

    log(n)=k

    T(n) = log(n) + 3

    O(log(n))

*/

// one of the best desirable complexity
