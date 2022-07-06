#include<iostream>
using namespace std;
class City{

    private:
       int id;
       char name[50];
    public:

       City(){

           cout<<"object is created..."<<endl;
       }   
       ~ City(){

           cout<<"object is deleted..."<<endl;
       }
       void getData(){
           cout<<"City"<<endl;
       }
};
int main(){

    City c1;
    c1.getData();

    return 0;
}
