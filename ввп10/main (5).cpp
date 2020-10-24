#include<iostream>
#include<math.h>
using namespace std;
int main(){
   int A, b, c, d, e ;
   cin>>A;
   b=A%10;
   c=(A%100)/10;
   d=(A%1000)/100;
   e=A/1000;
   if (b==e&&c==d)
   cout<<"true" <<endl;
   else
   cout<<"false "<<endl;
   
   return 0;
}