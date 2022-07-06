#include<iostream>
using namespace std;
class City{

    private:
      int id;
      char name[50];

    public:
       City(){                // DEFAULT CONSTRUCTOR

         //this->id = 1;
         //strcpy(this-> name,"surat");

         cout<<"Enter id ";   cin>>id;
         cout<<"Enter city name";   cin>>name;
       }
       City(int id,char name[]){             //PERAMETERIZED CONSTRUCTOR

           this->id=id;
           strcpy(this->name,name);
       }
       City(City &n){                     //COPY CONSTRUCTOR

           this->id=n.id;
           strcpy(this->name,n.name);
       }
       void getData(){

           cout<<"id"<<this->id<<"NAME"<<this->name<<endl;
       }
};
int main(){

    City c;
    City c1(1,"surat");
    City c2(c1);
    c.getData();
    c1.getData();
    c2.getData();
    return 0;
}       
