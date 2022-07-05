#include<iostream>
using namespace std;
class Distance
{

    public:
    int km,m;
    void getvalue()
    {

     cout<<"Enter the value of Distance..";
     cin>>km>>m;
    } 
    void showvalue()
    {
        cout<<"km"<<km<<"m"<<m;
    }
    Distance add(Distance d1, Distance d2){

        Distance d3;
        d3.km=Distance d1.km+Distance d2.km;
        d3.m=d1.m+d2.m;
        
        if(d3.m>=1000)
        {
            d3.km++;
            d3.m+d3.m-1000;
        }
        return(d3);
};
int main()
{
      Distance d1,d2,d3;

     d1.getvalue();
     d2.getvalue();
     d3.add(d1,d2);

     cout<<"d1 :"<<d1.showvalue();
     cout<<"d2 :"<<d2.showvalue();
     cout<<" d1+d2 "<< d3.showvalue();

     return 0;
    
}
