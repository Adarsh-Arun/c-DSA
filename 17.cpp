//if-else operator


#include <iostream>
using namespace std;

int main(){
    int age;
    cout <<"Enter the age :";
    cin >> age;
    cout << "The given age is :" << age<< "\n";
    if (age <= 12){
    cout<< "You are child";}
    else if ( 13 <= age && age <= 19){
    cout << "You are teen";}
    else {
    cout <<"You are adult";}
    
    
    return 0;
}