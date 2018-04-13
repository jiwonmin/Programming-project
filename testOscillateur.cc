#include <iostream>
#include "Oscillateur.h"
#include <vector>

using namespace std;

int main() {
	Vecteur P({1, 2});
	Vecteur Q({3, 4});
	double t = 5;
	
	Oscillateur O (P, Q, t);

	
	cout << "Tests de get() : " << endl;
	cout << "	de son parametre : "; O.get_P();
	cout << endl;
	
	cout << "	de sa vitesse : "; O.get_Q(); 
	cout << endl << endl;
	
	cout << "	sa fonction d'évolution donne pour t = 5 : ";
	
	
	Vecteur A({-2, -1}), B({-6, 12});
	cout << "Tests de set() : " << endl;
	cout << "	de son parametre : -2 -1"; 
	O.set_P(A);
	cout << endl << " 	donne : " << endl;
	
	
	
	cout << endl;
	cout << "	de sa vitesse : -6 12"; 
	O.set_Q(B);
	cout << endl << " 	donne : " << endl;
	

	
	return 0;
}
