// 1-D Array

#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main (){
    
    int arr[5];
    cout << "Enter the value of array"<< "\n";
    cin >> arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    cout << "The number in 1st place :"<< arr[0]<< "\n";
    cout << "The number in 2nd place :"<< arr[1]<< "\n";
    cout << "The number in 3rd place :"<< arr[2]<< "\n";
    cout << "The number in 4th place :"<< arr[3]<< "\n";
    cout << "The number in 5th place :"<< arr[4]<< "\n";
    
    arr[4] += 10;
    cout << "updated value :" << arr[4]<< "\n";
    
    int value = arr[3];
    value += 10;
    cout << "Number in int value :" << value << "\n";
    
    int i;
    cout << "Enter degree of array"<< "\n";
    cin >> i;
    cout << "Degree of the given array :"<< i<< "\n";
    int arr1[i];
    for (int i=0; i<5; i++){
        cout << "Enter the elements :" ;
        cin >> arr1[i];
    }
    
    cout << "The number in 1st place :"<< arr1[0]<< "\n";
    cout << "The number in 2nd place :"<< arr1[1]<< "\n";
    cout << "The number in 3rd place :"<< arr1[2]<< "\n";
    cout << "The number in 4th place :"<< arr1[3]<< "\n";
    cout << "The number in 5th place :"<< arr1[4]<< "\n";
    
    
    

    
    
    
    
    return 0;
}