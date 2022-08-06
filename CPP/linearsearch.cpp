#include <iostream>
#include <climits>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for ( int i = 0; i<n; i++){
        if(key == arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int n, key;
    cout << "enter size of array :\n";
    cin >> n;
    int arr[n];
    cout << "enter array :";
    for (int i = 0; i< n; i++){
        cin >> arr[i];
    }
    cout << "enter key: ";
    cin >> key;
    int keyIndex= linearSearch(arr,n,key);

    if (keyIndex>-1){
        cout << "key is at index: " << keyIndex;
    }
    else{
      cout << "key not found" << endl;
    }


    return 0;
}
