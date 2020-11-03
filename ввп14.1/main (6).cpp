#include <iostream>
using namespace std;

int main()
{
int n, k=2, f1=1, f2=2;
cin>>n;
while(n>f2){
    f2=f2+f1;
    f1=f2-f1;
    k++;
}
if(n=f2)
    cout<<k<<endl;
    else
    cout<<"n is dont fibonacci"<<endl;
return 0;
}