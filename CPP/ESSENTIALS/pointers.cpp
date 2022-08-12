// https://youtu.be/v_qm2Sce7as  (hindi)
#include <bits/stdc++.h>
// Pointers
// stores address of a variable
using namespace std;
int main() {
    int x=0;
    cout << &x << endl; // something like 0x7ffc12ef45dc
    int * p_x;
    p_x= &x;
    cout << p_x << endl; // 0x7ffc12ef45dc
    cout << *p_x << endl; // 0
    *p_x= 5;
    cout << x << endl; // 5

    // pointer addition
    // new_address = old_address + (number*size_of(datatype))
    p_x = p_x + 1;
    cout << p_x << endl; // 0x7ffc12ef45e0
    // new = 0x7ffc12ef45dc + 1*(size_of(int))
    // dc [last two digits] = 220 (hexadecimal to decimal)
    // new = 220 + 1*4 = 224
    // e0 = 224


    // similarily we have pointer subtraction 
    // new_address= current_address - (number * size_of(data type))
}

/*
For the case of ARRAYS
lets say 
    int a[10];
if we 
    cout << a << endl; 
it will return the address of a[0]
it points to first block in the array
so array name itself is a pointer to start address of array
for understanding, just observe

    a == &a[0]
lets assume memory allocation,

    10      14      18      22      26
    a[0]   a[1]     a[2]   a[3]    a[4]

Addition in case of array
    a = a + 1;
it will be similar as pointer
    new = old_addr + 1*(size_of(datatype of array))
    
    new = 10 + 4
    new = 14

So, 
     a=a+1;
will result in a change its to point to 14
now,
    a=14
    *a --> a[1]
    *(a+1) --> a[2]
    *(a+2) --> a[3]
*/

/*
    DOUBLE POINTERS

    int x=9;
    int *px;
    px = &x;
    int **pp;
    pp = &px;

here, 
pp stores address of px and px stores address of x

*pp will return value at px which is address of x

**pp will value at address which is value of *pp
i.e., value at address of x which is value of x itself

    cout << **pp << endl;

 result  --> 9
*/

// function pass by reference

// void func_name(datatype * var){};

// when calling function we pass the address of var

// func_name(&x);
