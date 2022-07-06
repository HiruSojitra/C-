#include<iostream>
using namespace std;
class City{

    private:
        int id;
        char name[50];
    public:

        City(int id,char name[]){

            this->id=id;
            strcpy(this->name,name);
            
        }
        void getData(){

            cout<<"ID.."<<this->id<<"NAME.."<<this->name<<endl;
        }    
};
int main(){
    
    
    City c1(1,"surat");
    City c2(2,"canada");

    c1.getData();
    c2.getData();

    return 0;
}
