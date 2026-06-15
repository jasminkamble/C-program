#include<iostream>
#include<exception>
using namespace std;

class ageException:public exception
{
    public:
    const char*what() const throw()
    {
        return "age cannot be negative\n";
    }

};

int main()
{
    int age;
    try 
    {
    cout<<"Enter age of the user:-";
    cin>>age;

    if(age<0)
    {
        ageException obj;
        throw obj;
    }

    cout<<"age of the user is:-"<<age<<endl;
    }

    catch(exception&e)
    {
        cout<<e.what();
    }

    return 0;

}