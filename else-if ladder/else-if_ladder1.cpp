// find largest among three
#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    
    cout<<"Enter first number";
    cin>> a;
        
    cout<<"Enter second number";
    cin>> b;   

    cout<<"Enter third number";
    cin>> c;

    if(a>b && a>c){
        cout<< "Largest= " << a;
    }
    else if (b>a && b>c){
       cout<< "Largest= " << b;
    }
    else{
        cout<< "Largest= "<< c;
        
    }
    

    return 0;
}