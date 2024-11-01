#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
    // float a = 7.7;
    // cout << a<<"\n";
    // float c = a.size;
    // int b = sizeof(a);
    // cout << b;
    // cout << c;
    string str;
    cin >> str;
    string x="Character";
    string y= "Integer";
    string z="Float";
    string p= "Long";
    char a ;
    int b;
    float c;
    long i;
    double j;
    int d= sizeof (a);
    int e= sizeof (b);
    int f= sizeof (c);
    int g= sizeof (i);
    int h= sizeof (j);
    if (str == x){
        cout << d;
    }
    else if (str == y){
        cout << e;
    }
    else if ( str == z){
        cout << f;
    }
    else if (str == p){
        cout <<g;
    }
    else {
        cout << h;
    }
    
 
    
    
    return 0;
}