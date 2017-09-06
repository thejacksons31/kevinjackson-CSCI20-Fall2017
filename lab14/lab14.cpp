/*Kevin Jackson
9/6/2017
This program immitate's a coin star machine*/

 #include <iostream>
 #include <math.h>
 using namespace std;
 
 main()
 {
     //what is entered into the machine
     int cents_entered =  987654321;
     //seperating the place values fo each money value.
     int not_dollars = cents_entered%100;
     int not_quarters = not_dollars%25;
     int not_dimes = (not_quarters)%10;
     int not_nickles = not_dimes%5;
    //what determines what each coin is.
    int dollars = (cents_entered-not_dollars)/100;
    int quarters = (not_dollars-not_quarters)/25;
    int dimes = (not_quarters-not_dimes)/10;
    int nickles = (not_dimes-not_nickles)/5;
    int pennies = not_nickles;
    //your total in real numbers
    double total = cents_entered;
    //calulating and applying the tax while still rounding to the nearest decimal
    double tax = total * .109;
    float true_total = (total-tax);
   //making sure that there is the proper amount of decimal
    float rounded_total = roundf (true_total) / 100;
    //what tells you the change you inputed and your total after tax
    cout<<"you inputed "<< dollars <<" dollars "<< quarters <<" quarters "<< dimes <<" dimes "<< nickles <<" nickles "<< pennies <<" pennies"<<endl;
    cout<<"Your total after tax is $"<< rounded_total <<endl;
 }