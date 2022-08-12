// C++ code declaring a global 1-D
// array of size 10^8
#include <bits/stdc++.h>
using namespace std;

// Variable N is initialized
const int N = 1e8;

// Global array is declared
int a[N];

// Driver Code
int main()
{
    for (int i = 0; i < N; ++i) {
        a[i] = i;
    }
    cout << a[N - 1];
    return 0;
// OUTPUT
/*

Memory Limit Exceeded

or

Segmentation Fault (SIGSEGV)
    */
}


// ERRORS
/*
    CL --- COMPILATION ERROR
    Compilation error refers to a state when a compiler fails to compile a piece of computer program source code, 
    either due to errors in the code, or, more unusually, 
    due to errors in the compiler itself. 
    A compilation error message often helps programmers debugging the source code.


    MLE --- Memory limit exceeded
    Memory Limit Exceeded Error: It typically occurs when no memory limit has been set. 
    It means that the program is trying to allocate more memory than the memory limit for the particular problem. 

    For Example, if the memory limit is 256 MB, then there is no need to write code that requires more than 256 MB of memory. 
    Generally, all online platforms have the same memory limit as 256 MB. 
    There might be many more reasons due to which this error can occur.

    RE --- RUNTIME ERROR
    Runtime Error: A runtime error in a program is an error that occurs while the program is running after being successfully compiled. 
    there are few reasons for runtime errors
    1 segmentation faults or illegal accessing of memory
    2 Sometimes Array or vector runs out of bound of their limits resulting in a runtime error.
    3 Some silly mistakes encountered while coding in hurry, sometimes leads to runtime error.


    TIME (COMPILATION vs EXECUTION)

    Compilation time 
    time taken for compiling code
    during this time
    name.cpp files compiles into a.out (executable file)

    Execution time
    time taken for executing
    during this time
    a.out is executed


    #include<bits/std++.h>
    will increase compilation time but
    not the execution time
    

    online platforms only consider execution time

*/

/*
    Recursive code errors

    sometimes recursive code leads to exceed time 

    sometimes leads to segmentation faults

    this may be caused by continuous recursion beyond limits

*/
