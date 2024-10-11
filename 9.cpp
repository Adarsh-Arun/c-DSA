// Largest and second largest val in array

#include <iostream>
using namespace std;


void sort (int a[], int n){
    for (int i = n-1; i>=0; i--){
        for (int j=0; j<=i-1; j++){
            if ( a[j]> a[j+1]){
                int temp= a[j+1];
                a[j+1] = a[j];
                a[j]= temp;
            }
        }
    }
}
//---------------------------------------------------------------------------------------------------
void largest(int a[], int n){
    cout << a[n-1];
}
//---------------------------------------------------------------------------------------------------
int slargest (int a[], int n){
    int lar= a[0];
    int slar=-1;
    for (int i = 1; i<n; i++){
        if (a[i]> lar){
            slar = lar;
            lar = a[i];
        }
        else if (a[i]<lar && a[i]> slar){
            slar = a[i];
        }
    }
    return slar;
        
}
//----------------------------------------------------------------------------------------------------


int main (){
    int n;
    cout << "Enter size of an array : ";
    cin >> n;
    int a[n];
    for ( int i=0; i<n; i++){
        cout << "Enter the elements of array :";
        cin>> a[i];
    }
//-------------------------------------------------------------------------------------------------------
    cout << "The elements of array :";
    for ( int i=0; i<n; i++){
        cout << a[i];
    }
//--------------------------------------------------------------------------------------------------------
    cout << endl;
    cout << "sorted array : ";
    sort(a, n);
    for ( int i=0; i<n; i++){
        cout << a[i];
    }
//-------------------------------------------------------------------------------------------------------
    cout << endl;
    cout << "Largest value : ";
    largest(a, n);
//-------------------------------------------------------------------------------------------------------
    cout << endl;
    cout << "Second largest : ";
    int s = slargest(a , n);
    cout << s;
//-------------------------------------------------------------------------------------------------------

    return 0;
}