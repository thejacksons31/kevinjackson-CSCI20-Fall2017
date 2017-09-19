/*Kevin Jackson
9/11/17
this program will be a mad lip with strings as the inputs.*/
 
 #include <iostream>
 #include <string>
 using namespace std;
 
 int main()
 {
     //where you input your words into the mad lip
     string noun = "noun";
     string place = "place";
     string verb = "verb";
     string adjective = "adjective";
     string person = "person";
     //the madlip
     cout<<"There once was a man named " << person <<" who really liked strawberries. His favorite place to get strawberries was "<<endl;
     cout<<place<<". So he was "<<verb<<" on his way to "<<place<<" when he was stopped by a "<<adjective<<" "<<noun<<". "<<endl;
     cout<<"Being the amazing man that he was able to "<<verb<<" right around the "<<noun<<" and happily spent the rest of his day at "<<place<<"."<<endl;
 }