#include<iostream>
#include<math.h>
using namespace std;
 int main(){
     setlocale (LC_ALL, "Rus");
     float a, b, c, ac, bc, prois;
     cout<<"Введите координату а" <<endl;
     cin>>a;
          cout<<"Введите координату с" <<endl;

     cin>>c;
          cout<<"Введите координату b" <<endl;

     cin>>b;
     ac=abs(c-a);
     bc=abs(c-b);
     prois=ac*bc;
          cout<<"Произведение длин равно" <<endl;

               cout<<prois<<endl;


     return 0 ;
     
 }