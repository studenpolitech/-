#include<iostream>
#include<math.h>
using namespace std;
int main(){
   int A, b, c, d ;
   cin>>A;
   b=A%10;
   c=(A%100)/10;
   d=(A%1000)/100;
   if (b>c&&c>d)
   cout<<"up"<<endl;
   else if (b==c&&c==d&&b==d)
   cout<<"equal"<<endl;
   else if(b<c&&c<d)
   cout<<"down"<<endl;
   else 
   cout<<"nothing"<<endl;
   return 0;
}