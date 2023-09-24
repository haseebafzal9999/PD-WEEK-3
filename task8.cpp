#include<iostream>
using namespace std;
main(){

  cout<<" Enter vegetable price per kilogram (in coins): ";
  float vegetable_price;
  cin>>vegetable_price;
  cout<<" Enter fruit price per kilograms (in coins): ";
  float fruite_price;
  cin>>fruite_price;
  cout<<" Enter total kilograms of vegetables: ";
  float kg_vegetable;
  cin>>kg_vegetable;
  cout<<" Enter total kilograms of fruits: ";
  float kg_fruits;
  cin>>kg_fruits;
  float total_earnings=(vegetable_price*kg_vegetable)+(fruite_price*kg_fruits);
  float total_earnings_rps=total_earnings/1.94;
  cout<<" Total earnings in Rupees (Rps): "<<total_earnings_rps;
  }
  