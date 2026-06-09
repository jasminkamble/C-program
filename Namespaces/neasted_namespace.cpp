#include<iostream>
using namespace std;

// traditional syntax
namespace car
{
    namespace Audi
    {
        void details()
        {
            cout<<"color=black,nameplate:-MH14DW3007"<<endl;
        }
    }
}

// C++ syntax
namespace bike::honda
{
    void details()
    {
        cout<<"color:-red,nameplate:-MH14KB9076"<<endl;
    }
}

// type 1 to access
using namespace car;
using namespace bike;
int main()
{
    Audi::details();
    honda::details();

    return 0;

}
// tyoe 2 to access
// int main()
// {
//     car::Audi::details();
//     bike::honda::details();

//     return 0;
// }