#include<iostream>
#include<math.h>
using namespace std;
 int main(){
     setlocale(LC_ALL, "Rus");
     float x1, x2, x3, y1, y2, y3, al, an, ap, P, s, pol;
     cout<<"Введите координату х1" <<endl;
     cin>>x1;
          cout<<"Введите координату х2" <<endl;

     cin>>x2;
          cout<<"Введите координату х3" <<endl;

     cin>>x3;
          cout<<"Введите координату y1" <<endl;

     cin>>y1;
          cout<<"Введите координату y1" <<endl;

     cin>>y2;
          cout<<"Введите координату y3" <<endl;

     cin>>y3;

al =sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
an =sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
ap =sqrt((x3-x2)*(x3-x2)+(y2-y3)*(y2-y3));
P=al+an+ap;
pol=(P/2);
s=sqrt(abs(pol*(pol-al)*(pol-an)*(pol-ap)));
     cout<<"Периметр треугольника равен" <<endl;
cout<<P<<endl;
     cout<<"Площадь тругольника равна" <<endl;

cout<<s<<endl;


     return 0 ;
     
 }