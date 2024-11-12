#include<iostream>
#include<cmath>
using namespace std;
  void al (int x,int y, int &z){
  int resultado = 1;
  for(int i=0; i<y ;i++){
     resultado *=x;
     z= resultado;}
  }
  int main () {
    int a,b,c;
    cout<<"ingrese el valor de a y b"<<endl;
    cin>>a >>b;
    al(a,b,c);
    cout<<a<<" elevado "<<b<<" es igual "<<c;
  
  return 0;
   } 