/* Kevin Jackson
8/30/2017
This program is trying to oproximate the population of the us in the future.
*/

#include <iostream>
using namespace std;
 
int main ()
{
    int birth_rate = (1*60*60*24*365)/8;
    int current_population = 325758706;
    int death_rate = (1*60*60*24*365)/12;
    int migrant = (1*60*60*24*365)/33;
    int future_years = 99;
    int new_population = current_population +(birth_rate - death_rate + migrant)*future_years;
    //what states the population
    cout<<new_population<<endl;
    cout<<birth_rate<<endl;
}