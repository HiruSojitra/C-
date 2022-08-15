#include<iostream>
using namespace std;
class complex{               //which need only one operands

      public:
        int x,y;

        void setData(int x,int y){
            this->x=x;
            this->y=y;
        }
        void getData(){
            cout<<"x"<<this->x<<"y"<<this->y<<endl;
        }
        complex operator ++(int){
            complex temp;
            temp.x= this->x++;
            temp.y= this->y++;
            return temp;
        }
};
int main(){
    complex c1,c2;

    c1.setData(5,9);
    c2=c1++;
    c2.getData();
    
    return 0;
}
