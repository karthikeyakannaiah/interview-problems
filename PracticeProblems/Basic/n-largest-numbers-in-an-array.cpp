#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, key;
    cin >> n;
    int arr[n];
    for (int i = 0; i< n; i++){
        cin >> arr[i];
    }
    int s;
    cin >> s;
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
    while(s--){
        cout << arr[n-1] << endl;
        n--;
    }
    return 0;
}
