//return - function



#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int sum(int x, int y){
    
    int z = x+y;
    return z;
}
 
int sub (int x, int y){
    int z = x-y ;
    return z;
}

int max ( int x , int y){
    int z=max(x,y);
    return z;
}




int main () {
    int x, y;
    cin >> x>> y;
    
    int res1 = sum (x, y);
    cout << res1<<"\n";
    
    int z=min(x,y);
    cout << z<<" \n";
    
    int res2 = sub ( x,y );
    cout << res2<< "\n";
    
    int res3 = max ( x,y );
    cout << res3<<"\n";
    
    
    
    
    return 0;
    
}
