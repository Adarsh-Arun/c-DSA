// 2-D Array

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
    int row;
    int col;
    int i;
    int j;
    cout <<"Enter the number of Rows :"<< "\n";
    cin >> row;
    cout <<"Enter the number of Columns :"<<"\n";
    cin >>col;
    cout <<"The number of Rows :"<< row<< "\n";
    cout <<"The number of Columns :"<<col << "\n";
    int arr[row][col];
    
    for (i=0; i<row; ++i){
        for (j=0; j<col; ++j){
            cout << "Enter the element in ("<<i << ", "<<  j<< "): ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    
    cout << "Total elements in array :"<< arr[row][col]<<"\n";
    cout << "Value at position 0-0 :"<< arr[0][0]<<"\n";
    cout << "Value at position 0-1 :"<< arr[0][1]<<"\n";
    cout << "Value at position 0-2 :"<< arr[0][2]<<"\n";
    cout << "Value at position 1-0 :"<< arr[1][0]<<"\n";
    cout << "Value at position 1-1 :"<< arr[1][1]<<"\n";
    cout << "Value at position 1-2 :"<< arr[1][2]<<"\n";
    cout << "Value at position 2-0 :"<< arr[2][0]<<"\n";
    cout << "Value at position 2-1 :"<< arr[2][1]<<"\n";
    cout << "Value at position 2-2 :"<< arr[2][2]<<"\n";
    
    
    return 0;
}