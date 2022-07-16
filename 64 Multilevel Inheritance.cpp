#include<iostream>
using namespace std;
class student{

    public:
       int id;
       char name[50];
    
    void setData(){
        cout<<"Enter student id and name";
        cin>>id>>name;
    }
    void getData(){
        cout<<"ID"<<this->id<<"NAME"<<this->name<<endl;
    }
};
class marks :public student{

    public:
      int m1,m2,m3;

      void setmarks(){
          cout<<"Enter 3 subject marks";
          cin>>m1>>m2>>m3;
      }
      void getmarks(){
          cout<<"M1"<<this->m1<<endl<<"M2"<<this->m2<<endl
              <<"M3"<<this->m3<<endl;
      }
};
class result : public marks{

    public:
      int total;
      float avg;

    void gettotal(){
        total=m1+m2+m3;
        avg=total/3;

        cout<<"TOTAL"<<this->total<<endl;
        cout<<"AVG"<<this->avg<<endl;
    }  
};
int main(){

    result r;
   
   r.setData();
   r.getData();

   r.setmarks();
   r.getmarks();

   r.gettotal();
   r.gettotal();

   return 0;
}
