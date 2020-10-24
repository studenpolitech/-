#include<iostream>
using namespace std;
int main(){
    int A, B;
    cin>>A;
    cin>>B;
    if(A==B){
        A=0;
        B=0;
        cout<<A<<" "<<B<<endl;
    }
    else if (A>B){
        A=A;
        B=A;
        cout<<A<<" "<<B<<endl;
    }
    else if(B>A){
        B=B;
        A=B;
        cout<<A<<" "<<B<<endl;
    }
    return 0;
}