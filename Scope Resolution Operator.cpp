#include<iostream>
using namespace std;
class Book
{
    char name[100];
    float price;

    public:
     void setData();
     void getData();
};
void Book ::setData(){
    
    cout<<"Enter name :";
    cin>>name;
    cout<<"Enter price :";
    cin>>price;
}
void Book :: getData(){

    cout<<"NAME.."<<name<<endl<<"PRICE.."<<price<<endl;
}
int main()
{

    Book b;
    b.setData();
    b.getData();

    return 0;
}
