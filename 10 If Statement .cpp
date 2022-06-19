#include<iostream>
using namespace std;
int main(){

    int salary,b;

    cout<<":Enter salary..";
    cin>>salary;

    if(salary>20000){

        b=(salary*10)/100;
        cout<<"Bonus.."<<b;
        salary=salary+b;
    }
    cout<<"salary is.."<<salary<<endl;
    return 0;
}
