//selection sort;

#include <iostream>
using namespace std;

void selection_sort(int arr[], int  n){
    for (int i=0; i<=n-2; i++){
        int mini=i;
        for (int j=i; j<=n-1; j++){
            if (arr[j]< arr[mini]){
                mini =j ;
            }
        }
        int temp= arr[mini];
        arr[mini]= arr[i];
        arr[i]= temp;
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
    selection_sort(arr, n);
     for (int i=0; i<n; i++){
        cout <<  arr[i]<< " ";
     }
    return 0;
}