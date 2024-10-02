// pair of datatypes;

#include <iostream>
// #include <bits.h>
// #include <bits/stdc++.h>
using namespace std;


void seen (){
    cout << "Given void fun is called "<< "\n";

}

int main(){


    int a= 10 ;
    int b= 20 ;
    // normal pair 
    pair<int, int> p = {1, 3};
    cout<< "normal pair :";
    cout << p.first<< " "<< p.second << "\n";

    //inherited pair 
    pair<int , pair <int , int >>  r =  { 1, {2,3}};
    cout << "inherited pair : ";
    cout << r.first << " "<< r.second.first << " "<< r.second.second << " "<< "\n";

    // pair of array
    pair <int , int > arr[]= {{1,2}, {3,4}, {5,6}};
    cout<< "Pair of array";
    cout << arr[0].first << " " << arr[0].second << " "<< arr[1].first << " "<< arr[2].second<< "\n";

    // pair of given vecctor
    vector <int> p4;
    p4.push_back(1);
    p4.push_back(2);
    pair <vector<int> , vector<int> > v = {p4,p4};
    cout << "pair of vector : ";
    cout << p4.first[0] << " "<< p4.first[1] << " "<< "\n";

    // pair of pointer
    pair <int*, int*> p1 = {&a, &b};
    cout << "Pair of pointer : ";
    cout << *p1.first << " "<< *p1.second << "\n";

    // pair of reference
    pair <int&, int&> p2 = {a, b};
    cout << "Pair of reference : ";
    cout << p2.first << " "<< p2.second << "\n";

    // pair of function
    pair <void(*)(), void(*)()> p3 = {seen, seen};
    cout << "Pair of function : ";
    p3.first();
    p3.second();
    


    seen();
    
    
    return 0;
}