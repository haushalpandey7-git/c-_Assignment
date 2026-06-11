//store and display 5 numbers using array
#include<iostream>
using namespace std;

int main(){
    int n[5];
    cout<< "Enter 5 numbers:";
    for(int i=0; i<5;i++){
    cin>> n[i];
    }
    cout<< "The elemnts are:";
    for(int i=0;i<5;i++){
        cout<< n[i]<< " ";
    }


    return 0;
}