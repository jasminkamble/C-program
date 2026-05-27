#include<iostream>
using namespace std;

void details(int age)
{
    cout<<"Age:-"<<age<<endl;
}
void details(string blood_group)
{
    cout<<"Blood group:-"<<blood_group<<endl;
}
void details(string name,int age,string blood_group)
{
    cout<<"Name:-"<<name<<endl<<"Age:-"<<age<<endl<<"Blood group:-"<<blood_group<<endl;    
}
int main()
{
    details(25);
    details("O+");
    cout<<"------details------"<<endl;
    details("Meghna",25,"O+");

    

}