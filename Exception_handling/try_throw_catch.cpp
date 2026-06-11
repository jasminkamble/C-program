#include <iostream>
using namespace std; 

int main()
{
    int Num, Deno;

    cout <<"Enter the Numerator Number: ";
    cin >> Num;
    
    cout <<"Enter the Denominator Number: ";
    cin >> Deno;
    
    try {
        if (Deno == 0) {
            throw "Given number cannot be divided by zero!";
        }

        int result = Num / Deno;
        cout << "The Division Result is: " << result << endl;
    }
    catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }

    return 0;
}