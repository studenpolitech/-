#include <iostream>
using namespace std;

int main()
{
    int A, B, x;
    cin>>A;
    cin>>B;
    if(A>B){
        while((A-B)>0){
            A=A-B;
        }
        cout<<A;
    }
    return 0;
}
