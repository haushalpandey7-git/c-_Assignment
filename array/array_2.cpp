//find largest element in array
#include<iostream>
using namespace std;
int main(){
    int n[5];
    cout<<"Enter numbers in array:";
    for(int i=0;i<5;i++){
        cin>>n[i];
    }
    int largest=n[0];
    for(int i=1;i<5;i++){
        if(n[i]>largest){
            largest=n[i];
        }
    }
    cout<< "The largest element is= "<< largest;
    return 0;

}