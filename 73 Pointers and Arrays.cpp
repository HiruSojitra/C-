#include<iostream>
using namespace std;
int main(){

    int i, a[5]={2,4,6,8,9};

    int *ptr[5];

    for(i=0;i<5;i++){
        ptr[i]=&a[i];
    }
    cout<<"values are... "<<i<<endl;
    for(i=0;i<5;i++){
        cout<<*ptr[i]<<endl;
    }
    return 0;
}



