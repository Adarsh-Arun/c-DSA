#include <iostream>
using namespace std;

int main (){

    int a[5]={1,2,3,4,5};
    for (int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
    cout << endl;
    int s = a[0];
    int ss= -1;
    for (int i=0; i<5; i++){
        if ( a[i]>s){
            ss=a[i];
            
        }
    }
    return ss;




    return 0;
}