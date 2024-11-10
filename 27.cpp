// sum of all elements of array 


#include <iostream>
using namespace std;


int main()
{
    int n;
    cout << "Enter the size of array : " ;
    cin >> n;
    
    int arr[n];
    
    for (int i=0 ; i <n; i++){
        cout<< "Enter the elements of array : " ;
        cin >> arr[i];
    }
    
    cout<< "The elements of array :" << " ";
     for (int i=0 ; i <n; i++){
        cout << " "<< arr[i];
    }
    
    cout << endl;
    
    int sum =0;
    
    for (int i=0; i<n; i++){
        sum += arr[i];
    }
    
    cout<< "Sum of all elements of array : " << sum;
    

    return 0;
}