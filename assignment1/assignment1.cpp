/*Kevin Jackson
9/18/2017
this program is made to calculate the acceration from velocity and distence.*/

 #include <iostream>
 #include <math.h>
 using namespace std;
//what makes the input values and my object
struct jet{
double distence;
double Finalvelocity;
};
    main(){
    //declaring the object
    jet jetA;
    //ask for input
   cout<<"how far did the plane go in meters?";
    cin >> jetA.distence;
    cout<<"what is the final velocity of the plane in km/hour";
    cin >> jetA.Finalvelocity;
    //converts them into proper units
    double velocity = jetA.Finalvelocity*10/36;
    //takes the units and finds the time
    double time = jetA.distence/velocity;
    //now to find acceleration since the intial is always 0
    double acceleration = velocity/time;
    //now for the answer
    cout<< "The acceleration of the jet is "<< acceleration << " m/s^2" <<endl;
 }