#include<iostream>
using namespace std;
int main(){
    int A, B, C;
    cin>>A;
    cin>>B;
    cin>>C;
    if(A<C&A<B)
    cout<<C+B<<endl;
    else if(C<B&&C<A)
        cout<<A+B<<endl;
    else if(B<A&&B<C)
        cout<<A+C;
    return 0;
}