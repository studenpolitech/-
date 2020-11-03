#include <iostream>
using namespace std;

int main()
{
    int kolich;
    float  procent, s=1000;
    cin>>procent;
    if(procent>0&&procent<25){
        while(s<=1100){
            kolich++;
            s=s+procent/100*s;
        }
cout<<s<<endl;
cout<<kolich<<endl;
    }
    return 0;
}