//function to find square of a number
#include<iostream>
using namespace std;
int square(int(a)){
    return a*a;
}

int main(){

    int num;
    cout<< "Enter a number:";
    cin>> num;

    cout<< "square is= "<< square(int(num));

    return 0;
}