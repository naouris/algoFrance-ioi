#include <iostream>
using namespace std;
 
int main() {
 
   int nbKarva;
   int poid;
   int ageK;
   int langeurK;
   int hauteurK;
 
 
 
   cin >> nbKarva;
   cin >> poid;
   cin >> ageK;
   cin >> langeurK;
   cin >> hauteurK;
int note=0;
   for(int i=0 ; i<=nbKarva ; i++)
   { 
       note=(langeurK*hauteurK)+poid;
       cout << note <<endl;
   }
	return 0;
}