#include<iostream>
using namespace std;
int Sign(float &X){
    if (X<0)
    X=-1;
    if(X==0)
    X=0;
    if(X>0)
    X=1;
    return X;
}
int main(){
    setlocale (LC_ALL, "Rus");
    float A, B;
cin>>A;
cin>>B;
float S=Sign(A)+Sign(B);
cout<<S<<endl;

return 0;
}