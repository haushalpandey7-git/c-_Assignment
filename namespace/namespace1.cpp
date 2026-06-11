//creating custom namespace and displaying a value

#include<iostream>
using namespace std;

namespace hello{
    int a=5;
}
int main(){
    cout<< hello:: a;



    return 0;
}