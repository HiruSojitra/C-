#include<iostream>
using namespace std;
class City{

    private:
      int id;
      char name[50];
    public:

      City(int id, char name[]){

          this->id=id;
          strcpy(this->name,name);
      }   
      City(City &n){

          this->id=n.id;
          strcpy(this->name,n.name);
      }
      void getData(){

          cout<<"ID"<<this->id<<"NAME"<<this->name<<endl;
      }
};
int main(){

    City hiru(1,"surat");
    City jaydip(2,"canada");
    City aksh(hiru);
    City dwij(jaydip);

    hiru.getData();
    jaydip.getData();
    aksh.getData();
    dwij.getData();

    return 0; 
}
