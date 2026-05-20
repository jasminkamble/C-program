#include<iostream>
using namespace std;

class employee
{
    public:
    int id;
    string name;
    float salary;

    employee(int i,string n,float s)
    {
        id = i;
        name=n;
        salary =s;
    }

    void main()
    {
        cout<<id<<" "<<name<<" "<<salary<<endl;
    }
};

int main()
{
    employee e1=employee(108,"Kishori",25000.00);
    employee e2=employee(109,"Mahesh",25000.00);
    e1.main();
    e2.main();

    return 0;
}

