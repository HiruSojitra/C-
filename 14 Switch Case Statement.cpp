#include<iostream>
using namespace std;
int main(){

    char day;

    cout<<"press m for monday\n";
    cout<<"press t for tuesday\n";
    cout<<"press w for wednesday\n";
    cout<<"press T for thursday\n";
    cout<<"press f for friday\n";
    cout<<"press s for saturday\n";
    cout<<"press S for sunday\n";
    
    cout<<"Enter a day..\n";
    cin>>day;

 switch(day){

     case 'm':
       cout<<"monday";
       break;
     case 't':
       cout<<"tuesday";
       break;
     case 'w':
       cout<<"wednesday";
       break;
     case 'T':
       cout<<"thursday";
       break;
     case 'f':
       cout<<"friday";
       break;
     case 's':
       cout<<"saturday";
       break;
     case 'S':
       cout<<"sunday";
       break;
     default:
       cout<<"invalid day\n";
       break;
}   

return 0;

}
