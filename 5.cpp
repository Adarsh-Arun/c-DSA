//bubble sort;

#include <iostream>
using namespace std;

void bubble_sort(int arr[], int  n){
    for (int i=n-1; i>=0; i--){
        for (int j=0; j<=i-1; j++){
            if (arr[j]> arr[j+1]){
                int temp= arr[j+1];
                arr[j+1]= arr[j];
                arr[j]= temp;               
            }
        }
    }
}

void optimized_bubble(int arr[], int  n){
    for (int i=n-1; i>=0; i--){
        int didswap=0;
        for (int j=0; j<=i-1; j++){
            if (arr[j]> arr[j+1]){
                int temp= arr[j+1];
                arr[j+1]= arr[j];
                arr[j]= temp;    
                didswap =1;           
            }
        }
        if (didswap==0){
            break;
        }
    }
}

int main (){
    int n;
    cout << "enter the size of array :"<< endl;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cout << "enter the elements of array : "<< " " << endl;
        cin >> arr[i];
    }
    cout << "Unsorted aaray :" << " ";
     for (int i=0; i<n; i++){
        cout << arr[i]<< " ";
     }
    cout << endl;
    cout << "Sorted array : "<< " ";
    bubble_sort(arr, n);
     for (int i=0; i<n; i++){
        cout <<  arr[i]<< " ";
     }
    return 0;
}