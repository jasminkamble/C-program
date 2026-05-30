#include<iostream>
using namespace std;

class Fract 
{  
   private:  
    int a1;  
    int b1;  
   public:  
    Fract() : a1(0), b1(0) {}  
    void in() 
    {  
        cout << "Enter the numerator: ";  
        cin >> a1;  
        cout<< "Enter the denominator: ";  
        cin >> b1;  
    } 
      Fract operator * (const Fract &obj) 
    {  
        Fract tem;  
        tem.a1 = a1 * obj.a1;  
        tem.b1 = b1 * obj.b1;  
        return tem;  
    }  

    void out() 
    {  
      cout<<"The fraction is  "<< a1<<"/ "<<b1;  
    }  
};
int main()  
{  
    Fract F1, F2, result;  
    cout << "Enter the first fraction:n";  
    F1.in();  
    cout << "Enter the second fraction:n";  
    F2.in();  

    result =F1*F2;

    result.out();

}
