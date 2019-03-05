#ifndef PROJET_H
#define PROJET_H
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>//permet de manipuler les chaines de caracteres


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


AFN langage_vide(); 
AFN mot_vide(); 
AFN mot(char caractere);


AFN reunion (AFN afn1, AFN afn2);
AFN concat (AFN afn1, AFN afn2);
AFN etoile (AFN afn);

_Bool exec_automate(AFD afd, char * mot);
AFD determinisation(AFN afn);
AFD minimisation (AFD afd);


//nos fonctions
void aff_AFN (AFN * AF, int taille);
void aff_AFD( AFD * AF, int taille);
int choix(int taille);
int * remplir_entete_2(AFD afd, int ** tab, int nbreCol, int nbreLigne, int * entete, int * entete2, int * cpt);
int contientTab(int **bigTab, int *tab, int taille);

#endif
