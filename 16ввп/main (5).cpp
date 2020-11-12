#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n, i;
    cout<<"n: ";
    cin>>n;
    for(int i=0; i<n; i++){
            a[i] = rand() % 90 + 10;
            cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"нечетные элементы в порядке возрастания "<<endl;
    for(i=0; i<n; i++){
        if((i%2)!=0){
           cout<<a[i]<<" "<<i;
           cout<<endl;
        }
    }
    cout<<"четные элементы в порядке убывания "<<endl;
    for(i=n-1;i>1; i--){
        if((i%2)==0){
             cout<<a[i]<<" "<<i;
           cout<<endl;
        }
        
    }
    
    return 0;
}