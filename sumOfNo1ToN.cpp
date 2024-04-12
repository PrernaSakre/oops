#include<iostream>
using namespace std;
int main(){
    int i ,n,sum=0;
    cout<<"enter the number of term :"<<endl;
    cin>>n;
    for(i=0;i<=n;i++){
        sum+=i;
    }
    cout<<"the sum is:"<<sum<<endl;  
}