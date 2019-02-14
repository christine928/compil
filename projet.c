#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>//permet de manipuler les chaines de caracteres
#include "projet.h"

AFN langage_vide(); //creer un alphabet=> AFN  //lea
AFN mot_vide(); //ajouter a un alphabet le mot vide //lea
AFN mot(char caractere); //chr


AFN reunion (AFN afn1, AFN afn2);//chr
AFN concat (AFN afn1, AFN afn2);//lea enleve des etats accepteurs
AFN etoile (AFN afn);//lea

_Bool exec_automate(AFD afd, char * mot);//chr
AFD determinisation(AFN afn);//verifier langage identique //lea
AFD minimisation (AFD afd); //chr


//nos fonctions
void aff_AFN (AFN * AF, int taille);//type vaut false si AFN, true pour AFD
void aff_AFD( AFD * AF, int taille);//type vaut false si AFN, true pour AFD
int choix(int taille);
//mot=ajoutAfN, vide=initAFN (mot et langage)
int main()
{
	AFN * tabAFN;
	AFD * tabAFD;
	int tailleTabAFN=0, tailleTabAFD=0;
	_Bool quitter=false;
	int rep;
	char car, chaine[100];
	int ind1, ind2;
	_Bool existe;
	
	do
	{
		do
		{
			printf("Voulez-vous : \n1 : creer un langage vide\n2 : creer un mot vide\n3 : creer un mot d'un caractère\n4 : afficher les AFN existants\n5 : afficher les AFD existants\n6 : reunir deux AFN\n7 : concatener deux AFN\n8 : mettre a l etoile un AFN\n9 : determiniser un AFN\n10 : minimiser un AFD\n11 : executer un AFD sur un mot\n12 : quitter\n\n");
			scanf("%d",&rep);
		}while(rep<1 || rep>12);
		
		switch (rep)
		{
			case 1 : langage_vide();
					break;
			case 2 : mot_vide();
					break;
			case 3 : 
				
				printf("quel caractere inserer?\n");
				scanf("%c", &car);
				mot(car);
					break;
			case 4 : 
				aff_AFN(tabAFN, tailleTabAFN);
					break;
			case 5 : 
				aff_AFD(tabAFD, tailleTabAFD);
					break;
			case 6 : 
					aff_AFN(tabAFN, tailleTabAFN);
					ind1=choix(tailleTabAFN);
					if(ind1==-1)//tableau vide
						break;
					ind2=choix(tailleTabAFN);
					tabAFN=realloc(tabAFN, tailleTabAFN+1);
					//on a decide que ind1=ind2 = possible
				
					tabAFN[tailleTabAFN]=reunion (tabAFN[ind1], tabAFN[ind2]);
					tailleTabAFN++;
					break;
			case 7 : 
					aff_AFN(tabAFN, tailleTabAFN);
					ind1=choix(tailleTabAFN);
					if(ind1==-1)//tableau vide
						break;
					ind2=choix(tailleTabAFN);
					tabAFN=realloc(tabAFN, tailleTabAFN+1);
					tabAFN[tailleTabAFN]=concat (tabAFN[ind1], tabAFN[ind2]);
					tailleTabAFN++;
					break;
			case 8 : 
					aff_AFN(tabAFN, tailleTabAFN);
					ind1=choix(tailleTabAFN);
					if(ind1==-1)//tableau vide
						break;
					 tabAFN=realloc(tabAFN, tailleTabAFN+1);
					tabAFN[tailleTabAFN]=etoile (tabAFN[ind1]);
					tailleTabAFN++;
					break;
			case 9 : 
					aff_AFD(tabAFD, tailleTabAFD);
					ind1=choix(tailleTabAFD);
					if(ind1==-1)//tableau vide
						break;
					printf("quel mot tester?\n");
					
					scanf("%s", chaine);
					existe= exec_automate(tabAFD[ind1], chaine);
					if(existe)
						printf("le mot est accepte par l automate\n");
					else
						printf("le mot n est pas accepte par l automate\n");
					
					break;
			case 10 : 
					aff_AFN(tabAFN, tailleTabAFN);
					ind1=choix(tailleTabAFN);
					if(ind1==-1)//tableau vide
						break;
					 tabAFD=realloc(tabAFD, tailleTabAFD+1);
					tabAFD[tailleTabAFD]=determinisation(tabAFN[ind1]);//verifiere langage identique
					tailleTabAFD++;
					break;
			case 11 : 
					aff_AFD(tabAFD, tailleTabAFD);
					ind1=choix(tailleTabAFD);
					if(ind1==-1)//tableau vide
						break;
					 tabAFD=realloc(tabAFD, tailleTabAFD+1);
					tabAFD[tailleTabAFD]=minimisation(tabAFD[ind1]);//verifiere langage identique
					tailleTabAFD++;
					break;
			case 12 : 
					quitter=true;
					break;
			default : printf("c est quoi cette merde?\n");//azerty a changer
		}
		
		
	}while(quitter!=true);
	
	printf("au revoir\n");
	return 0;
}

AFN langage_vide()
{
	
	
}

AFN mot_vide()
{
	
	
}
AFN mot(char caracctere)
{
	
	
}


AFN reunion (AFN afn1, AFN afn2)
{
	
	
}

AFN concat (AFN afn1, AFN afn2)
{
	
}

AFN etoile (AFN afn)
{
	
}

_Bool exec_automate(AFD afd, char * mot)
{
	
}

AFD determinisation(AFN afn)
{
	
}

AFD minimisation (AFD afd)
{
	
}


void aff_AFN( AFN * AF, int taille)
{
	int  i, j, k;
	
	printf("affichage de AFN \n");
	
	
	for(i=0; i<taille; i++)
	{
		printf("case %d\n", i);
		
		//etat
		printf("etat = {");
		for(j=0; j<(AF[i]).tailleEtats; j++)
		{
			printf("%d ", (AF[i]).etats[j]);
		}
		printf("}\n");
		
		//alphabet
		printf("alphabet = {");
		for(j=0; j<(AF[i]).tailleAlpha; j++)
		{
			printf("%d ", (AF[i]).alphabet[j]);
		}
		printf("}\n");
		
		//etat initial
		printf("etat initial=%d\n", (AF[i]).etatInit);
		
		//etat accepteurs
		printf("etats accepteurs = {");
		for(j=0; j<(AF[i]).tailleAccept; j++)
		{
			printf("%d ", (AF[i]).etatAccept[j]);
		}
		printf("}\n");
		
		//transitions	
		printf("transitions = {");	
		
		for(j=0; j<(AF[i]).tailleTrans-1; j++)
		{
			printf("(%d, %c, %d), ", ((AF[i]).transitions[j]).depart,  ((AF[i]).transitions[j]).caractere,  ((AF[i]).transitions[j]).arrivee);
		}
		printf("(%d, %c, %d)}\n", ((AF[i]).transitions[(AF[i]).tailleTrans-1]).depart,  ((AF[i]).transitions[(AF[i]).tailleTrans-1]).caractere,  ((AF[i]).transitions[(AF[i]).tailleTrans-1]).arrivee);

	}
	
}

void aff_AFD( AFD * AF, int taille)
{
	int  i, j, k;
	
	printf("affichage de AFD \n");
	
	
	for(i=0; i<taille; i++)
	{
		printf("case %d\n", i);
		
		//etat
		printf("etat = {");
		for(j=0; j<(AF[i]).tailleEtats; j++)
		{
			printf("%d ", (AF[i]).etats[j]);
		}
		printf("}\n");
		
		//alphabet
		printf("alphabet = {");
		for(j=0; j<(AF[i]).tailleAlpha; j++)
		{
			printf("%d ", (AF[i]).alphabet[j]);
		}
		printf("}\n");
		
		//etat initial
		printf("etat initial=%d\n", (AF[i]).etatInit);
		
		//etat accepteurs
		printf("etats accepteurs = {");
		for(j=0; j<(AF[i]).tailleAccept; j++)
		{
			printf("%d ", (AF[i]).etatAccept[j]);
		}
		printf("}\n");
		
		//transitions	
		printf("transitions = {");	
		
		for(j=0; j<(AF[i]).tailleEtats; j++)
		{
			for(k=0; k<(AF[i]).tailleAlpha;k++)
			{
				printf("trans(%d, %c)=%d\n", (AF[i]).etats[j], (AF[i]).alphabet[k],(AF[i]).transitions[j][k]);
			}
		}
		
	}
	
}

int choix(int taille)
{
	if(taille<=0)
	{
		printf("tableau vide\n");
		return -1;
	}
	int ind;
	do
	{
		printf("quel AF choisir?\n");
		scanf("%d",&ind);
	}while (ind<0 || ind >= taille);
	return ind;
}
