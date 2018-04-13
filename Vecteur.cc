#include <vector>
#include <string>
#include <iostream>
#include <cmath>
#include "Vecteur.h"
using namespace std;


vector<double>  Vecteur::augmente(double a) {
	V.push_back(a);
	return V;
}

vector<double> Vecteur::set_coord(int a, double b){
	
	if(a <= V.size())
	{
		V[a-1] = b;
		return V;
	}
	else
	{
		throw string("erreur (set_coord) !");
	}
}

ostream& operator<<(ostream& sortie, Vecteur const& v) {
	sortie << "( ";
	for (size_t i = 0; i < v.V.size(); i++) {
		sortie << v.V[i] << "  ";
	}
	sortie << ") ";
	
	return sortie;
}

bool Vecteur::operator==(Vecteur const& C) const {
	for(size_t i = 0; i  <V.size(); i++)
	{
		if(C.V[i] != V[i])
		{ return false;}
	}
	
	return true;
}
		
Vecteur Vecteur::operator+(Vecteur autre) const {
	
	if(V.size() == autre.V.size())
	{
		for(size_t i = 0; i < V.size(); i++){
			autre.V[i] = V[i] + autre.V[i];
			}
		return autre;
	}else
	{
		throw string("erruer (addition) !");
	}
}
		
Vecteur Vecteur::operator-(Vecteur autre) const {
	if(V.size() == autre.V.size())
	{
		for(size_t i = 0; i < V.size(); i++){
			autre.V[i] = V[i] - autre.V[i];
			}
		return autre;
	}else
	{
		throw string("erruer (addition) !");
	}
}
		
		
Vecteur Vecteur::oppose() const {
	Vecteur C{};
	for(size_t i = 0; i < V.size(); i++)
		C.V.push_back(V[i] * (-1));
	return C;
}
		
Vecteur Vecteur::operator*(double a) const {
	Vecteur C{};
	for(size_t i = 0; i < V.size(); i++)
		C.V[i] = V[i] * a;
	return C;
}
			
double Vecteur::operator*(Vecteur autre) const{
	if(V.size() == autre.V.size())
	{
		double a(0.0);
		for(size_t i(0); i < V.size(); i++){
			a += (V[i] * autre.V[i]);
		}
		return a;
	}else
	{
		throw string("erreur (prod_scal) !");
	}
}	
	
Vecteur Vecteur::operator^(Vecteur B) const{
	if(V.size() == B.V.size())
	{
		B.V[0] = (V[1] * B.V[2] - V[2] * B.V[1]);
		B.V[1] = (V[0] * B.V[2] - V[2] * B.V[0]);
		B.V[2] = (V[0] * B.V[1] - V[1] * B.V[0]);
		return B;
	} else 
	{
		throw string("erreur (prod_vect) !");
	}
}

double Vecteur::norme() const{
	double N;
	for (size_t i(0); i < V.size(); i++)
	N += V[i] * V[i];
	return N;
}


double Vecteur::norme2() const{
	return sqrt(norme());
	
}
		

	
