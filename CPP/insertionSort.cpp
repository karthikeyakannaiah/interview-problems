#include <iostream>
#include <climits>
using namespace std;
// insertion sort
int main(){
    int n, key;
    cout << "enter size of array :\n";
    cin >> n;
    int arr[n];
    cout << "enter array :";
    for (int i = 0; i< n; i++){
        cin >> arr[i];
    }
    for ( int i = 1; i < n; i++){
        int current = arr[i];
        int j = i-1;
        while ( arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for (int i = 0; i< n; i++){
        cout << arr[i];
    }cout << endl;
    return 0;
}
