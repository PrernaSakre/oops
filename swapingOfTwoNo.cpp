#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"enter value for a:"<<endl;
    cin>>a;
    cout<<"enter value for b:"<<endl;
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swaping the number: "<<"\n a is:"<<a<<"\n b is: "<<b<<endl;

}