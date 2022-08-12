#include <bits/stdc++.h>
using namespace std;
int main(){
    int x; // --> 1 iteration
    int sum=0; // --> 1 iteration
    sum=x+x; // --> 1 iteration

    // T(n)= 1 + 1 + 1 =3 --==> O(3) --- O(1)

    int n; // --> 1
    cin >> n; // --> 1
    while(n--){ // ----------+> n
        x++; // --> 1
        sum=sum+x; // --> 1
        // 1+1 = 2
    }

    // T(n)= 5 + 2*n ----==>> O(n)
}
// TIME COMPLEXITY

// CONSTANT TIME OPERATION
// O(1)

// order of n (highest order preference)
// O(n), O(nlogn), O(n^2), O(n^3)


/*
ONLINE PLATFORM iterations

in ONE second
    1 sec -- around 10^7 to 10^8

iterations
if 
    10^7 iterations done in 1 sec
    10^8 ---> 10 sec
    10^9 ---> 100 sec
    10^10 ---> 1000 sec

*/
