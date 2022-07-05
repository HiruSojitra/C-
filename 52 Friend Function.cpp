#include<iostream>
using namespace std;
class Ishan;
class Om 
{

     private:
        int salary = 50000;
     public:
        int age = 25;
    friend void rudra(Om,Ishan);       
};
class Ishan
{

     private:
       int salary = 60000;
     public:
       int age = 26;
     friend void rudra(Om,Ishan);     
};
void rudra(Om om, Ishan ishan)
{

    cout<<"Om's salary is "<<om.salary<<endl;
    cout<<"Ishan's salary is "<<ishan.salary<<endl;
}
int main()
{

     Om om;
     Ishan ishan;
    rudra(om, ishan);

    return 0;
}
