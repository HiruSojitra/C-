#include<iostream>
using namespace std;
int main(){
      
      int no[5];
      int i,sum=0;
     
      cout<<"Enter array of elements....\n";

      for(i=0;i<5;i++){

           cin>>no[i];
      }
      for(i=0;i<5;i++){

          cout<< no[i];
          sum=sum+no[i];
      }
    
    cout<<"\n total..\n"<<sum << endl;
       
    return 0;


}
