#include<iostream>
using namespace std;

class cars
{
    public:

    virtual void startengine()=0;

    void fuel()
    {
        cout<<"most car use petrol without any reasone"<<endl;
    }
};

class marutisuzuki:public cars
{
    public:
    void startengine()
    {
    cout<<"starting the engine of marutisuzuki"<<endl;
    }
};

class BMW:public cars
{
        public:
    void startengine()
    {
    cout<<"starting the engine of BMW"<<endl;
    }
};
 
int main()
{
    BMW bmwcar;
    marutisuzuki mscar;

    cars *carptr;

    carptr=&mscar;
    carptr->startengine();
    carptr->fuel();

    carptr=&bmwcar;
    carptr->startengine();
    carptr->fuel();

}