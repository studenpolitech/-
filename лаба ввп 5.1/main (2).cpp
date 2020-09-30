#include<iostream>
#include<math.h>
using namespace std;
 int main(){
     
     float a, b, c, ac, bc, sum;
     setlocale(LC_ALL, "Rus");
     cout<<"Введите координату точки а"<<endl;
     cin>>a;
          cout<<"Введите координату точки b"<<endl;

     cin>>b;
          cout<<"Введите координату точки c"<<endl;

     cin>>c;

     ac=abs(c-a);
     bc=abs(c-b);
     sum=ac+bc;
          cout<<"Длина отрезка ас равна "<<endl;

     cout<<ac<<endl;
               cout<<"Длина отрезка bс равна "<<endl;

          cout<<bc<<endl;
                    cout<<"Сумма отрезков равна  "<<endl;

               cout<<sum<<endl;


     return 0 ;
     
 }