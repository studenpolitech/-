#include<iostream>
using namespace std;
int PowerA3(float &A, float &B){
    B=A*A*A;
    return B;
}
int main(){
    setlocale (LC_ALL, "Rus");
    float A, B;
for(int i=0; i<5; i++){
    cin>>A;
    PowerA3(A, B);
    cout<<B<<endl;
}    
    
    return 0;
}