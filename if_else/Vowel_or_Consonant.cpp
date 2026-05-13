#include<iostream>
using namespace std;

int main()
{
    char upper_case,lower_case;
    char c;

    cout<<"enter charecter:";
    cin>>c;

    upper_case=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    lower_case=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');

    if(upper_case||lower_case)
    {
        cout<<"You have enter an 'VOWEL'\n";
    }
    else{
        cout<<"You have enter an 'CONSONANT'\n";

    }


}