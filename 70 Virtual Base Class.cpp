#include<iostream>
using namespace std;
class A{

    public:
       int a;

       void dispa(){
           a=10;
           cout<<"class A"<<a<<endl;
       }
};
class B : public virtual A {

    public:
      int b;

      void dispb(){
          b=20;
          cout<<"class B"<<b<<endl;
      }
};
class C :public virtual A{

    public:
      int c;

      void dispc(){
          c=30;
          cout<<"class C"<<c<<endl;
      }
};
class D :public B,public C{
    
    public:
     int d;

     void dispd(){
         d=40;
         cout<<"class D"<<d<<endl;
     }
};
int main(){

    D obj;
    obj.dispa();
    obj.dispb();
    obj.dispc();
    obj.dispd();

    return 0;
}
