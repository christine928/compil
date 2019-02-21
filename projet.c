#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>//permet de manipuler les chaines de caracteres
#include "projet.h"

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

//mot=ajoutAfN, vide=initAFN (mot et langage)
int main()
{
	AFN * tabAFN=malloc(0*sizeof(AFN));
	AFD * tabAFD=malloc(0*sizeof(AFD));
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
			printf("\nVoulez-vous : \n1 : creer un langage vide\n2 : creer un mot vide\n3 : creer un mot d'un caractère\n4 : afficher les AFN existants\n5 : afficher les AFD existants\n6 : reunir deux AFN\n7 : concatener deux AFN\n8 : mettre a l etoile un AFN\n9 : determiniser un AFN\n10 : minimiser un AFD\n11 : executer un AFD sur un mot\n12 : quitter\n");
			scanf(" %d",&rep);
		}while(rep<1 || rep>12);
		
		switch (rep)
		{
			case 1 : 
				tabAFN=realloc(tabAFN, (tailleTabAFN+1)*sizeof(AFN));
				tabAFN[tailleTabAFN]=langage_vide();
				tailleTabAFN++;
				break;
			case 2 : 
				tabAFN=realloc(tabAFN, (tailleTabAFN+1)*sizeof(AFN));
				tabAFN[tailleTabAFN]=mot_vide();
				tailleTabAFN++;
				break;
			case 3 : 
				
				printf("quel caractere inserer?\n");
				scanf(" %c", &car);
				tabAFN=realloc(tabAFN, (tailleTabAFN+1)*sizeof(AFN));
				tabAFN[tailleTabAFN]=mot(car);
				tailleTabAFN++;
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
				tabAFN=realloc(tabAFN, (tailleTabAFN+1)*sizeof(AFN));
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
				tabAFN=realloc(tabAFN, (tailleTabAFN+1)*sizeof(AFN));
				tabAFN[tailleTabAFN]=concat (tabAFN[ind1], tabAFN[ind2]);
				tailleTabAFN++;
				break;
			case 8 : 
				aff_AFN(tabAFN, tailleTabAFN);
				ind1=choix(tailleTabAFN);
				if(ind1==-1)//tableau vide
					break;
				tabAFN=realloc(tabAFN, (tailleTabAFN+1)*sizeof(AFN));
				tabAFN[tailleTabAFN]=etoile (tabAFN[ind1]);
				tailleTabAFN++;
				break;
			case 9 :
				aff_AFN(tabAFN, tailleTabAFN);
				ind1=choix(tailleTabAFN);
				if(ind1==-1)//tableau vide
					break;
				tabAFD=realloc(tabAFD, (tailleTabAFD+1)*sizeof(AFD));
				tabAFD[tailleTabAFD]=determinisation(tabAFN[ind1]);//verifiere langage identique
				tailleTabAFD++;
				break;
			case 10 : 
				aff_AFD(tabAFD, tailleTabAFD);
				ind1=choix(tailleTabAFD);
				if(ind1==-1)//tableau vide
					break;
				tabAFD=realloc(tabAFD, (tailleTabAFD+1)*sizeof(AFD));
				tabAFD[tailleTabAFD]=minimisation(tabAFD[ind1]);//verifiere langage identique
				tailleTabAFD++;
				break;
			case 11 : 
				aff_AFD(tabAFD, tailleTabAFD);
				ind1=choix(tailleTabAFD);
				//if(ind1==-1)//tableau vide
					//break;
				printf("quel mot tester?\n");
				scanf(" %s", chaine);
				existe= exec_automate(tabAFD[ind1], chaine);
				if(existe)
					printf("le mot est accepte par l automate\n");
				else
					printf("le mot n est pas accepte par l automate\n");
				
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

AFN langage_vide() // -->()
{
	AFN new;
	new.tailleEtats=1;//l etat initial est l etat accepteur
	new.etats=calloc(new.tailleEtats, sizeof(int));
	new.etats[0]=0;
	new.tailleAlpha=0;
	new.alphabet=NULL;
	new.etatInit=0;
	new.tailleAccept=0;
	new.etatAccept=NULL;
	new.tailleTrans=0;
	new.transitions=NULL;
	return new;	
}

AFN mot_vide()
{
	AFN new;
	new.tailleEtats=1;//l etat initial est l etat accepteur
	new.etats=calloc(new.tailleEtats, sizeof(int));
	new.etats[0]=0;
	new.tailleAlpha=0;
	new.alphabet=NULL;
	new.etatInit=0;
	new.tailleAccept=1;
	new.etatAccept=calloc(new.tailleAccept, sizeof(char));
	new.etatAccept[0]=0;
	new.tailleTrans=0;
	new.transitions=NULL;
	return new;	
}
AFN mot(char caractere)
{
	AFN new;
	new.tailleEtats=2;//l etat initial et l etat accepteur
	new.etats=calloc(new.tailleEtats, sizeof(int));
	new.etats[0]=0;
	new.etats[1]=1;
	new.tailleAlpha=1;
	new.alphabet=calloc(new.tailleAlpha, sizeof(char));
	new.alphabet[0]=caractere;
	new.etatInit=0;
	new.tailleAccept=1;
	new.etatAccept=calloc(new.tailleAccept, sizeof(char));
	new.etatAccept[0]=1;
	new.tailleTrans=1;
	new.transitions=calloc(new.tailleTrans, sizeof(Trans));
	new.transitions[0].depart=0;
	new.transitions[0].caractere=caractere;
	new.transitions[0].arrivee=1;
	return new;
}


AFN reunion (AFN afn1, AFN afn2)
{
	int i, j, tailleMaxAlpha=0;
	AFN new;
	_Bool appartient=false, appartient2;
	
	//etats
	new.tailleEtats=afn1.tailleEtats+afn2.tailleEtats-1;//-1 car on supp les 2 etats initiaux de afn et afn2 et qu on rajoute celui de new
	new.etats=calloc(new.tailleEtats, sizeof(int));
	for(i=0; i<new.tailleEtats; i++)
	{
		new.etats[i]=i;
	} 
	
	
	//alphabets
	tailleMaxAlpha=afn1.tailleAlpha+afn2.tailleAlpha;//c est la taille max, pas forcement la reelle
	new.alphabet=calloc(tailleMaxAlpha, sizeof(char));
	for(i=0; i<afn1.tailleAlpha; i++)//on met l alphabet de afn1 dans l alphabet de new
	{
		new.alphabet[i]=afn1.alphabet[i];
	}
	new.tailleAlpha=afn1.tailleAlpha;
	//si le caractere n est pas deja dans l alphabet de new, on rajoute celui qui est dans afn2
	for(i=0; i<afn2.tailleAlpha; i++)
	{
		appartient=false;
		for(j=0;j<afn1.tailleAlpha;j++)
		{
			if(new.alphabet[j]==afn2.alphabet[i])
			{
				appartient=true;
				break;
			}
		}
		
		if(!appartient)
		{
			new.alphabet[new.tailleAlpha]=afn2.alphabet[i];
			new.tailleAlpha++;
		}
	}
	
	new.alphabet=realloc(new.alphabet, (new.tailleAlpha*sizeof(char)));
	
	//etat initial
	new.etatInit=0;
	
	//etats accepteurs
	new.tailleAccept=afn1.tailleAccept+afn2.tailleAccept;
	appartient=false;
	appartient2=false;
	//si les 2 ont un etat initial accepteur, il faut faire -1, sinon l un plus l autre
	for(i=0; i<afn1.tailleAccept; i++)
	{
		if(afn1.etatAccept[i]==0)
			appartient=true;
	}
	for(i=0; i<afn2.tailleAccept; i++)
	{
		if(afn2.etatAccept[i]==0)
			appartient2=true;
	}
	
	if(appartient&&appartient2)//les deux ont un etat initial accepteur
		new.tailleAccept--;
	
	new.etatAccept=calloc(new.tailleAccept, sizeof(char));
	
	for(i=0; i<afn1.tailleAccept; i++)
	{
		new.etatAccept[i]=afn1.etatAccept[i];//+0 car on a rajoute l etat initial mais enleve celui de afn1
	}
	for(i=0; i<afn2.tailleAccept; i++)
	{
		if(afn2.etatAccept[i]!=0)
		{
			new.etatAccept[afn1.tailleAccept+i]=afn2.etatAccept[i]+afn1.tailleEtats-1;//-1 pour enlever l etat initial de afn1
		}
	}
	
	//transitions
	new.tailleTrans=afn1.tailleTrans+afn2.tailleTrans;
	new.transitions=calloc(new.tailleTrans, sizeof(Trans));
	for(i=0; i<afn1.tailleTrans; i++)
	{
		new.transitions[i].depart=afn1.transitions[i].depart;
		new.transitions[i].caractere=afn1.transitions[i].caractere;
		new.transitions[i].arrivee=afn1.transitions[i].arrivee;
	}
	for(i=0; i<afn2.tailleTrans; i++)
	{
		if(afn2.transitions[i].depart==0)
			new.transitions[i+afn1.tailleTrans].depart=0;
		else
			new.transitions[i+afn1.tailleTrans].depart=afn2.transitions[i].depart+afn1.tailleEtats;
		
		new.transitions[i+afn1.tailleTrans].caractere=afn2.transitions[i].caractere;
		new.transitions[i+afn1.tailleTrans].arrivee=afn2.transitions[i].arrivee+afn1.tailleEtats-1;
	}
	return new;
	
}

AFN concat (AFN afn1, AFN afn2)
{
	
}

AFN etoile (AFN afn)
{
	
}

_Bool exec_automate(AFD afd, char * mot)
{
	_Bool retour=true, existe=false;
	int i, j, lenght=strlen(mot), depart=0;
	for(i=0; i<lenght; i++)
	{
		for(j=0; j<afd.tailleAlpha; j++)
		{
			if(mot[i]==afd.alphabet[j])
			{
				existe=true;
				break;
			}
		}
		
		if(!existe)//il n a pas trouve le caractere dans l alphabet
		{
			retour=false;
			break;
		}
			
		depart=afd.(transition[depart][j]);//a verifier en fct de la determinisation
		if(depart==' ')
		{
			retour=false;
			break;
		}
	}
	return retour;
}

AFD determinisation(AFN afn)
{
	int i=0, j=0, k=0, l=0, taille = 1, length = 0;
	int depart, trans;
	_Bool NDet == false, stop == false; //NDet <=> Non Déterministe
	int **tabNewEtats; //tableau des nouveaux états de l'afd
	AFD afd;
	
	//verif si est bien non déterministe : s'il y a une ambiguïté à un moment
	for(i=0;i<afd.tailleTrans;i++){
		depart = afd.transitions[i].depart;
		trans = afd.transitions[i].transitions;
		for(j=i+1;j<afd.tailleTrans;j++){
			if((afd.transitions[j].depart == depart) && (afd.transitions[j].transitions == trans))
				NDet = true;
		}
	}
	
	j = 0;
	
	//déterminisation
	if(NDet){
		tabNewEtats = malloc(1*sizeof(int*));
		tabNewEtats[0] = malloc(2*sizeof(int));//première case du tableau est le nombre d'états q'uil contient <=> sa taille
		tabNewEtats[0][0] = 1; //initialement on regarde pour l'état 0 seul donc taille de 1
		i = 0;
		do{
			for(j=0;j<afd.tailleAlpha;j++){//pour chaque état on regarde la transition j associée
				for(length=0;length<tabNewEtats[i][0];length++){//on regarde état par état (les états composants le nouvel état de l'afd)
					for(k=0;k<afn.tailleTrans;k++){ //si une transistion j existe alors on écrit l'Etat d'arrivé (de l'afn) à la suite du nouvel Etat en cours de création
						if((afn.transitions[k].depart == tabNewEtats[i][length]) && (afn.transitions[k].caractere == afd.alphabet[j])){
							l++;
							taille++;
							tabNewEtats[i] = realloc((l+1)*sizeof(int));
							tabNewEtats[i][l] = afn.transitions[k].arrivee;
						}
					}
					tabNewEtats[i][0] = taille;
					l = 0;
					i++;
					tabNewEtats = realloc((i+1)*sizeof(int*));
					tabNewEtats[i] = malloc(2*sizeof(int))
				}
				tabNewEtats[i][0] = taille;
				i++;
				l = 1;
				taille = 1;
			}
		}while(stop == false);
	}
	else{ //l'afn est déjà déterministe
		afd.etats = afn.etats;
		afd.alphabet = afn.alphabet;
		afd.etatInit = afn.etatInit;
		afd.etatAccept = afn.etatAccept;
		afd.tailleEtats = afn.tailleEtats;
		afd.tailleAlpha = afn.tailleAlpha;
		afd.tailleAccept = afn.tailleAccept;
		afd.transitions = malloc(afd.tailleEtats * sizeof(int*));
		for(i=0;i<afn.tailleEtats;i++){
			afd.transitions[i] = malloc(afd.tailleAlpha * sizeof(int));
			for(j=0;j<afn.tailleAlpha;j++){
				for(k=0;k<afn.tailleTrans;k++){
					if((afn.transitions[k].debut == i) && afn.transitions[k].caractere == alphabet[j])
						afd.transitions[i][alphabet[j]] = afn.transitions[k].arrivee;
				}
				if(afd.transitions[i][alphabet[j]] == NULL)
					afd.transitions[i][alphabet[j]] = -1;
			}
		}
	}
	
	return afd;
}

AFD minimisation (AFD afd)
{

}


void aff_AFN( AFN * AF, int taille)
{
	int  i, j, k;
	
	printf("affichage de AFN \n");
	if(taille==0)
		printf("tableau AFN vide\n");
	
	
	for(i=0; i<taille; i++)
	{
		printf("case %d\n", i);
		
		//etat
		printf("\tetat = { ");
		for(j=0; j<(AF[i]).tailleEtats; j++)
		{
			printf("%d ", (AF[i]).etats[j]);
		}
		printf("}\n");
		
		//alphabet
		printf("\talphabet = { ");
		for(j=0; j<(AF[i]).tailleAlpha; j++)
		{
			printf("%c ", (AF[i]).alphabet[j]);
		}
		printf("}\n");
		
		//etat initial
		printf("\tetat initial=%d\n", (AF[i]).etatInit);
		
		//etat accepteurs
		printf("\tetats accepteurs = { ");
		for(j=0; j<(AF[i]).tailleAccept; j++)
		{
			printf("%d ", (AF[i]).etatAccept[j]);
		}
		printf("}\n");
		
		//transitions	
		printf("\transitions = { ");	
		if((AF[i]).tailleTrans > 0){
			for(j=0; j<(AF[i]).tailleTrans-1; j++)
			{
				printf("(%d, %c, %d), ", ((AF[i]).transitions[j]).depart,  ((AF[i]).transitions[j]).caractere,  ((AF[i]).transitions[j]).arrivee);
			}
			printf("(%d, %c, %d) }\n", ((AF[i]).transitions[(AF[i]).tailleTrans-1]).depart,  ((AF[i]).transitions[(AF[i]).tailleTrans-1]).caractere,  ((AF[i]).transitions[(AF[i]).tailleTrans-1]).arrivee);
		}
	}
	
}

void aff_AFD( AFD * AF, int taille)
{
	int  i, j, k;
	
	printf("affichage de AFD \n");
	
	if(taille==0)
		printf("tableau AFD vide\n");
		
	for(i=0; i<taille; i++)
	{
		printf("case %d\n", i);
		
		//etat
		printf("\tetat = { ");
		for(j=0; j<(AF[i]).tailleEtats; j++)
		{
			printf("%d ", (AF[i]).etats[j]);
		}
		printf("}\n");
		
		//alphabet
		printf("\talphabet = { ");
		for(j=0; j<(AF[i]).tailleAlpha; j++)
		{
			printf("%c ", (AF[i]).alphabet[j]);
		}
		printf("}\n");
		
		//etat initial
		printf("\tetat initial=%d\n", (AF[i]).etatInit);
		
		//etat accepteurs
		printf("\tetats accepteurs = { ");
		for(j=0; j<(AF[i]).tailleAccept; j++)
		{
			printf("%d ", (AF[i]).etatAccept[j]);
		}
		printf("}\n");
		
		//transitions	
		printf("\ttransitions = ");	
		
		if((AF[i]).tailleTrans > 0){
			for(j=0; j<(AF[i]).tailleEtats; j++)
			{
				for(k=0; k<(AF[i]).tailleAlpha;k++)
				{
					printf("\t\ttrans(%d, %c)=%d\n", (AF[i]).etats[j], (AF[i]).alphabet[k],(AF[i]).transitions[j][k]);
				}
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
		scanf(" %d",&ind);
	}while (ind<0 || ind >= taille);
	return ind;
}
