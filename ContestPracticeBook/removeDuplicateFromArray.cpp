// Remove duplicate number from the array without using extra array
// and return the total number of unique number

#include<iostream>
using namespace std;
int removeDuplicate(int arr[]);
int main(){
    int arr[] = {1, 3, 3, 4, 4, 6, 6, 6, 7, 7};
    int l = sizeof(arr)/sizeof(int);
    cout << sizeof(arr)<<endl;
    cout << sizeof(arr[0])<<endl;
    cout << l<<endl;
    removeDuplicate(arr);
}

int removeDuplicate(int arr[]){
    cout << sizeof(arr)<<endl;
    cout << sizeof(arr[0])<<endl;
    for(int i=0; i<10; i++){
        cout << arr[i];
    }
}
