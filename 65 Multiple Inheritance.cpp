#include<iostream>
using namespace std;
class father{

    public:
      char name[50];
      float height;

    void fathersetData(){

        cout<<"Enter father name and height";
        cin>>name>>height;
    }  
    void fathergetData(){
        cout<<"NAME"<<this->name<<endl<<"HEIGHT"<<this->height<<endl;
    }
};
class mother{

    public:
      char name[50];
      float height;
    
    void mothersetData(){

        cout<<"Enter mother name and height";
        cin>>name>>height;
    }
    void mothergetData(){
        cout<<"NAME"<<this->name<<endl<<"HEIGHT"<<this->height<<endl;
    }
};
class baby : public father, public mother{

    public:
      float weight;

    void babysetData(){
        cout<<"Enter baby weight";
        cin>>weight;
    }  
    void babygetData(){
        cout<<"WEIGHT"<<this->weight<<endl;
    }
} ;
int main(){

    baby b;
    b.fathersetData();
    b.mothersetData();
    b.babysetData();

    b.fathergetData();
    b.mothergetData();
    b.babygetData();
     return 0;
}
