#include<iostream>
using namespace std;
float Fact2(int N)
{
    int Nf=1;
   if(N%2!=0){
       for(int i=1; i<=N; i+=2){
           Nf=Nf*i;
       }
   }
  if(N%2==0){
    for(int i=2; i<=N; i+=2){
    Nf=Nf*i;
}
    }
    return Nf;
    
}
int main()
{
    setlocale (LC_ALL, "Rus");
    int n , N;
    cin>>n;
 cout<<Fact2(n)<<endl;
return 0;
}