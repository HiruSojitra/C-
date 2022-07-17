#include<iostream>
using namespace std;
class grandfather{

    public:
     void gold(){

         cout<<"gold"<<endl;
     }
};
class father :public grandfather {

    public:
     
     void land(){

         cout<<"5Acrcs of land"<<endl;
     }
};
class mother{

    public:
     
     void house(){
         cout<<"3BHK house"<<endl;
     }
};
class son : public father,public mother{
      
      public:

       void car(){
           cout<<"Audi car"<<endl;
       }
};
int main(){

    son s;
    
    s.gold();
    s.land();
    s. house();
    s.car();

    return 0;
}
