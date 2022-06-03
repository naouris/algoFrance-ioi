#include <iostream>
using namespace std;

int main() {
	
	int nbMombres;
	int poidE1;
	int poidE2;
	
	int poidTotalE1=0;
	int poidTotalE2=0;
	
	cin>> nbMombres;
	
	for(int i=0; i<nbMombres ;i++){
		cin>> poidE1;
	    cin>> poidE2;
	poidTotalE1=poidTotalE1+poidE1;
	poidTotalE2=poidTotalE2+poidE2;
	
	}
    
	if( poidTotalE1 > poidTotalE2)
	{
		cout << "L'équipe 1 a un avantage" << endl;
		cout << "Poids total pour l'équipe 1 :"<< poidTotalE1 << endl; 
		cout << "Poids total pour l'équipe 2 :"<< poidTotalE2 << endl; 
	}else{
	    cout << "L'équipe 2 a un avantage" << endl;
		cout << "Poids total pour l'équipe 1 :"<< poidTotalE1 << endl; 
		cout << "Poids total pour l'équipe 2 :"<< poidTotalE2 << endl;
}
	   
	return 0;
}