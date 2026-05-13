#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter numx x:";
    cin>>x;
    cout<<"Enter num Y:";
    cin>>y;
    
    cout<<(x+=y)<<endl;
    cout<<(x-=y)<<endl;
    cout<<(x*=y)<<endl;
    cout<<(x/=y)<<endl;
    cout<<(x%=y)<<endl;
    

}