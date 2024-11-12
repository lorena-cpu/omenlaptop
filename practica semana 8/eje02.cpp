#include<iostream>
#include<cmath>
using namespace std;
int saludo( int &b) {
    b=50;
 return b;
}
int main(){
    int b=100;
    saludo( b);
    cout<<" b es igual "<<b;
    return 0;
}
