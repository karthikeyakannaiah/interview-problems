#include <iostream>
#include <climits>
using namespace std;
// bubble sort
int main(){
    int n, key;
    cout << "enter size of array :\n";
    cin >> n;
    int arr[n];
    cout << "enter array :";
    for (int i = 0; i< n; i++){
        cin >> arr[i];
    }
    int counter=1;
    while (counter < n){
        for(int i =0; i < n-counter; i++){
            if (arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }counter++;
    }
    for (int i = 0; i< n; i++){
        cout << arr[i];
    }cout << endl;
    return 0;
}
