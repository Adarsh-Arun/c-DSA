// void - function

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fun(int x, int y,string name){
    if (x>=10 && x<=20 ) {
        if (y>=10 && y<=20 ){
        cout << "The given value is :"<< x <<"\n";
        
        
        }
    }
    cout<< "my name is " << name<<"\n";
    
  
    
}
    
int main(){
    int x;
    int y;
    string name;
    cin>> x;
    cin >>y;
    cin >> name;
    fun(x, y, name);
    
    int a;
    int b;
    string name2;
    cin>> a;
    cin >>b;
    cin >> name2;
    fun(a, b, name2);

    
    
    return 0;
}