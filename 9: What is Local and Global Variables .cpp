#include<iostream>

int a=100;

using namespace std;

int main()
{
    int a=200;

    cout<<"\n\tA Local : "<<a;
    cout<<"\n\tA Global : " <<::a;

    cout<<"\n\n";

    return 0;
}
