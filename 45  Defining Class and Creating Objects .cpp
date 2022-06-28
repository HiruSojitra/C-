#include<iostream>
using namespace std;
class student
{
       public:
  
       int id;
       char name[50];
       int age;
      
      void setData(){

          cout<<"Enter id :"<<endl;          cin>>id;
          cout<<"Enter name :"<<endl;        cin>>name;
          cout<<"Enter age :"<<endl;         cin>>age;
      }
      void getData(){

          cout<<"ID :"<<id<<"NAME :"<<name
              <<"AGE :"<<age<<endl;
      }
};
int main(){

    student s1,s2;

    s1.setData();
    s2.setData();

    s1.getData();
    s2.getData();

    return 0;
}
