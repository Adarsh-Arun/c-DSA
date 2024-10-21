// Data types:



#include <iostream>
using namespace std;

int main () {
    //int 
    int a =65;
    int b = 2147483648;
    cout << "int value of a :"<< a<< "\n";
    cout << "int value of b :"<< b<< "\n";
    
    //long 
    long c= 2147483648;
    cout << "long value of c :"<< c<< "\n";
    
    //float
    float d= 65.001;
    cout << "float value of d :" << d<< "\n";
    
    // double
    double e = 10;
    cout << "double value of e :"<< e<< "\n";
    
    //long long
    long long f = 67789688097875;
    cout << "long long value of f :"<< f<< "\n";
    
    // string 
    string g = "hey";
    string h;
    h = "rishu";
    cout << "output of string g :"<<g << "\n" ;
    cout << "output of string h :"<<h << "\n" ;
    
    // getline
    string s;
    getline (cin , s) ;
    cout <<"output of string s :"<<s<< "\n";
    
    //char
    char i;
    i = a;
    cout << "output of char a :"<<i << "\n" ;
    
   

    


    return 0;
}