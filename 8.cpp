// quick sort

#include <iostream>
using namespace std;

void quick_sort(int arr[], int n){
    for ( int i= 0; i< n-1;i++){
        for ( int j= 0; j< n-i-1;j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }        
    }
}

int main (){
    int n;
    cout << " enter the size of array :" ;
    cin >> n;
    int arr[n];
    cout << "Enter the element of array :" ;
    for (int i=0; n>i; i++){
        cin >> arr[i];
    }
    cout << "The unsorted element of array :" ;
    for (int i =0; n>i; i++){
        cout<<arr[i]<< " ";
    }
    cout <<endl<< "The sorted elements of array :";
     quick_sort(arr, n);

    return 0;
}