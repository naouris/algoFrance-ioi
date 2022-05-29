#include <iostream>
using namespace std;

int main() {
	
   iint largeurSol;
   int largeurFaceSup;
   int somme =0;

   cin>>largeurSol;
   cin>>largeurFaceSup;
 
   
   for(int i=largeurSol ; i<=largeurFaceSup ; i++)
   { 
       
        cout<<somme;
       somme=somme+(i*i);
   }
	return 0;
}