#include <bits/stdc++.h>
using namespace std;
// N < 100000
// a[i][j] < 100000

int main(){
    int n; // --> 1
    int a[n][n]; // --> 1
    cin >> n; // --> 1
    for (int i = 0; i<n; i++){      // --==+> n
        for (int j =0; j<n; j++){   // --==+> n
                cin >> a[i][j]; // --> 1
        }
    }
    for (int i = 0; i<n; i++){      // --==+> n
        for (int j =0; j<n; j++){   // --==+> n
            cout << a[i][j] << endl; // --> 1
        }
    }
}
// TIME COMPLEXITY O(n)
/*
    T(n)= 3 + n^2 + n^2 ----==+> O(n^2)

*/

/* 
    WORST CASE
    n = 100000
    then 

    n^2 = 10^10 
    which will take around 1000 secs (10^7 --> 1 sec)
    
    it will be worst solution 
    as lot of online compilers have time limits of 1-10 sec
*/
