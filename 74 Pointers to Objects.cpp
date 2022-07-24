#include<iostream>
using namespace std;
class complex{

    public:
       int real,imaginary;
       
       void setData(int a,int b){
          real=a;
          imaginary=b;
       }    
       void getData(){
           cout<<" the real is.."<<real<<endl;
           cout<<" the imaginary is.."<<imaginary<<endl;
       }
       
};
int main(){
    //complex c1;
    complex *ptr= new complex;
   // complex *ptr =&c1;
   // (*ptr).setData(2,54);
    ptr->setData(2,54);
   // (*ptr).getData();
    ptr->getData();
}
