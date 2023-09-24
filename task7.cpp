#include<iostream>
using namespace std;
main(){
 cout<<"Enter the movie name: ";
 string name;
 cin>>name;
 cout<<" Enter the adult ticket price: ";
 float adult_ticket;
 cin>>adult_ticket;
 cout<<" Enter the child ticket price: ";
 float child_ticket;
 cin>>child_ticket;
 cout<<" Enter the number of adult tickets sold: ";
 float adult_ticket_sold;
 cin>> adult_ticket_sold;
 cout<<" Enter the number of child tickets sold: ";
 float child_ticket_sold;
 cin>>child_ticket_sold;
 cout<<" Enter the percentage of the amount to be donated to charity: ";
 float charity;
 cin>>charity;
 
  cout<<" Movie: "<<name<<endl;
 float total_amount=(adult_ticket * adult_ticket_sold)+(child_ticket * child_ticket_sold);
 cout<<" Total amount generated from ticket sales "<<total_amount<<endl;

 float charity_donation=total_amount-((total_amount*charity)/100);
  cout<<" Remaining amount after donation: "<<charity_donation<<endl;
   float after_donation=total_amount-charity_donation;
  cout<<" donation to charity: "<<after_donation<<endl;
}


 
 
 
 