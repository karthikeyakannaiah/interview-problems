//  PRECOMPUTATION TECHNIQUE -- prefix sum in 2D arrays

/*
    Given 2D array a of N*N integers
    Given Q queries and in each query
    given a, b, c, d
    print sum of rectangle represented 
    by (a,b) as top left point and 
    (c,d) as right bottom point
    
    (occurences of the number)

    Constraints
    1 <= N <= 10^3
    1 <= a[i][j] <= 10^9
    1 <= Q <= 10^5
    1 <= a, b, c, d <= N



for understanding,

    0 1 2 3 4 5 ...
    1
    2 (a,b)----|
    3  |-------|    ---> print this area's sum
    4  |----(c,d)
    5
    ...

    
*/
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
long long arr[N][N];
long long pfSum[N][N];
int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=n; ++j){
            cin >> arr[i][j];
            pfSum[i][j] = arr[i][j] + pfSum[i-1][j] + pfSum[i][j-1] - pfSum[i-1][j-1];
            // arr[i][j] = arr[i][j] + arr[i][j-1];
        }
    }
    int q;
    cin >> q;
    while(q--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        // long long sum = 0;

        cout << pfSum[c][d] - pfSum[a-1][d] - pfSum[c][b-1] + pfSum[a-1][b-1] << endl;
        // for(int i=a; i<=c; ++i){
        //     sum = sum + arr[i][d]-arr[i][b-1];
        // }
        // cout << sum << endl;
    }
    // after preComputation
    // O(N^2)+O(q)
    // worst case (10^3 * 10^3 + 10^5 )
    // complexity is order of 10^6
    // which will take around 1s  
}



/*
// Before precomputation

#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
long long arr[N][N];
int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=n; ++j){
            cin >> arr[i][j];
        }
    }
    int q;
    cin >> q;
    while(q--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        long long sum = 0;
        for(int i=a; i<=c; ++i){
            for(int j=b; j<=d; ++j){
                sum = sum + arr[i][j];
            }
        }
        cout << sum << endl;
    }
    // before preComputation
    // O(N^2)+O(q*N*N)
    // worst case (10^3 * 10^3 + 10^5 * 10^3 * 10^3)
    // complexity is order of 10^11
    // which will take around 10000s  
}  
}
*/


/*
INPUT:
3
3 6 2 
8 9 2
3 4 1
2
1 1 2 2
1 2 3 3

OUTPUT:
26
24

*/
