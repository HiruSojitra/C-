#include<iostream>
using namespace std;
int main()
{
    int age;

    cout<<"Enter age..";
    cin>>age;

    if(age>18){
        cout<<"You can voting..";
    }
    else if(age<18){
        cout<<"you can't voting..";
    }
    else if(age==18){
        cout<<"You can also voting..";
    }
    else{
        cout<<"You can also voting..";
    }
    return 0;
}
