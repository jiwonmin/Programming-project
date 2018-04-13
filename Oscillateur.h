#ifndef OSCILLATEUR_H
#define OSCILLATEUR_H

#include <vector>
#include "Vecteur.h"


class Oscillateur {
	
	public:
		Oscillateur(Vecteur p, Vecteur q, double t);
		
		Vecteur f(Vecteur P, Vecteur Q, double temps);
		
		Vecteur get_P();
		
		Vecteur get_Q();
		
		void set_P(Vecteur A);
			
		void set_Q(Vecteur B);
		
		friend std::ostream& operator<<(std::ostream& sortie, const Oscillateur& O);
			
	private:
		Vecteur P;
		Vecteur Q;
		double temps;
	
	
};

#endif

//P: Vecteur de ses parametres 
//Q = P'
//O: Position de reference ("origine")
