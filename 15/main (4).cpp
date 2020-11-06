#include<iostream>
using namespace std;
int Quarter(float x, float y)
{
    if(x>0&&y>0)
    cout<<"1 четверть"<<endl;
    if(x<0&&y>0)
    cout<<"2 четверть"<<endl;
    if(x<0&&y<0)
    cout<<"3 четверть"<<endl;
    if(x>0&&y<0)
    cout<<"4 четверть"<<endl;
    
}
int main()
{
    setlocale (LC_ALL, "Rus");
    float x, y;
    for(int i=0; i<3; i++){
        cin>>x;
        cin>>y;
        Quarter(x, y);
        
    }
   

return 0;
}