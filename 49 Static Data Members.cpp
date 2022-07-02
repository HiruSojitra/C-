#include<iostream>
using namespace std;
class student{

    private:
       int id;
       char name[100];
       char course[100];
       int age;

   public:
      static char clg[100];
   public:
      static void changecollege(){
         strcpy(clg,"ajmera"); 
       }
   
   void setData(){
       cout<<"Enter id ";         cin>>id;
       cout<<"Enter name ";       cin>>name;
       cout<<"Enter course ";     cin>>course;
       cout<<"Enter age ";        cin>>age;
   }
   void getData(){
       cout<<endl<<",Id "<<id<<",name "<<name<<",course "<<course
           <<",age "<<age<<",college "<<clg<<endl;
   }
};
 char student ::clg[100]="RNW";

int main(){

    student s1,s2;
     
    student :: changecollege();

    s1.setData();
    s2.setData();

    s1.getData();
    s2.getData();

    return 0;
}
