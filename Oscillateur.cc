#include <iostream>
#include "Oscillateur.h"
#include <vector>
using namespace std;

Oscillateur::Oscillateur(Vecteur P, Vecteur Q, double temps)
		: P(P), Q(Q), temps(temps)
		{}
		
Vecteur Oscillateur::f(Vecteur P, Vecteur Q, double temps) {
		return (P + Q) * temps;
	}
		
Vecteur Oscillateur::get_P() {
	for (auto elements : P)
	cout << elements << " ";
	return P;
}
		
Vecteur Oscillateur::get_Q() {
	for (auto elements : Q)
	cout << elements << " ";
	return Q;
}
		
void Oscillateur::set_P(Vecteur A) {
		P = A;
}	
			
void Oscillateur::set_Q(Vecteur B) {
		Q = B;
}

std::ostream& operator<<(std::ostream& sortie, const Oscillateur& O){
	sortie << "P = ( ";
	sortie << O.P << "  ";
	sortie << ") ";
	
	sortie << "Q = ( ";
	sortie << O.Q << "  ";
	sortie << ") ";
	
	sortie << "t = " << O.temps;
	
	return sortie;
}
