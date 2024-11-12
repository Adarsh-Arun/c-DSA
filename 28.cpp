// combining two array 

# include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of first array : ";
    cin >> n;
    
    int m;
    cout << "Enter the size of second array : ";
    cin >> m;
    
    int arr[n];
    int brr[m];
    
    for (int i=0; i<n; i++){
        cout<<"Enter the "<< i<< " elements of first array : " ;
        cin>> arr[i];
    }
    
    for (int i=0; i<m; i++){
        cout<<"Enter the "<< i<< " elements of second array : " ;
        cin>> brr[i];
    }
    
    cout<<"The elements of first array : " ;
    for (int i=0; i<n; i++){
        cout<< " "<<  arr[i];
    }
    
    cout << endl;
    
    cout<<"The elements of second array : " ;
    for (int i=0; i<m; i++){
        cout<< " "<<  brr[i];
    }
    
    cout << endl;
    
    int o= n+m;
    int com[o];
    
    for (int i=0; i<n; i++){
        com[i]= arr[i];
        
    }
    
    for (int i=0; i<m; i++){
        com[n + i]= brr[i];
        
    }
    
    cout<<"The elements of combined array : " ;
    for (int i=0; i<o; i++){
        cout<< " "<<  com[i];
    }
    
    return 0;
}