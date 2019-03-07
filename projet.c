
#include "projet.h"



//mot=ajoutAfN, vide=initAFN (mot et langage)
int main()
{
	
	AFN * tabAFN=malloc(0*sizeof(AFN));
	AFD * tabAFD=malloc(0*sizeof(AFD));
	int tailleTabAFN=0, tailleTabAFD=0, i, j;
	_Bool quitter=false;
	int rep;
	char car, chaine[100];
	int ind1, ind2;
	_Bool existe;
	
	/*tailleTabAFN=5;
	tabAFN=malloc(tailleTabAFN*sizeof(AFN));
	tabAFN[0].tailleEtats=4;
	tabAFN[0].etats=calloc(tabAFN[0].tailleEtats, sizeof(int));
	for(i=0; i<tabAFN[0].tailleEtats; i++)
		tabAFN[0].etats[i]=i;
	tabAFN[0].tailleAlpha=2;
	tabAFN[0].alphabet=calloc(tabAFN[0].tailleAlpha, sizeof(char));
	tabAFN[0].alphabet[0]='a';
	tabAFN[0].alphabet[1]='b';
	tabAFN[0].etatInit=0;
	tabAFN[0].tailleAccept=2;
	tabAFN[0].etatAccept=calloc(tabAFN[0].tailleAccept, sizeof(char));
	tabAFN[0].etatAccept[0]=2;
	tabAFN[0].etatAccept[1]=3;
	tabAFN[0].tailleTrans=3;
	tabAFN[0].transitions=calloc(tabAFN[0].tailleTrans, sizeof(Trans));
	tabAFN[0].transitions[0].depart=0;
	tabAFN[0].transitions[0].caractere='a';
	tabAFN[0].transitions[0].arrivee=1;
	tabAFN[0].transitions[1].depart=1;
	tabAFN[0].transitions[1].caractere='b';
	tabAFN[0].transitions[1].arrivee=3;
	tabAFN[0].transitions[2].depart=1;
	tabAFN[0].transitions[2].caractere='a';
	tabAFN[0].transitions[2].arrivee=2;
	
	
	tabAFN[1].tailleEtats=4;
	tabAFN[1].etats=calloc(tabAFN[1].tailleEtats, sizeof(int));
	for(i=0; i<tabAFN[1].tailleEtats; i++)
		tabAFN[1].etats[i]=i;
	tabAFN[1].tailleAlpha=3;
	tabAFN[1].alphabet=calloc(tabAFN[1].tailleAlpha, sizeof(char));
	tabAFN[1].alphabet[0]='a';
	tabAFN[1].alphabet[1]='b';
	tabAFN[1].alphabet[2]='c';
	tabAFN[1].etatInit=0;
	tabAFN[1].tailleAccept=3;
	tabAFN[1].etatAccept=calloc(tabAFN[1].tailleAccept, sizeof(char));
	tabAFN[1].etatAccept[0]=1;
	tabAFN[1].etatAccept[1]=2;
	tabAFN[1].etatAccept[2]=3;
	tabAFN[1].tailleTrans=4;
	tabAFN[1].transitions=calloc(tabAFN[1].tailleTrans, sizeof(Trans));
	tabAFN[1].transitions[0].depart=0;
	tabAFN[1].transitions[0].caractere='a';
	tabAFN[1].transitions[0].arrivee=1;
	tabAFN[1].transitions[1].depart=1;
	tabAFN[1].transitions[1].caractere='a';
	tabAFN[1].transitions[1].arrivee=1;
	tabAFN[1].transitions[2].depart=0;
	tabAFN[1].transitions[2].caractere='b';
	tabAFN[1].transitions[2].arrivee=2;
	tabAFN[1].transitions[3].depart=0;
	tabAFN[1].transitions[3].caractere='c';
	tabAFN[1].transitions[3].arrivee=3;
	
	

	tabAFN[2].tailleEtats=3;
	tabAFN[2].etats=calloc(tabAFN[2].tailleEtats, sizeof(int));
	for(i=0; i<tabAFN[2].tailleEtats; i++)
		tabAFN[2].etats[i]=i;
	tabAFN[2].tailleAlpha=2;
	tabAFN[2].alphabet=calloc(tabAFN[2].tailleAlpha, sizeof(char));
	tabAFN[2].alphabet[0]='a';
	tabAFN[2].alphabet[1]='b';
	tabAFN[2].etatInit=0;
	tabAFN[2].tailleAccept=1;
	tabAFN[2].etatAccept=calloc(tabAFN[2].tailleAccept, sizeof(char));
	tabAFN[2].etatAccept[0]=2;
	tabAFN[2].tailleTrans=4;
	tabAFN[2].transitions=calloc(tabAFN[2].tailleTrans, sizeof(Trans));
	tabAFN[2].transitions[0].depart=0;
	tabAFN[2].transitions[0].caractere='a';
	tabAFN[2].transitions[0].arrivee=0;
	tabAFN[2].transitions[1].depart=0;
	tabAFN[2].transitions[1].caractere='a';
	tabAFN[2].transitions[1].arrivee=1;
	tabAFN[2].transitions[2].depart=0;
	tabAFN[2].transitions[2].caractere='b';
	tabAFN[2].transitions[2].arrivee=0;
	tabAFN[2].transitions[3].depart=1;
	tabAFN[2].transitions[3].caractere='a';
	tabAFN[2].transitions[3].arrivee=2;
	
	tabAFN[3].tailleEtats=4;
	tabAFN[3].etats=calloc(tabAFN[3].tailleEtats, sizeof(int));
	for(i=0; i<tabAFN[3].tailleEtats; i++)
		tabAFN[3].etats[i]=i;
	tabAFN[3].tailleAlpha=2;
	tabAFN[3].alphabet=calloc(tabAFN[3].tailleAlpha, sizeof(char));
	tabAFN[3].alphabet[0]='a';
	tabAFN[3].alphabet[1]='b';
	tabAFN[3].etatInit=0;
	tabAFN[3].tailleAccept=1;
	tabAFN[3].etatAccept=calloc(tabAFN[3].tailleAccept, sizeof(char));
	tabAFN[3].etatAccept[0]=3;
	tabAFN[3].tailleTrans=5;
	tabAFN[3].transitions=calloc(tabAFN[3].tailleTrans, sizeof(Trans));
	tabAFN[3].transitions[0].depart=0;
	tabAFN[3].transitions[0].caractere='a';
	tabAFN[3].transitions[0].arrivee=0;
	tabAFN[3].transitions[1].depart=0;
	tabAFN[3].transitions[1].caractere='a';
	tabAFN[3].transitions[1].arrivee=1;
	tabAFN[3].transitions[2].depart=0;
	tabAFN[3].transitions[2].caractere='b';
	tabAFN[3].transitions[2].arrivee=0;
	tabAFN[3].transitions[3].depart=1;
	tabAFN[3].transitions[3].caractere='b';
	tabAFN[3].transitions[3].arrivee=2;
	tabAFN[3].transitions[4].depart=2;
	tabAFN[3].transitions[4].caractere='a';
	tabAFN[3].transitions[4].arrivee=3;
	
	tabAFN[4].tailleEtats=4;
	tabAFN[4].etats=calloc(tabAFN[4].tailleEtats, sizeof(int));
	for(i=0; i<tabAFN[4].tailleEtats; i++)
		tabAFN[4].etats[i]=i;
	tabAFN[4].tailleAlpha=2;
	tabAFN[4].alphabet=calloc(tabAFN[4].tailleAlpha, sizeof(char));
	tabAFN[4].alphabet[0]='a';
	tabAFN[4].alphabet[1]='b';
	tabAFN[4].etatInit=0;
	tabAFN[4].tailleAccept=1;
	tabAFN[4].etatAccept=calloc(tabAFN[4].tailleAccept, sizeof(char));
	tabAFN[4].etatAccept[0]=3;
	tabAFN[4].tailleTrans=8;
	tabAFN[4].transitions=calloc(tabAFN[4].tailleTrans, sizeof(Trans));
	tabAFN[4].transitions[0].depart=0;
	tabAFN[4].transitions[0].caractere='a';
	tabAFN[4].transitions[0].arrivee=0;
	tabAFN[4].transitions[1].depart=0;
	tabAFN[4].transitions[1].caractere='a';
	tabAFN[4].transitions[1].arrivee=1;
	tabAFN[4].transitions[2].depart=0;
	tabAFN[4].transitions[2].caractere='b';
	tabAFN[4].transitions[2].arrivee=0;
	tabAFN[4].transitions[3].depart=1;
	tabAFN[4].transitions[3].caractere='a';
	tabAFN[4].transitions[3].arrivee=2;
	tabAFN[4].transitions[4].depart=1;
	tabAFN[4].transitions[4].caractere='b';
	tabAFN[4].transitions[4].arrivee=2;
	tabAFN[4].transitions[5].depart=2;
	tabAFN[4].transitions[5].caractere='a';
	tabAFN[4].transitions[5].arrivee=3;
	tabAFN[4].transitions[6].depart=3;
	tabAFN[4].transitions[6].caractere='a';
	tabAFN[4].transitions[6].arrivee=3;
	tabAFN[4].transitions[7].depart=3;
	tabAFN[4].transitions[7].caractere='b';
	tabAFN[4].transitions[7].arrivee=3;
	
	tailleTabAFD=3;
	AFD * tabAFD=malloc(tailleTabAFD*sizeof(AFD));
	tabAFD[0].tailleEtats=8;//l etat initial et l etat accepteur
	tabAFD[0].etats=calloc(tabAFD[0].tailleEtats, sizeof(int));
	tabAFD[0].etats[0]=0;
	tabAFD[0].etats[1]=1;
	tabAFD[0].etats[2]=2;
	tabAFD[0].etats[3]=3;
	tabAFD[0].etats[4]=4;
	tabAFD[0].etats[5]=5;
	tabAFD[0].etats[6]=6;
	tabAFD[0].etats[7]=7;
	tabAFD[0].tailleAlpha=2;
	tabAFD[0].alphabet=calloc(tabAFD[0].tailleAlpha, sizeof(char));
	tabAFD[0].alphabet[0]='a';
	tabAFD[0].alphabet[1]='b';
	tabAFD[0].etatInit=0;
	tabAFD[0].tailleAccept=4;
	tabAFD[0].etatAccept=calloc(tabAFD[0].tailleAccept, sizeof(char));
	tabAFD[0].etatAccept[0]=3;
	tabAFD[0].etatAccept[1]=4;
	tabAFD[0].etatAccept[2]=5;
	tabAFD[0].etatAccept[3]=6;
	tabAFD[0].transitions=calloc(tabAFD[0].tailleEtats, sizeof(int*));
	for(i=0; i<tabAFD[0].tailleEtats; i++)
	{
		tabAFD[0].transitions[i]=calloc(tabAFD[0].tailleAlpha, sizeof(int));
	}
	tabAFD[0].transitions[0][0]=1;
	tabAFD[0].transitions[0][1]=0;
	tabAFD[0].transitions[1][0]=2;
	tabAFD[0].transitions[1][1]=7;
	tabAFD[0].transitions[2][0]=3;
	tabAFD[0].transitions[2][1]=7;
	tabAFD[0].transitions[3][0]=3;
	tabAFD[0].transitions[3][1]=4;
	tabAFD[0].transitions[4][0]=6;
	tabAFD[0].transitions[4][1]=5;
	tabAFD[0].transitions[5][0]=6;
	tabAFD[0].transitions[5][1]=5;
	tabAFD[0].transitions[6][0]=3;
	tabAFD[0].transitions[6][1]=4;
	tabAFD[0].transitions[7][0]=6;
	tabAFD[0].transitions[7][1]=0;
	
	
	
	//tabAFD=malloc(2*sizeof(AFD));
	tabAFD[1].tailleEtats=3;//l etat initial et l etat accepteur
	tabAFD[1].etats=calloc(tabAFD[1].tailleEtats, sizeof(int));
	tabAFD[1].etats[0]=0;
	tabAFD[1].etats[1]=1;
	tabAFD[1].etats[2]=2;	
	tabAFD[1].tailleAlpha=2;
	tabAFD[1].alphabet=calloc(tabAFD[1].tailleAlpha, sizeof(char));
	tabAFD[1].alphabet[0]='a';
	tabAFD[1].alphabet[1]='b';
	tabAFD[1].etatInit=0;
	tabAFD[1].tailleAccept=1;
	tabAFD[1].etatAccept=calloc(tabAFD[1].tailleAccept, sizeof(char));
	tabAFD[1].etatAccept[0]=2;
	tabAFD[1].transitions=calloc(tabAFD[1].tailleEtats, sizeof(int*));
	for(i=0; i<tabAFD[1].tailleEtats; i++)
	{
		tabAFD[1].transitions[i]=calloc(tabAFD[1].tailleAlpha, sizeof(int));
	}
	tabAFD[1].transitions[0][0]=1;
	tabAFD[1].transitions[0][1]=2;
	tabAFD[1].transitions[1][0]=1;
	tabAFD[1].transitions[1][1]=2;
	tabAFD[1].transitions[2][0]=-1;
	tabAFD[1].transitions[2][1]=-1;
	
	//
	tabAFD[2].tailleEtats=3;//l etat initial et l etat accepteur
	tabAFD[2].etats=calloc(tabAFD[2].tailleEtats, sizeof(int));
	tabAFD[2].etats[0]=0;
	tabAFD[2].etats[1]=1;
	tabAFD[2].etats[2]=2;	
	tabAFD[2].tailleAlpha=2;
	tabAFD[2].alphabet=calloc(tabAFD[2].tailleAlpha, sizeof(char));
	tabAFD[2].alphabet[0]='a';
	tabAFD[2].alphabet[1]='b';
	tabAFD[2].etatInit=0;
	tabAFD[2].tailleAccept=1;
	tabAFD[2].etatAccept=calloc(tabAFD[2].tailleAccept, sizeof(char));
	tabAFD[2].etatAccept[0]=1;
	tabAFD[2].transitions=calloc(tabAFD[2].tailleEtats, sizeof(int*));
	for(i=0; i<tabAFD[2].tailleEtats; i++)
	{
		tabAFD[2].transitions[i]=calloc(tabAFD[2].tailleAlpha, sizeof(int));
	}
	tabAFD[2].transitions[0][0]=1;
	tabAFD[2].transitions[0][1]=2;
	tabAFD[2].transitions[1][0]=1;
	tabAFD[2].transitions[1][1]=2;
	tabAFD[2].transitions[2][0]=1;
	tabAFD[2].transitions[2][1]=2;
	*/
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
			default : printf("quel est ce probleme incoherent?\n");//azerty a changer
		}
		
		
	}while(quitter!=true);
	
	for(i=0; i<tailleTabAFN; i++)
	{
		free(tabAFN[i].etats);
		free(tabAFN[i].alphabet);
		free(tabAFN[i].etatAccept);
		free(tabAFN[i].transitions);
	}
	free(tabAFN);
	
	for(i=0; i<tailleTabAFD; i++)
	{
		free(tabAFD[i].etats);
		free(tabAFD[i].alphabet);
		free(tabAFD[i].etatAccept);
		for(j=0; j<tabAFD[i].tailleEtats; j++)
			free(tabAFD[i].transitions[j]);
		free(tabAFD[i].transitions);
	}
	free(tabAFD);
	printf("Au revoir\n");
	return 0;
}

AFN langage_vide()
{
	AFN new;
	new.tailleEtats=1;
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
	new.etatAccept=calloc(new.tailleAccept, sizeof(int));
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
	new.etatAccept=calloc(new.tailleAccept, sizeof(int));
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
	int i, j, k, tailleMaxAlpha=0, ecart=0;
	AFN new;
	_Bool appartient=false, appartient2, existe, existe2;
	
	//etats
	new.tailleEtats=afn1.tailleEtats+afn2.tailleEtats-1;//-1 car on supp les 2 etats initiaux de afn1 et afn2 et qu on rajoute celui de new
	new.etats=calloc(new.tailleEtats, sizeof(int));
	for(i=0; i<new.tailleEtats; i++)
		new.etats[i]=i;
	
	//alphabets
	tailleMaxAlpha=afn1.tailleAlpha+afn2.tailleAlpha;//c est la taille max, pas forcement la reelle
	new.alphabet=calloc(tailleMaxAlpha, sizeof(char));
	for(i=0; i<afn1.tailleAlpha; i++)//on met l alphabet de afn1 dans l alphabet de new
		new.alphabet[i]=afn1.alphabet[i];

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
			new.tailleAlpha++;
			new.alphabet=realloc(new.alphabet, (new.tailleAlpha*sizeof(char)));
			new.alphabet[new.tailleAlpha-1]=afn2.alphabet[i];
		}
	}
	
	//etat initial
	new.etatInit=0;
	
	//etats accepteurs
	new.tailleAccept=afn1.tailleAccept+afn2.tailleAccept;
	appartient=false;
	appartient2=false;
	//si les 2 ont un etat initial accepteur, il faut faire -1, sinon la taille de l'un plus la taille de l'autre
	for(i=0; i<afn1.tailleAccept; i++)
	{
		if(afn1.etatAccept[i]==afn1.etatInit)
		{
			appartient=true;
			break;
		}
	}
	for(i=0; i<afn2.tailleAccept; i++)
	{
		if(afn2.etatAccept[i]==afn2.etatInit)
		{
			appartient2=true;
			break;
		}
	}
	
	if(appartient&&appartient2)//les deux ont un etat initial accepteur
		new.tailleAccept--;
	
	new.etatAccept=calloc(new.tailleAccept, sizeof(int));
	
	for(i=0; i<afn1.tailleAccept; i++)
		new.etatAccept[i]=afn1.etatAccept[i];//+0 car on a rajoute l etat initial mais enleve celui de afn1
	
	for(i=0; i<afn2.tailleAccept; i++)
	{
		if(afn2.etatAccept[i]!=afn2.etatInit)//si l etat accepteur n est pas l etat initial
			new.etatAccept[afn1.tailleAccept+i]=afn2.etatAccept[i]+afn1.tailleEtats-1;//-1 pour enlever l etat initial de afn1
		else if ((!appartient)&&(afn2.etatAccept[i]==afn2.etatInit))//si l etat initial est accepteur et que le 1er afn n'avait pas l etat initial accepteur
			new.etatAccept[afn1.tailleAccept+i]=afn2.etatInit;
		
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
		if(afn2.transitions[i].depart==afn2.etatInit)
			new.transitions[i+afn1.tailleTrans-ecart].depart=afn2.etatInit;//on met l etat initial
		else
			new.transitions[i+afn1.tailleTrans-ecart].depart=afn2.transitions[i].depart+afn1.tailleEtats-ecart-1;//on fait attention avec les nouveaux numeros
		
		new.transitions[i+afn1.tailleTrans-ecart].caractere=afn2.transitions[i].caractere;
		new.transitions[i+afn1.tailleTrans-ecart].arrivee=afn2.transitions[i].arrivee+afn1.tailleEtats-ecart-1;
		
	}
	return new;	
}

AFN concat (AFN afn1, AFN afn2)
{
	AFN new;
	int i,j, count;
	_Bool exist;
	
	//on garde l'état initial du premier AFN
	new.etatInit = afn1.etatInit;

	//on unie les alphabets des deux AFN
	new.tailleAlpha = afn1.tailleAlpha;
	new.alphabet = malloc(new.tailleAlpha*sizeof(char));
	for(i=0;i<new.tailleAlpha;i++)
		new.alphabet[i] = afn1.alphabet[i];
	
	//on ajoute à l'alphabet les lettres de l'alphabet de afn2 qui ne sont pas déjà présentes
	for(i=0;i<afn2.tailleAlpha; i++){
		exist = false;
		for(j=0;j<afn1.tailleAlpha;j++){
			if(new.alphabet[j]==afn2.alphabet[i]){
				exist = true;
				break;
			}
		}
		
		if(!exist){
			new.tailleAlpha++;
			new.alphabet=realloc(new.alphabet,(new.tailleAlpha*sizeof(char)));
			new.alphabet[new.tailleAlpha-1]=afn2.alphabet[i];
		}
	}
	
	//le nouvel ensemble d'etats est l'union des états des deux AFN sans l'état initial du second AFN
	new.tailleEtats = afn1.tailleEtats + afn2.tailleEtats -1; //on suppose comme dans le cours qu'un AFN n'a qu'un état initial : 0
	new.etats = malloc(new.tailleEtats*sizeof(int));
	for(i=0;i<new.tailleEtats;i++){
			new.etats[i] = i;
	}
	
	//états accepteurs
	//on regarde si l'état initial de afn2 était aussi un état accepteur
	exist = false;
	for(i=0;i<afn2.tailleAccept;i++){
		if(afn2.etatInit == afn2.etatAccept[i]){
			exist = true;
			break;
		}
	}
			
	//si l'etat initial était un état accepteur alors les nouveaux états accepteurs sont 
	//l'union des états accepteurs des deux AFN sans l'état inital du second AFN
	if(exist){
		new.tailleAccept = afn1.tailleAccept + afn2.tailleAccept -1;
		new.etatAccept = malloc(new.tailleAccept*sizeof(int));
		for(i=0;i<afn1.tailleAccept;i++){
			new.etatAccept[i] = afn1.etatAccept[i];
		}
		count = afn1.tailleAccept;
		for(i=afn1.tailleEtats;i<afn2.tailleAccept + afn1.tailleEtats;i++){
			if(afn2.etatAccept[i - afn1.tailleEtats] != afn2.etatInit){
				new.etatAccept[count] = afn2.etatAccept[i - afn1.tailleEtats] +  afn1.tailleEtats -1;
				count++;
			}
		}
	}	
	
	//si l'etat initial n'était pas un état accepteur alors les nouveaux états accepteurs sont ceux de l'afn2
	if(!exist){
		new.tailleAccept = afn2.tailleAccept;
		new.etatAccept = malloc(new.tailleAccept*sizeof(int));
		for(i=0;i<new.tailleAccept;i++){
			new.etatAccept[i] = afn2.etatAccept[i] + afn1.tailleEtats -1;
		}
	}
	
	//les transitions sont celles de afn1 avec celles de afn2 sans son état initial en depart
	//et de nouvelles transitions  entre  les états accepteurs de afn1 et les transitions partant de l'état initil de afn2
	new.tailleTrans = afn1.tailleTrans;
	new.transitions = malloc(new.tailleTrans*sizeof(Trans));
	for(i=0;i<new.tailleTrans;i++){
		new.transitions[i].depart = afn1.transitions[i].depart;
		new.transitions[i].caractere = afn1.transitions[i].caractere;
		new.transitions[i].arrivee = afn1.transitions[i].arrivee;
	}
	
	for(i=0;i<afn2.tailleTrans;i++){
		if(afn2.transitions[i].depart == afn2.etatInit){
			new.tailleTrans += afn1.tailleAccept; //on ajoute autant de transition que d'état accepteur de afn1
			new.transitions=realloc(new.transitions,(new.tailleTrans*sizeof(Trans)));
			for(j=0;j<afn1.tailleAccept;j++){
				new.transitions[new.tailleTrans - afn1.tailleAccept + j].depart = afn1.etatAccept[j];
				new.transitions[new.tailleTrans - afn1.tailleAccept + j].caractere = afn2.transitions[i].caractere;
				new.transitions[new.tailleTrans - afn1.tailleAccept + j].arrivee = afn2.transitions[i].arrivee + afn1.tailleEtats -1;
			}
		}
		else{
			new.tailleTrans++;
			new.transitions=realloc(new.transitions,(new.tailleTrans*sizeof(Trans)));
			new.transitions[new.tailleTrans -1].depart = afn2.transitions[i].depart + afn1.tailleEtats -1;
			new.transitions[new.tailleTrans -1].caractere = afn2.transitions[i].caractere;
			new.transitions[new.tailleTrans -1].arrivee = afn2.transitions[i].arrivee + afn1.tailleEtats -1;
		}
	}
	
	//si on a aucune transition et un état accepteur autre que l'état initial 0 alors
	//on est dans le cas d'une concatenation avec le langage vide
	if(((new.tailleTrans == 0) && (new.tailleEtats > 1)) || ((new.tailleTrans == 0) && (new.tailleEtats == 1) && (new.tailleAccept == 0))){
		//on libère les données faussées
		free(new.alphabet);
		free(new.etats);
		free(new.etatAccept);
		
		//on définit l'automate comme le langage vide
		new = langage_vide();
	}
	return new;
}

AFN etoile (AFN afn)
{
	AFN new;
	int i, j, k;
	
	//etats
	new.tailleEtats=afn.tailleEtats;
	new.etats=calloc(new.tailleEtats, sizeof(int));
	for(i=0; i<new.tailleEtats; i++)
		new.etats[i]=afn.etats[i];
	
	//alphabets
	new.tailleAlpha=afn.tailleAlpha;
	new.alphabet=calloc(new.tailleAlpha, sizeof(char));
	for(i=0; i<new.tailleAlpha; i++)//on met l alphabet de afn1 dans l alphabet de new
	{
		new.alphabet[i]=afn.alphabet[i];
	}
	
	//etat initial
	new.etatInit=afn.etatInit;
	
	//etats accepteurs
	new.tailleAccept=afn.tailleAccept+1;
	new.etatAccept=calloc(new.tailleAccept, sizeof(int));
	new.etatAccept[0]=new.etatInit;
	for(i=0; i<afn.tailleAccept; i++)
	{
		if(afn.etatAccept[i]!=afn.etatInit)
			new.etatAccept[i+1]=afn.etatAccept[i];
		else
		{
			new.tailleAccept--;
			new.etatAccept=realloc(new.etatAccept, new.tailleAccept*sizeof(int));
		}
	}
	
	//transistions
	_Bool existe;
	int tailleTransInit=0, indTrans=0;
	int * transInit=malloc(tailleTransInit*sizeof(int));//indice des transitions partant de l'etat initial
	for(i=0; i<afn.tailleTrans; i++)//on recupere tous les indices des transitions partant de l etat initial
	{
		if(afn.transitions[i].depart==afn.etatInit)
		{
			tailleTransInit++;
			transInit=realloc(transInit, tailleTransInit*sizeof(int));
			transInit[tailleTransInit-1]=i;
		}
	}
	new.tailleTrans=afn.tailleTrans+tailleTransInit*afn.tailleAccept;
	new.transitions=calloc(new.tailleTrans, sizeof(Trans));
	for(i=0; i<afn.tailleTrans; i++)//on recopie toutes les transitions existantes
	{
		new.transitions[i].depart=afn.transitions[i].depart;
		new.transitions[i].caractere=afn.transitions[i].caractere;
		new.transitions[i].arrivee=afn.transitions[i].arrivee;
	}
	
	//on ajoute les transitions dues a la mise a l etoile
	indTrans=afn.tailleTrans;
	for(i=0; i<afn.tailleAccept; i++)
	{
		for(j=0; j<tailleTransInit; j++)
		{
			int depart=afn.etatAccept[i], arrivee=afn.transitions[transInit[j]].arrivee;
			char carac=afn.transitions[transInit[j]].caractere;
			existe=false;
			for(k=0; k<indTrans; k++)
			{
				//la transition existe deja
				if((new.transitions[k].depart==depart)&&(new.transitions[k].caractere==carac)&&(new.transitions[k].arrivee==arrivee))
				{
					existe=true;
					break;
				}
			}
			
			if(existe)
			{
				new.tailleTrans--;
				new.transitions=realloc(new.transitions, new.tailleTrans*sizeof(Trans));
			}
			else
			{
				new.transitions[indTrans].depart=afn.etatAccept[i];
				new.transitions[indTrans].caractere=afn.transitions[transInit[j]].caractere;
				new.transitions[indTrans].arrivee=afn.transitions[transInit[j]].arrivee;
				indTrans++;
			}
		}
	}
	
	free(transInit);
	
	return new;
}

_Bool exec_automate(AFD afd, char * mot)
{
	_Bool retour=true, existe=false, accepteur=false;
	int i, j, lenght=strlen(mot), depart=0;
	for(i=0; i<lenght; i++)
	{
		for(j=0; j<afd.tailleAlpha; j++)
		{
			if(mot[i]==afd.alphabet[j])//on verifie si le caractere est bien dans l alphabet de l afd
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
		
		depart=afd.transitions[depart][j];//on reinitialise d'ou on va partir pour la prochaine transition

		if(depart==-1)
		{
			retour=false;
			break;
		}
	}
	
	for(i=0; i<afd.tailleAccept; i++)//on verifie qu'on a atteri dans un accepteur
	{
		accepteur=accepteur||(depart==afd.etatAccept[i]);
	}
	return retour&&accepteur;
}

AFD determinisation(AFN afn) //cas transitions vaut -1
{
	int i=0, j=0, k=0, l=0, taille=0, length=0, init=0, m=0, nbTrans=0, identique=0;
	_Bool NDet=false, stop=false, etatAcc=false, trans=false, exist=false; //NDet <=> Non Déterministe
	int **tabNewEtats; //tableau des nouveaux états de l'afd
	AFD afd;
	
	//préparation de l'afd
	afd.alphabet = afn.alphabet;
	afd.etatInit = 0; //on considère, comme dans le cours, que l'état initial est toujours 0
	afd.etatAccept = malloc(0*sizeof(int));
	afd.etats = malloc(1*sizeof(int));
	afd.transitions = malloc(0*sizeof(int*));
	afd.tailleAccept = 0;
	afd.tailleAlpha = afn.tailleAlpha;
	afd.tailleEtats = 1;
	
	//verif si est bien non déterministe : s'il y a une ambiguïté à un moment
	for(i=0;i<afn.tailleTrans;i++){
		for(j=i+1;j<afn.tailleTrans;j++){
			if((afn.transitions[j].depart == afn.transitions[i].depart) && (afn.transitions[j].caractere == afn.transitions[i].caractere))
				NDet = true;
			}
		}
	
	j = 0;
	

	//déterminisation
	if(NDet){
		tabNewEtats = malloc(2*sizeof(int*));
		tabNewEtats[0] = malloc(2*sizeof(int));//première case du tableau est le nombre d'états qu'il contient <=> sa taille
		tabNewEtats[0][0] = 1; //initialement on regarde pour l'état 0 seul donc taille de 1
		tabNewEtats[0][1] = 0;
		afd.etats[0] = afd.etatInit;//l'état initial
		tabNewEtats[1] = malloc(2*sizeof(int));
		i = 1;
		do{
			afd.transitions = realloc(afd.transitions, (nbTrans+1)*sizeof(int*));
			afd.transitions[afd.etats[init]] = realloc(afd.transitions[afd.etats[init]], afd.tailleAlpha*sizeof(int));
			for(j=0;j<afd.tailleAlpha;j++){//on regarde le caractère j
				for(length=1;length<tabNewEtats[init][0]+1;length++){//on regarde état par état (les états composants le nouvel état de l'afd)
					for(k=0;k<afn.tailleTrans;k++){ //si une transistion j existe alors on écrit l'Etat d'arrivé (de l'afn) à la suite du nouvel Etat en cours de création
						if((afn.transitions[k].depart == tabNewEtats[init][length]) && (afn.transitions[k].caractere == afd.alphabet[j])){
							if(l != 0){
								for(m=1;m<l+1;m++){
									if(tabNewEtats[i][m] == afn.transitions[k].arrivee){
										exist = true;
										break;
									}
								}
							}
							
							if(!exist){
								l++;
								taille++;
								tabNewEtats[i] = realloc(tabNewEtats[i], (l+1)*sizeof(int));
								tabNewEtats[i][l] = afn.transitions[k].arrivee;
								trans = true;
								for(m=0;m<afn.tailleAccept;m++){
									if(afn.etatAccept[m] == tabNewEtats[i][l]){//si au moins un état composant le nouvel état était accepteur alors le nouvel état est accepteur
										etatAcc = true;
									}
								}
							}
							exist = false;
						}
					}
				}
				//si on a créé un nouvel état car il y a eu une transition
				if(trans){
					tabNewEtats[i][0] = taille;
					identique = contientTab(tabNewEtats, tabNewEtats[i],i);//on verifie si l'état existait déjà ou pas
					if(identique == -1){//si le couple n'existait pas déjà
						//création d'un nouvel état
						afd.etats = realloc(afd.etats, (afd.tailleEtats+1)*sizeof(int));
						afd.etats[afd.tailleEtats] = i;
											
						//création nouvelle transition de l'état init vers l'état i via le caractère j
						afd.transitions[afd.etats[init]][j] = afd.etats[afd.tailleEtats];						
						afd.tailleEtats ++;//nombre d'états actuellement créés
						
						//si contient au moins un état accepteur est accepteur
						if(etatAcc){
							afd.etatAccept = realloc(afd.etatAccept, (afd.tailleAccept+1)*sizeof(int));
							afd.etatAccept[afd.tailleAccept] = i;
							afd.tailleAccept ++;						
						}
						i++;
					}
						
					else{
						afd.transitions[afd.etats[init]][j] = identique;
						free(tabNewEtats[i]);
					}
					tabNewEtats = realloc(tabNewEtats, (i+1)*sizeof(int*));
					tabNewEtats[i] = malloc(2*sizeof(int));
					taille = 0;
					l = 0;
				}
			
				//si aucun nouvel état n'est créé pour une transition avec le caractère j
				else
					afd.transitions[afd.etats[init]][j] = -1;
				
				nbTrans ++;//nombre de transistions actuellement créées	
			}
			
			init ++;
			if(init == i)//il n'y a pas de nouveau couple et on a déjà testé tous les couples trouvés
				stop = true;
		}while(stop == false);
	}
	
	else{ //l'afn est déjà déterministe
		afd.etats = afn.etats;
		afd.etatInit = afn.etatInit;
		afd.etatAccept = afn.etatAccept;
		afd.tailleEtats = afn.tailleEtats;
		afd.tailleAlpha = afn.tailleAlpha;
		afd.tailleAccept = afn.tailleAccept;
		afd.transitions = malloc(afd.tailleEtats * sizeof(int*));
		for(i=0;i<afn.tailleEtats;i++){
			afd.transitions[i] = malloc(afd.tailleAlpha * sizeof(int));
			for(j=0;j<afn.tailleAlpha;j++){
				afd.transitions[i][j] = -1;
				for(k=0;k<afn.tailleTrans;k++){
					if((afn.transitions[k].depart == i) && (afn.transitions[k].caractere == afd.alphabet[j]))
						afd.transitions[i][j] = afn.transitions[k].arrivee;
				}					
			}
		}
	}
	return afd;	
}

int contientTab(int **bigTab, int *tab, int taille)
{
	int i,j, res = -1;
	_Bool contient = false;
	for(i=0;i<taille;i++){
		if(bigTab[i][0] == tab[0]){//si les tableaux sont de même taille on les compare
			contient = true;
			for(j=1;j<tab[0]+1;j++){
				if(bigTab[i][j] != tab[j])
					contient = false;
			}
			if(contient){
				res = i;
				break;
			}
		}
	}
	return res;
}

AFD minimisation (AFD afd)
{
	int ** tab;
	int * entete, * entete2;
	int nbreLigne=afd.tailleAlpha, nbreCol=afd.tailleEtats+1, i, j, k, cpt, numCol;
	_Bool existe, arret;
	
	//la colonne [nbreCol-1], correspondant à [tailleAlpha], correspond à la colonne morte
	//creation et initialisation des tableaux
	tab=calloc(nbreLigne, sizeof(int*));
	entete=calloc(nbreCol, sizeof(int));
	entete2=calloc(nbreCol, sizeof(int));

	entete[nbreCol-1]=0;
	for(i=0; i<nbreLigne; i++)
	{
		tab[i]=calloc(nbreCol, sizeof(int*));
		tab[i][nbreCol-1]=0;//et donc toute la colonne 'etat mort' vaut 0 à l'initialisation
	}
	
	for(j=0;  j<nbreCol-1; j++)//on remplit la premiere ligne, correspondant a l entete du tableau
	{
		entete[j]=0;
		for(k=0; k<afd.tailleAccept; k++)
		{
			if(j==afd.etatAccept[k])//l etat est accepteur, donc on lui met l'etat 1 pour l initialisation
			{
				entete[j]=1;
				break;
			}
		}
	}
	for(i=0; i<nbreLigne; i++) //on remplit le reste du tableau
	{
		for(j=0; j<nbreCol-1;j++)
			if(afd.transitions[j][i]!=-1)
				tab[i][j]=entete[afd.transitions[j][i]];
			else
				tab[i][j]=entete[nbreCol-1];
	}
	
	
	//on remplit deuxieme entete en numerotant les colonnes différentes
	entete2=remplir_entete_2(afd, tab, nbreCol, nbreLigne, entete, entete2, &cpt);
	arret=true;
	//verification si les les deux entetes sont identiques, donc si on peut s arreter
	for(j=0; j<nbreCol; j++)
	{
		arret=arret&&(entete[j]==entete2[j]);//si on trouve une entete de fausse alors on continue
		entete[j]=entete2[j];//l entete2 devient l entete principale
	}
	
	while(!arret)
	{
		for(i=0; i<nbreLigne; i++) //on remplit le tableau
		{
			for(j=0; j<nbreCol-1;j++)
			{
				if(afd.transitions[j][i]>-1)
					tab[i][j]=entete[afd.transitions[j][i]];
				else
					tab[i][j]=entete[nbreCol-1];
			}
			tab[i][nbreCol-1]=entete[nbreCol-1];
		}
		
		entete2=remplir_entete_2(afd, tab, nbreCol, nbreLigne, entete, entete2, &cpt);
		arret=true;
		
		//verification si les deux entetes sont identiques : 
		for(j=0; j<nbreCol; j++)
		{
			arret=arret&&(entete[j]==entete2[j]);//si on trouve une entete de fausse alors on continue
			entete[j]=entete2[j];
		}
	}
	
	AFD new;
	new.tailleEtats=cpt-1;//l etat initial et l etat accepteur
	new.etats=calloc(new.tailleEtats, sizeof(int));
	for(i=0; i<new.tailleEtats; i++)
		new.etats[i]=i;
	new.tailleAlpha=afd.tailleAlpha;
	new.alphabet=calloc(new.tailleAlpha, sizeof(char));
	for(i=0; i<new.tailleAlpha; i++)
			new.alphabet[i]=afd.alphabet[i];
	new.etatInit=afd.etatInit;
	new.tailleAccept=afd.tailleAccept;
	new.etatAccept=calloc(new.tailleAccept, sizeof(int));
	new.etatAccept[0]=entete[afd.etatAccept[0]];
	for(i=1; i<new.tailleAccept; i++)
	{
		existe=false;
		for(j=0; j<i; j++)
		{
			if(new.etatAccept[j]==entete[afd.etatAccept[i]])//on l a deja mis comme etat accepteur
			{
				new.tailleAccept--;
				new.etatAccept=realloc(new.etatAccept, new.tailleAccept);
			}
			else
				new.etatAccept[i]=entete[afd.etatAccept[i]];

		}
	}
	new.transitions=calloc(new.tailleEtats, sizeof(int*));
	int cpt_col=0;
	for(i=0; i<afd.tailleEtats; i++)
	{
		if((i==0)||(entete[i]!=entete[i-1]))
		{
			new.transitions[cpt_col]=calloc(new.tailleAlpha, sizeof(int));
			for(j=0; j<new.tailleAlpha; j++)
			{
				if(tab[j][i]==entete[nbreCol-1])//va vers l etat mort
					new.transitions[cpt_col][j]=-1;
				else
					new.transitions[cpt_col][j]=tab[j][i];
			}
			cpt_col++;
		}
	}
	
	free(entete);
	free(entete2);
	for(i=0; i<nbreLigne; i++)
		free(tab[i]);
	free(tab);
	return new;
}


int * remplir_entete_2(AFD afd, int ** tab, int nbreCol, int nbreLigne, int * entete, int * entete2, int * cpt)
{
	int i, j, k, numCol;
	_Bool col_identique, trouve;
	*cpt=0;
	for(j=0; j<nbreCol; j++)
	{
		numCol=0;
		trouve=false;
		for(k=0; k<j; k++)
		{
			col_identique=true;
			if(entete[j]!=entete[k])
				col_identique=false;
			for(i=0; i<nbreLigne; i++)
			{
				if(tab[i][j]!=tab[i][k])
					col_identique=false;
			}
			trouve=trouve||col_identique;//on retient si on a trouve une colonne
			
			if(col_identique)//on a trouve une colonne identique, donc son entete est la meme.
			{
				numCol=entete2[k];
				break;
			}
		}
		if(!trouve)//on a pas trouve de colonnes identiques, donc on rajoute un numero de plus.
		{
			numCol=(*cpt);
			(*cpt)+=1;
		}
		entete2[j]=numCol;
	}
	
	return entete2;
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
		printf("\tetats = { ");
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
		printf("\ttransitions = { ");	
		if((AF[i]).tailleTrans > 0){
			for(j=0; j<(AF[i]).tailleTrans-1; j++)
			{
				printf("(%d, %c, %d), ", ((AF[i]).transitions[j]).depart,  ((AF[i]).transitions[j]).caractere,  ((AF[i]).transitions[j]).arrivee);
			}
			printf("(%d, %c, %d) }\n", ((AF[i]).transitions[(AF[i]).tailleTrans-1]).depart,  ((AF[i]).transitions[(AF[i]).tailleTrans-1]).caractere,  ((AF[i]).transitions[(AF[i]).tailleTrans-1]).arrivee);
		}
		else
			printf("}\n");
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
		printf("\tetats = { ");
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
		if((AF[i]).transitions != NULL){
			printf("\ttransitions = \n\t\t\t");	
			
			for(k=0; k<(AF[i]).tailleAlpha;k++)
				printf("%c\t", (AF[i]).alphabet[k]);
			printf("\n");
		

			for(j=0; j<(AF[i]).tailleEtats; j++)
			{
				printf("\t\t%d\t", (AF[i]).etats[j]);
				for(k=0; k<(AF[i]).tailleAlpha;k++)
				{
					//printf("%d\t",(AF[i]).transitions[(AF[i]).etats[j]][(AF[i]).alphabet[k]]);
					printf("%d\t",(AF[i]).transitions[(AF[i]).etats[j]][k]);
				}
				printf("\n");
			}
		}
		else
			printf("\ttransitions = il n y en a pas\n");
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
		printf("Quel AF choisir?\n");
		scanf(" %d",&ind);
	}while (ind<0 || ind >= taille);
	return ind;
}
