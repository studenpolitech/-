#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float A;
    int N, i, S=0;
    cin>>A;
    cin>>N;
    for(i=0; i<=N; i++){
       S=S+pow(-A, i);
        
    }
    cout<<S<<endl;
    return 0;
}