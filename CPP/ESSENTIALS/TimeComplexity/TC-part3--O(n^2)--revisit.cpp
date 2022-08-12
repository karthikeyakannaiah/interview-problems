#include <bits/stdc++.h>
using namespace std;
// N < 100000
// a[i][j] < 100000


// ALGORITHM which doesnt look like O(n^2) but it is
int main(){
    int n; // --> 1
    cin >> n; // --> 1
    int count = 0; // --> 1
    for(int i = 0 ; i <= n; i++){ // ---==+> n
        for(int j =0; j < i; j++){ // - >> i
            count++; 
        }
    }
    
}
// TIME COMPLEXITY 
/*
    for i = 0, 0 loops inside
    for i = 1, 1 loops inside
    for i = 2, 2 loops inside
    for i = 3, 3 loops inside
    ...
    for i = n, n loops inside
    

    iterations happening for every iteration in first loop
    
    1+2+3+...+n = n*((n+1)/2)
    T(n)= (n^2 + n)/2

    O(n^2)

*/
