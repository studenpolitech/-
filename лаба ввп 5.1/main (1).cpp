#include<iostream>
#include<math.h>
using namespace std;
 int main(){
     
     float x1, x2, y1, y2, res;
     setlocale(LC_ALL, "Rus");
     cout<<"Введите координату х1"<<endl;
     cin>>x1;
          cout<<"Введите координату х2"<<endl;
     cin>>x2;
          cout<<"Введите координату y1"<<endl;
     cin>>y1;
          cout<<"Введите координату y2"<<endl;
     cin>>y2;
               
     res=sqrt((x2-x1)*(x2-x1)+(y2-y1)+(y2-y1));
  cout<<"Расстояние между двумя точками равно "<<endl;
     cout<<res<<endl;
     return 0 ;
     
 }