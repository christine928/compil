#ifndef PROJET_H
#define PROJET_H

	typedef struct
	{
		int depart;
		char caractere;
		int arrivee;
	}Trans;
	
	typedef struct 
	{
		int * etats;
		char * alphabet;
		int etatInit;
		int * etatAccept;//langage vide => rester null
		Trans * transitions;
		int tailleEtats;
		int tailleAlpha;
		int tailleAccept;
		int tailleTrans; 
	}AFN;
	
	typedef struct 
	{
		int * etats;
		char * alphabet;
		int ** transitions; //car un unique resultat pour (depart, car), contrairement au AFN
		// _|_ = -1
		int etatInit;
		int * etatAccept;
		int tailleEtats;
		int tailleAlpha;
		int tailleAccept;
		
	}AFD;

#endif
