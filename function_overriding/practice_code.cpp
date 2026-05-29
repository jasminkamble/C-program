#include<iostream>
using namespace std;

class clothes
{
    public:
    
    void brand()
    {
        cout<<"Clothe_brand :- Raymond,jayhind,mulchand,Gucci"<<endl;
    }
};

class jewellery:public clothes
{
    public:

    void brand()
    {
        cout<<"Jewellery_brand :- P.N.G,chandukaka_saraf,Ranka,tanishq,Malabar"<<endl;
    }
};

class shoes:public clothes
{
    public:

    void brand()
    {
    cout<<"Shoes_brand :- Puma,Nike,Red_tape"<<endl;
    }
};

int main()
{
    cout<<"----------Brand----------"<<endl;
    shoes s1;
    s1.brand();
    cout<<"-------------------------"<<endl;
    jewellery j1;
    j1.brand();
    cout<<"-------------------------"<<endl;
    clothes c1;
    c1.brand();
    cout<<"-------------------------"<<endl;

}