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

int main()
{
    cout<<"Raining check program";
    rainingCheck();
    cout<<"End of program";
}