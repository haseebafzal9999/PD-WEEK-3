#include<iostream>
using namespace std;
main(){

 cout<<" Enter the size of the fertilizer bag in pounds: ";
 float size;
 cin>>size;
 cout<<" Enter the cost of the bag: ";
 float cost;
 cin>>cost;
 cout<<" Enter the area in square feet that can be covered by the bag: ";
 float area;
 cin>>area;
 float cost_per_pound= cost/size;
 float cost_per_square_foot= cost/area;
 cout<<" Cost of fertilizer per pound: "<<cost_per_pound<<endl;
 cout<<" Cost of fertilizer per square foot: "<<cost_per_square_foot;
}