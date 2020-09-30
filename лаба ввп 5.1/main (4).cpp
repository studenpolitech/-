#include<iostream>
#include<math.h>
using namespace std;
 int main(){
     setlocale(LC_ALL, "Rus");
     
     float x1, x2, y1, y2, an, ap, p, s;
     cout<<"Введите координаты х1" <<endl;
     cin>>x1;
          cout<<"Введите координаты х2" <<endl;

     cin>>x2;
          cout<<"Введите координаты y1" <<endl;

     cin>>y1;
          cout<<"Введите координаты y2" <<endl;

     cin>>y2;

an =sqrt((x2-x1)*(x2-x1)+(y1-y1)*(y1-y1));
ap =sqrt((x2-x2)*(x2-x2)+(y2-y1)*(y2-y1));
p=2*(an+ap);
s=(an*ap);
     cout<<"Периметр равен" <<endl;

cout<<p<<endl;
     cout<<"Площадь равна" <<endl;

cout<<s<<endl;


     return 0 ;
     
 }