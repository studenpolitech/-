#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float N, i, S=0;
    cin>>N;
    for(i=1; i<=2*N-1; i=i+2){
      S=S+i ;
      cout<<S<<endl;
    }
    return 0;
}