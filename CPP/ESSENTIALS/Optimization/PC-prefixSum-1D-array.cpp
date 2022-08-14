//  PRECOMPUTATION TECHNIQUE -- prefix sum in 1D arrays

/*
    Given array a of N integers
    Given Q queries and in each query
    given L and R,
    print sum of array elements fromm L to R
    (L and R included)
    
    (occurences of the number)

    Constraints
    1 <= N <= 10^5
    1 <= a[i] <= 10^9
    1 <= Q <= 10^5
    1 <= L, R <= N
*/
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
long long pfSum[N];
int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> pfSum[i];
        pfSum[i] = pfSum[i] + pfSum[i-1];
    }
    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << pfSum[r]-pfSum[l-1] << endl;
    }
    // after preComputation
    // O(N)+O(q)
    // worst case (10^5 + 10^5)
    // complexity is order of 10^5
    // which will take around 1s  
}



/*
// Before precomputation

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N];
int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    int q;
    cin >> q;
    while(q--){
        int l, r;
        long long  sum=0;
        cin >> l >> r;
        for(int i=l; i<=r; i++){
            sum = sum + a[i];
        }
        cout << sum << endl;
    }
    // before preComputation
    // O(N)+O(q*r)
    // worst case (10^5 + 10^5 * 10^5)
    // complexity is order of 10^10
    // which will take around 1000s  
}
*/
