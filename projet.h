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


AFN langage_vide(); //creer un alphabet=> AFN
AFN mot_vide(); //ajouter a un alphabet le mot vide
AFN mot(char caractere);


AFN reunion (AFN afn1, AFN afn2);//chr//a voir avec la concat
AFN concat (AFN afn1, AFN afn2);//lea enleve des etats accepteurs
AFN etoile (AFN afn);

_Bool exec_automate(AFD afd, char * mot);
AFD determinisation(AFN afn);//verifier langage identique azerty on voulait dire quoi par là déjà ?
AFD minimisation (AFD afd);


//nos fonctions
void aff_AFN (AFN * AF, int taille);//type vaut false si AFN, true pour AFD
void aff_AFD( AFD * AF, int taille);//type vaut false si AFN, true pour AFD
int choix(int taille);
int * remplir_entete_2(AFD afd, int ** tab, int nbreCol, int nbreLigne, int * entete, int * entete2, int * cpt);
int contientTab(int **bigTab, int *tab, int taille);

#endif
