// String


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "missisippi";
    int len = s.size();
    cout << "The length of the given string : "<< len<<"\n"; 
    cout << "The letter at starting :"<< s[0]<<"\n";
    cout << "The letter at last :"<< s[len-1]<<"\n";
    
    s[len-1]= 'z';
    cout << "The letter at last :"<< s[len-1];
    
    
    
    
    
    return 0;
}