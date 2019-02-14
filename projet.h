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
		int * etatAccept;
		Trans * transitions; 
	}AFN;
	
	typedef struct 
	{
		int * etats;
		char * alphabet;
		int ** transitions; //car un unique resultat pour (depart, car), contrairement au AFN
		int etatInit;
		int * etatAccept;
		
	}AFD;

#endif
