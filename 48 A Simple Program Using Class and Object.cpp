#include<iostream>
using namespace std;
class student{

    public:
      int id;
      char name[100];
      char course[100];
      int age;

      void setData(){

          cout<<"Enter id :";
          cin>>id;
          cout<<"Enter name :";
          cin>>name;
          cout<<"Enter course :";
          cin>>course;
          cout<<"Enter age :";
          cin>>age;
      }
      void getData(){
           cout<<"ID"<<id<<"NAME"<<name<<"COURSE"<<course
               <<"AGE"<<age<<endl;
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
