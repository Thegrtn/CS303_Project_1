/*
Name: Group 9
*/
#pragma once
#include <list>
#include <iostream>
#include <string>
#include "Term.h"
using namespace std;

class Polynomial {

private:
	list<Term> L_Poly;

public:
	Polynomial() { ; }
	// Copy Constructor ASK URVISH ??
	//Polynomial(const Polynomial& Current_Poly);
	
	const Polynomial operator+(const Polynomial& rhs_Poly);//Adds polynomials 
	
	friend const ostream& operator<<(ostream& output, const Polynomial& rhs_Poly);//Needs implementation!!
	
	//function to add Term element onto polynomial list
	void AddTerm(string S_Term);

};

// Utility function for polynomial class
void Poly_Parse(const string& s, Polynomial& Poly, const string& delim = "-+");
