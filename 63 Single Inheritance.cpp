#include<iostream>
using namespace std;
class Staff{               // staff = parent class ,base class ,super class

    private:
      int id;
      char name[50];
    public:
       void setData();
       void getData();
};
class Employee: public Staff{           //employee =  child class , derived class 
                                                    //sub class , extended class
     private:
       int salary;
       int age;
    public:
       void setData();
       void getData();
 };
 void Staff::setData(){
           
           cout<<"Enter id.. ";
           cin>>id;
           cout<<"Enter name..";
           cin>>name;
        }
void Staff::getData(){
           
            cout<<"ID"<<this->id
                <<"NAME"<<this->name<<endl;
}
 void Employee::setData(){          
           
           cout<<"Enter salary..";
           cin>>salary;
           cout<<"Enter age..";
           cin>>age;
 }
 void Employee::getData(){
      
      cout<<"SALARY"<<this->salary
               <<"AGE"<<this->age<<endl;
 }
 int main(){
     
     Employee e;
     
     cout<<"Enter data..";
     e.Staff::setData();
     e.setData();
    
     cout<<"Display data..";
     e.Staff::getData();
     e.getData();

     return 0;

 }
