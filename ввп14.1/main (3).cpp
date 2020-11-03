#include <iostream>
using namespace std;

int main()
{
    int N, sum=0, K=0;
    cin>>N;

if(N>1){
   while (N>sum){
       K=K+1;
       sum=sum+K;
   } 
   cout<<K<<endl;
   cout<<sum<<endl;
}

    return 0;
}