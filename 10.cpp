//smallest and second smallest

#include <iostream>
using namespace std;

void sort (int a[], int n){
    for(int i=n-1 ;i>=0; i--){
        for (int j=0; j<=i-1; j++){
            if (a[j]>a[j+1]){
                int temp =  a[j+1];
                a[j+1]= a[j];
                a[j]= temp;
            }
        }
    }
}

int smallest (int a[], int n){
    return a[0];
} 

// int ssmallest (int a[], int n){
//     int s =a[0];
//     int ss = -1;
//     for (int i = 1; i<n; i++){
//         if (a[i]<s){
//             ss= s; 
//             s = a[i];
//         }
//         else if (a[i]>ss && a[i]<s){
//             ss = a[i];
//         }
//     }
//     return ss;
// }


int main (){
    int n;
    cout << "Enter the size of an array :";
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cout << "Enter the elements of an array :";
        cin >> a[i];
    }
    cout <<endl;
    cout << "The elements of an array :";
      for (int i=0; i<n; i++){
        cout << a[i];
    }

    cout << endl;
    sort(a ,n);
    cout << "The sorted array is : ";
     for (int i=0; i<n; i++){
        cout << a[i];
    }
    
    cout << endl;
    int s = smallest (a,n);
    cout << "The smallest value in array :"<< s;

    cout << endl;
    int ss= ssmallest(a,n);
    cout << "The second smallest value in array :"<< ss;

    return 0;
}