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


AFN langage_vide(); //creer un alphabet=> AFN  //lea
AFN mot_vide(); //ajouter a un alphabet le mot vide //lea
AFN mot(char caractere); //chr//fait


AFN reunion (AFN afn1, AFN afn2);//chr//a voir avec la concat
AFN concat (AFN afn1, AFN afn2);//lea enleve des etats accepteurs
AFN etoile (AFN afn);//lea

_Bool exec_automate(AFD afd, char * mot);//chr
AFD determinisation(AFN afn);//verifier langage identique //lea
AFD minimisation (AFD afd); //chr


//nos fonctions
void aff_AFN (AFN * AF, int taille);//type vaut false si AFN, true pour AFD
void aff_AFD( AFD * AF, int taille);//type vaut false si AFN, true pour AFD
int choix(int taille);
int * remplir_entete_2(AFD afd, int ** tab, int nbreCol, int nbreLigne, int * entete, int * entete2, int * cpt);


#endif
