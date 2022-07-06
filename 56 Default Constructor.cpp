#include<iostream>
using namespace std;
class City{

    private:
      int id;
      char name[50];

    public:
       City(){

          // this->id = 1;
         //strcpy(this-> name,"surat");

           cout<<"Enter id ";   cin>>id;
           cout<<"Enter city name";   cin>>name;
       }  
       void getData(){
           cout<<"ID"<<this->id<<"NAME"<<this->name<<endl;
       }
};
int main(){

    City c1,c2;

    c1.getData();
    c2.getData();

    return 0;
}
