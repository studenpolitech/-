#include<iostream>
using namespace std;
int main(){
    int A, B, C;
    cin>>A;
    cin>>B;
    cin>>C;
    if((B-A)<(C-A))
    cout<<B<<" "<<B-A<<endl;
    else
    cout<<C<<" "<<C-A<<endl;

    return 0;
}