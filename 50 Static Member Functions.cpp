#include<iostream>
using namespace std;
class hotel{

    private:
       int id;
       char name[100];
       char location[100];

    public:
       static char type[100];

    void setData(){
        cout<<"Enter id ";            cin>>id;
        cout<<"Enter name ";          cin>>name;
        cout<<"Enter location";       cin>>location;
    }      
    void getData(){
        cout<<"ID "<<id<<",NAME "<<name
            <<",LOCATION "<<location<<",TYPE "<<type<<endl;
             
    }
};
  
  char hotel :: type[100]="VIP";

int main(){
     
    hotel h1,h2;

    h1.setData();
    h2.setData();

    h1.getData();
    h2.getData();

    return 0; 
}
