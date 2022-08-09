#include <iostream>
#include <climits>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int high=n;
    int low=0;
    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid]==key){
            return mid;
        }else if ( arr[mid]>key){
            high = mid-1;
        }else {
            low = mid+1;
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
    int keyIndex= binarySearch(arr,n,key);

    if (keyIndex>-1){
        cout << "key is at index: " << keyIndex;
    }
    else{
      cout << "key not found" << endl;
    }
    return 0;
}
