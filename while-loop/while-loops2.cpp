//sum of first n natural numbers
#include<iostream>
using namespace std;

int main(){
    int n;
    int i=1;
    int sum=0;

    cout<< "Enter n: ";
    cin>> n;

    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<< "Sum= "<< sum;


    return 0;
}