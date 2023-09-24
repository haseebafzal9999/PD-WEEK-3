#include<iostream>
using namespace std;
main(){

 cout<<" Enter initial Velocity: ";
 float initial_velocity;
 cin>>initial_velocity;
 cout<<" Enter acceleration: ";
 float acceleration;
 cin>>acceleration;
 cout<<" Enter time: ";
 float time;
 cin>>time;
 float final_velocity=(acceleration * time)+initial_velocity;
 cout<< "Final velocity is: "<<final_velocity;
 }
 