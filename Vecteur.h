#ifndef VECTEUR_H
#define VECTEUR_H

#include <vector>
#include <iostream>
#include <initializer_list>

class Vecteur {
	
	public:
		Vecteur(std::initializer_list<double>& values)
		: V(values)
		{}
		
	
		Vecteur(Vecteur& C)
		{
			V = C.V;
		}
		
		
		friend std::ostream& operator<<(std::ostream& sortie, const Vecteur& v);
		
		Vecteur(std::vector<double> V) : V(V) {}
		
		int dim() {
			int n;
			for (size_t i(0); i < V.size(); i++) {
				n += 1;}
			return n;
			}
		
		std::vector<double> augmente(double a);
		std::vector<double> set_coord(int a, double b);
		bool operator==(Vecteur const& autre) const;
		Vecteur operator+(Vecteur autre) const;
		Vecteur operator-(Vecteur autre) const;
		Vecteur oppose() const;
		Vecteur operator*(double a) const;
		double operator* (Vecteur autre) const;
		Vecteur operator^(Vecteur autre) const;
		double norme() const;
		double norme2() const;
		
	private:
		
		std::vector<double> V;
};



#endif
