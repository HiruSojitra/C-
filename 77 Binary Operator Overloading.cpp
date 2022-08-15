#include<iostream>
using namespace std;    //which need at least two operands
class complex{

    public:
     int x,y;

     void setData(int x,int y){
         this->x=x;
         this->y=y;
     }
     void getData(){
         cout<<this->x<<"+"<<this->y<<endl;
     }
     complex operator +(complex n){

         complex temp;
         temp.x=this->x+n.x;
         temp.y=this->y+n.y;
         return temp;
     }
};
int main(){

    complex c1,c2,c3;

    c1.setData(4,8);
    c2.setData(5,7);

    c1.getData();
    c2.getData();

    c3=c1+c2;

    c3.getData();
    return 0;

}
