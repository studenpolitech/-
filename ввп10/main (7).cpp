#include<iostream>
#include<math.h>
using namespace std;
int main(){
   int a, b, c;
   cin>>a;
   cin>>b;
   cin>>c;
   
   if (c<a+b&&a<b+c&&b<a+c)
   cout<<"true" <<endl;
   else
   cout<<"false "<<endl;
   
   return 0;
}