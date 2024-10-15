#include <iostream>
using namespace std;

int main (){

    // int a[5]= {9,4,1,7,8};
    // cout << a[0];

    // auto first = a.begin();
    // auto last = a.end();

    // sort (first , last);
    // cout << a[0];

    vector<int> vec = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

    // Defining the range as whole vector
      auto first = vec.begin();
      auto last = vec.end();
      
      // calling the sort for the above defined range
    sort(first, last);

    for (auto i: vec){
        cout << i << " ";
    }


    return 0;
}