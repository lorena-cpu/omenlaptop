#include <iostream>
//practica de break y continue//
using namespace std;
int main () {
    for(int i=1; i <= 20; i++) {
        if(i == 13){
            continue;
        }
        cout<<i<<'\n';
    }
}