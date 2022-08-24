// https://www.codingninjas.com/codestudio/problems/sum-or-product_920478?leftPanelTab=0
long long int sumOrProduct(long long int n, long long int q)
{
	  long int m = 1e9+7;
    unsigned long long int res = 1;
    if(q==1){
        res = (n/2.0)*(n+1);
    }else{
        for(long long int i=1; i<=n; i++){
            res = res*i%m;
        }
    }
    return res;
}
