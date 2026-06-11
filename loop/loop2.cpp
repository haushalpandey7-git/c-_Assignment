//factorial of a number
#include<iostream>
using namespace std;

int main(){
    int n;
    int f=1;
    int i;
    cout<<"Enter a number:";
    cin>> n;
    for(i=1;i<=n;i++){
        f=f*i;
    }
    cout<< f;
    
    return 0;
}