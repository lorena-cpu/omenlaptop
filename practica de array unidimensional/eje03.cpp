#include <iostream>
#include <string>
using namespace std;//suma en array
int main () {
    int numero = 8;
    string alumnas [numero] ;

    for( int i=0 ; i< numero ; i++){
        cout <<"ingresa la chica numero "<<(i+1)<< " : ";
        cin>>alumnas[i];
    }
    cout <<"nombres ingresados: "<<endl;
    for (int i=0 ; i<numero; i++){
        cout <<"chica"<<(i+1)<<":"<<alumnas[i]<<endl;
    }
    return 0;
}