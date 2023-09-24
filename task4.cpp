#include<iostream>
using namespace std;
main(){

  cout<<" Enter imposter count: ";
  float imposter;
  cin>>imposter;
  cout<<" Enter player count: ";
  float player;
  cin>>player;
  float percent= (imposter/player) * 100;
  cout<<" chance of being an imposter: "<<percent<<"%";
}
  
  