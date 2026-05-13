#include<iostream>
using namespace std;

int main()
{
    int score;
    cout<<"enter num score:";
    cin>>score;

    string result=(score>=50)?"won":"lose";

    cout<<"You "<<result<<" the game";


}
