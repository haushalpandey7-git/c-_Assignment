//using 2 namespace with different variables
#include<iostream>
using namespace std;

namespace A{
    int x=5;
}
namespace B{
    int y=6;
}
int main(){

    cout<< A::x<<"\n";
    cout<< B::y;


}