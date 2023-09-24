#include<iostream>
using namespace std;
main(){
 cout<<" Name of minutes: ";
 int min;
 cin>>min;
 cout<<" Frame per second: ";
 int frame_per_second;
 cin>>frame_per_second;
 int number_of_frames=min * frame_per_second * 60;
 cout<<" Total number of frames: "<<number_of_frames;
 }