#include<iostream>
using namespace std;
main(){

cout<<" Number of square meters you can paint: ";
int square_meter;
cin>>square_meter;
cout<<" Width of the single wall (in meters): ";
int width;
cin>>width;
cout<<" Height of the single wall (in meters): ";
int height;
cin>>height;
int number_of_walls=square_meter/(height*width);
cout<<" Number of walls you can paint: "<<number_of_walls;
}

