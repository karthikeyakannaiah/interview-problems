#include <bits/stdc++.h>
using namespace std;
/*
Given T testcases and an array of size N
print sum of array in each testcase

constraints
1 <= T <= 1000
1 <= N <= 1000
1 <= a[i] <= 1000
7
Note : SUM OF N OVER ALL TESTCASE IS < 10^7
*/

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = 0;
        int count = 0;
        while(n--){
            int x;
            cin >> x;
            sum = sum + x;
            count++;
        }
        cout << sum << endl;
    }
}
// TIME COMPLEXITY 
/*
without considering the note

    O(t*n)

    In worst case

    if t == n ==> 1000,
    
    0(n^2)

    10^3 * 10^3 = 10^6 ---> can be done within a second

*/

/*
    BUT

    if we consider the note

    SUM OF N OVER ALL TESTCASE IS < 10^7


    In the firstloop,

    t = 0 --> given n is n_0
    t = 1 --> n_1
    t = 2 --> n_2
    t = 3 --> n_3
    ...
    t = n --> n_N

    total or count

    n_0 + n_1 + n_2 + n_3 + ... + n_N
    

    statement says that this count is < 10^7

    n_0 + n_1 + n_2 + n_3 + ... + n_N < 10^7

    complexity is O(count)
    at its max case, O(10^7) which takes around a second
*/
