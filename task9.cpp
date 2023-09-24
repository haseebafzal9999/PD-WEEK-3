#include<iostream>
using namespace std;
main(){
int r1,r2,r3,r4;


  cout<<" Enter a 4-digit number: ";
  int number;
  cin>>number;
   r1=number%10;
   number=number/10;
   r2=number%10;
   number=number/10;
   r3=number%10;
   number=number/10;
   r4=number%10;
   int sum=r1+r2+r3+r4;
  cout<<" Sum of the individual digits: "<<sum;
}
 
 

   