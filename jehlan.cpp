#include <iostream>
#include <string>
#include <fstream>
#include <cmath>

using namespace std; 

int main () {
	
	
	float r, h, v, s;
	
	
	cout << "Program na vypocet objemu kuzele." ;
	cout << "Zadejte polomer podstavy kuzele: " ;
	cin >> r;
	cout << "Zadejte vysku kuzele :";
	
	cin >> h;
	
	if (h>0) {
	
	
		v = M_PI*r*h*r*(1.0/3.0);
	 	s = M_PI*r*sqrt(h*h+r*r)+M_PI*r*r;
	 	cout << "objem kuzele je :" << v << endl;
	  	cout << "obsah kuzele je :" << s << endl;

	 	// Vystup do souboru
	 	ofstream soubor;
	 	soubor.open("objem.txt", ios::out);
	
	 	soubor << "Objem kuzele je: " << v;
  	 	soubor << "Obsah kuzele je: " << s;
	
	 	soubor.close();
	 
	 }
	 else { 
	 	cout << "Vyska kuzele musi byt >0 "  << endl;
	 }
	
	return 0;
	
}

//knihovna <cmath> zná pí jako   M_PI
