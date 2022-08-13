/*
GIVEN VALUE N PRINT N FACTORIAL

1<=N<=1000

PRINT ANSWER MODULO M

ANS % M
 
WHERE M = 47

-- WHERE M = 10 ^ 9 + 7 -- usually in coding competitions

*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int fact=1;
    long long int M = 47; // we have used 47 in this case, which is also a prime
    cout << M << endl;
    for ( int i = 2; i <=n; i++){
        fact = (fact * i) %M;
    }
    cout << fact << endl;
}

// https://cp-algorithms.com/algebra/factorial-modulo.html#implementation
// MODULAR ARITHMETIC (M)
/*
    (a+b)%M == (a%M + b%M) % M
    
    (a*b)%M == (a%M * b%M) % M

    (a-b)%M == (a%M - b%M + M) % M 

    (a/b)%M == (a%M * (b^(-1))%M) / M

    here b-inverse is found by doing modular (aka binary) exponentiation 


    M is usually a prime number

    Significance of M = 10 ^ 9 + 7

    1 it is very close to integer maximum range
        due to operating with this value, 
        we can save the value in 'int' datatype itself
        without extending by long

    2 MMI multiplicative inverse
        10 ^ 9 + 7 --> is a ideal choice for M because 
        it is a prime number
        ( it is safe to largest prime within this range )
        this makes it a ideal choice cause 
        we can find multiplcative inverse of any number between
        1 to M  <==>  1 to 10 ^ 9 + 7
*/
