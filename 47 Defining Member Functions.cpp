#include<iostream>
using namespace std;
class addition
{
    public:
       int a,b,sum;

   void setData(){
       cout<<"Enter the values for a & b"<<endl;
       cin>>a>>b;

       sum=a+b;
   }
   void getData(){
      cout<<"Addition of"<<a<<"and"<<b<<"="<<sum<<endl;
   }
};
int main(){

    addition A;

    A.setData();
    A.getData();

    return 0;
}
