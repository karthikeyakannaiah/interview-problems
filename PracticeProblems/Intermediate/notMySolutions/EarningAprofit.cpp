// Not able to understand
// https://www.codechef.com/problems/ICL1905?tab=statement

#include <bits/stdc++.h>
using namespace std;
int main(){
    long int t;
    cin >> t;
    while(t--){
        long int n, a;
        cin >> n >> a;
        long int ans=0;
        vector<long int> c, d;
        for (long int i = 0; i < n; ++i){
            int ci, di;
            cin >> ci >> di;
            c.push_back(a-ci);
            d.push_back(di);
            for (long int i=0; i<n; i++){
                long int sum=0;
                long int dmax = INT_MIN;
                long int dmin = INT_MAX;
                for(long int j=i; j<n; j++){
                    sum+=c[j];
                    dmax = max(dmax, d[j]);
                    dmin = min(dmin, d[j]);
                    int gap = pow(dmax-dmin,2);
                    // cout << sum << " " << gap << endl;
                    ans= max(ans, sum-gap);
                    // cout << ans << endl;
                }
            }
        }
        cout << ans;
    }
}
