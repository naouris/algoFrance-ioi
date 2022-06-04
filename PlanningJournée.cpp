#include <iostream>
using namespace std;

int main() {
	int position,nbVillages,positionVillages;
	int nbVillagesR=0 ;
	cin>> position >>nbVillages;
    
	for (int i=0 ; i<nbVillages ;i++)
	{
		 cin>>positionVillages;
		if (position>positionVillages && position-positionVillages<= 50)
	     	nbVillagesR =nbVillagesR+1;
	    else if  (positionVillages>position && positionVillages-position<= 50 )	
	        nbVillagesR =nbVillagesR+1;
	    else     nbVillagesR =nbVillagesR+0;
	     	
		
	}
	
	cout <<nbVillagesR;
	return 0;
}