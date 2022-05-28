#include <iostream>
using namespace std;

int main() {
	
   int positionDepart;
   int largeurEmpl;
   int nbVendeurs;

   cin >> positionDepart;
   cin >> largeurEmpl;
   cin >> nbVendeurs;

   for(int i=0 ; i<=nbVendeurs ; i++)
   { 
       cout << positionDepart << endl;
       positionDepart=positionDepart+largeurEmpl;
   }
	return 0;
}