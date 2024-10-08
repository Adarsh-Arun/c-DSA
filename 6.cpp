//insertion sort;

#include <iostream>
using namespace std;

void insertion_sort(int arr[], int  n){
    for (int i=0; i<=n-1; i++){
        int j=i;
        while (j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
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
    insertion_sort(arr, n);
     for (int i=0; i<n; i++){
        cout <<  arr[i]<< " ";
     }
    return 0;
}