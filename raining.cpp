#include<iostream>
#include<string>
using namespace std;

void rainingCheck()
{
    string rain;
    cout<<"\nIs it raining outside?(yes/no)\n";
    cin>>rain;
    if(rain=="yes")
    {
        umbrellaCheck();
    }
    else
    {
        cout<<"\nDon't bring the umbrella\n";
    }
}

void umbrellaCheck()
{
    string umbr;
    cout<<"\nDid you find the umbrella?(yes/no)\n";
    cin>>umbr;
    if(umbr=="yes")
    {
        cout<<"\nBring the umbrella\n";
    }
    else
    {
        rainingCheck();
    }
}


int main()
{
    cout<<"Raining check program";
    rainingCheck();
    cout<<"End of program";
}