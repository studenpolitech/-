#include <iostream>
using namespace std;

int main()
{
int x, y;
cin>>x>>y;
while(x!=0&&y!=0){
    if(x>y)
        x=x%y;
        else
            y=y%x;
}
cout<<x+y;
    return 0;
}