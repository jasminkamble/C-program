#include<iostream>
using namespace std;

namespace animal
{
    void dog()
    {
        cout<<"Bark"<<endl;
    }
}

namespace car
{
    void BMW()
    {
        cout<<"starting the bmw car"<<endl;
    }
};

int main()
{
    animal::dog();
    car::BMW();
    return 0;
}