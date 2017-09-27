/*Kevin Jackson
9/20/17
this program will creat a windchill funtin.*/

#include <stdio.h>
#include <math.h>
 #include <iostream>
 #include <string>
 using namespace std;
 
 main()
 {
     double velocity;
     double tempiture;
     cout<<"what is the velocity";
     cin>>velocity;
     cout<<"what is the tempiture";
     cin>>tempiture;
     double oldWindChill = .081*(3.71*(pow(velocity, .5))+5.81-.25*velocity)*(tempiture - 91.4) + 91.4;
     double newWindChill = 35.74 + 0.6215 * tempiture - 35.75 * (pow(velocity, .16)) + 0.4275 * tempiture * (pow(velocity, .16));
     double difference = oldWindChill - newWindChill;
     cout<<"Windspeed    Old Formula    New Formula    Difference"<<endl;
     cout<<velocity<<"            "<<oldWindChill<<"         "<<newWindChill<<"       "<<difference<<endl;
 }