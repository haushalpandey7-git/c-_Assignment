// funtion to add two numbers 
#include<iostream>
using namespace std;
int sum(int x, int y){
    return x+y;
}

int main(){

    int a;
    int b;
    cout<< "Enter first number:";
    cin>> a;
    cout<< "Enter second number:";
    cin>> b;

    cout<< "Sum of two number is= "<< sum( a, b);
    return 0;
}