#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float N, i, res=1;
    cin>>N;
    for(i=1.1; i<N; i=i+0.1){
        res=res*i;
    }
    cout<<res*N<<endl;
    
    
    
    
    
    return 0;
}