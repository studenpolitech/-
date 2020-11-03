#include <iostream>
using namespace std;

int main()
{
    int A, B, i, j=0;
    cin>>A;
    cin>>B;
    if (A<B){
        for(i=A; i<=B; i++){
            for(j=0; j<i;j++ ){
                cout<<i;
            }
                 
        }
    }


    return 0;
}
