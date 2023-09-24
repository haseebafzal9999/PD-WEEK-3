#include<iostream>
using namespace std;
main(){

  cout<<"Enter the person's age: ";
  int age;
  cin>>age;
  cout<<"Enter the number of times they are moved: ";
  int move;
  cin>>move;
  int number;   
  number=move+1;
  number=age/number;
  cout<<"Average number of years lived in the same house: "<<number;
}