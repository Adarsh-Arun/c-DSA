#include <iostream>
using namespace std;


int main()
{
    int a[1]= {1};
    int min=a[0];
    int max=0;
    int index_min=0;
    int index_max=0;
    for (int i=0; i<1; i++){
        if (a[i]<min){
            min=a[i];
            index_min=i;
        }
    }
    for (int i=index_min; i<1; i++){
            if (a[i]>max){
            max= a[i];
            index_max=i;
        }
    }
    
    int found = (max-min);
    cout << found<<endl;
    cout << "index of min :"<< index_min<< endl;
    cout << "min : "<< min << endl;
    cout << "index of max :"<< index_max<< endl;
    cout << "max : " << max;

    return 0;
}