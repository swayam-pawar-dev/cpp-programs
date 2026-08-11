#include <iostream>
#include <string>
using namespace std;
void bubblesort(int arr[], int x){
    for(int i=0;i<x;i++){
        if(arr[i]>arr[i+1]){
            int temp;
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    cout <<"sorted array is:";
    for(int j = 0; j<x; j++){
        cout << arr[j];
    }
}
int main(){
    int x;
    cout << "Enter an array length:";
    cin >> x;
    int arr[x];
    cout <<"enter array elements:";
    for(int i = 0; i < x ; i++){
        cin >> arr[i];
    }
    bubblesort(arr, x);
    return 0;
}