#include<iostream>
using namespace std;
int main(){

    int a[5]={6,9,8,7,3};

    int i,j,n,temp;

    cout<<"  Display array before sorting...\n";

    for(i=0;i<5;i++){

        cout<<a[i]<<endl;

    }

    for(i=0;i<5;i++){

        for(j=0;j<5;j++){

            if(a[i]<a[j]){

                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }

    }
    cout<<"  Display array after sorting...\n";
    for(i=0;i<5;i++){

       cout<<a[i]<<endl;
       
    }
    
 return 0;
 
 }    
