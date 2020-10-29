#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float A;
    int N, i, sum=0;
    cin>>A;
    cin>>N;
    for(i=0; i<=N; i++){
      sum=sum+pow(A, i);  
    }
    cout<<sum<<endl;
    return 0;
}