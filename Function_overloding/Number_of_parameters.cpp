#include<iostream>
using namespace std;

void show(int age)
{
    cout<<"Rohan Age:-"<<age<<endl;
}
void show(int age,int age1)
{
    cout<<"Rohan age:-"<<age<<" Ridhima:-"<<age1<<endl;
}
void show(int age,int age1,int age2)
{
    cout<<"Rohan age:-"<<age<<" Ridhima:-"<<age1<<" Raghav:-"<<age2<<endl;
}

int main()
{
    show(25);
    cout<<"----------------"<<endl;
    show(25,30);
    cout<<"----------------"<<endl;
    show(25,30,35);
    cout<<"----------------"<<endl;

    return 0;


}