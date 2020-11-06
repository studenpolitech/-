#include<iostream>
#include<math.h>
using namespace std;
float RignS(float R1, float R2)
{
   float S=3.14*(sqrt (R1)-sqrt (R2));
    return S;
    
}
int main()
{
    setlocale (LC_ALL, "Rus");
    float R1, R2, S;
    for(int i=0; i<3; i++){
        cin>>R1;
        cin>>R2;
        cout<<RignS(R1, R2)<<endl;
        
    }
   

return 0;
}