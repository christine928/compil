
#include "projet.h"



//mot=ajoutAfN, vide=initAFN (mot et langage)
int main()
{
	
	AFN * tabAFN=malloc(0*sizeof(AFN));
	//AFD * tabAFD=malloc(0*sizeof(AFD));
	int tailleTabAFN=0, tailleTabAFD=0, i;
	_Bool quitter=false;
	int rep;
	char car, chaine[100];
	int ind1, ind2;
	_Bool existe;
	
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
	_Bool retour=true, existe=false, accepteur=false;
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
			

		depart=afd.transitions[depart][j];

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
	int i=0, j=0, k=0, l=0, taille=1, length=0, init=0, m=0, nbTrans=0, identique=0;
	_Bool NDet=false, stop=false, etatAcc=false, trans=false; //NDet <=> Non Déterministe
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
		tabNewEtats[0] = malloc(2*sizeof(int));//première case du tableau est le nombre d'états q'uil contient <=> sa taille
		tabNewEtats[0][0] = 1; //initialement on regarde pour l'état 0 seul donc taille de 1
		tabNewEtats[0][1] = 0;
		afd.etats[0] = 0;//l'état initial
		tabNewEtats[1] = malloc(2*sizeof(int));
		i = 1;
		do{
			afd.transitions = realloc(afd.transitions, (nbTrans+1)*sizeof(int*));
			afd.transitions[afd.etats[init]] = realloc(afd.transitions[afd.etats[init]], afd.tailleAlpha*sizeof(int));
			for(j=0;j<afd.tailleAlpha;j++){//on regarde le caractère j
				for(length=0;length<tabNewEtats[init][0];length++){//on regarde état par état (les états composants le nouvel état de l'afd)
					for(k=0;k<afn.tailleTrans;k++){ //si une transistion j existe alors on écrit l'Etat d'arrivé (de l'afn) à la suite du nouvel Etat en cours de création
						if((afn.transitions[k].depart == tabNewEtats[init][length]) && (afn.transitions[k].caractere == afd.alphabet[j])){
							l++;
							taille++;
							tabNewEtats[i] = realloc(tabNewEtats[i], (l+1)*sizeof(int));
							tabNewEtats[i][l] = afn.transitions[k].arrivee;
							trans = true;
							for(m=0;m<afn.tailleAccept;m++){
								if(afn.etatAccept[m] == tabNewEtats[i][l])//si au moins un état composant le nouvel état était accepteur alors le nouvel état est accepteur
									etatAcc = true;
							}
						}
					}
				}
				//si on a créé un nouvel état
				if(trans){
					tabNewEtats[i][0] = taille;
					l = 0;
					identique = contientTab(tabNewEtats, tabNewEtats[i],i);
					if(identique == -1){//si le couple n'existait pas déjà
						//création d'un nouvel état
						afd.etats = realloc(afd.etats, (afd.tailleEtats+1)*sizeof(int));
						afd.etats[afd.tailleEtats] = i;
											
						//création nouvelle transition de l'état init vers l'état i via le caractère j
						afd.transitions[afd.etats[init]][afd.alphabet[j]] = afd.etats[afd.tailleEtats];
						
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
						afd.transitions[afd.etats[init]][afd.alphabet[j]] = identique;
						free(tabNewEtats[i]);
					}
							
					tabNewEtats = realloc(tabNewEtats, (i+1)*sizeof(int*));
					tabNewEtats[i] = malloc(2*sizeof(int));
				}
			
			//si on aucun nouvel état est créé pour une transsition avec le caractère j
			else
				afd.transitions[afd.etats[init]][afd.alphabet[j]] = -1;
			
				
			if(init == i)//il n'y a pas de nouveau couple et on a déjà testé tous les couples trouvés
				stop = true;
			
			
			nbTrans ++;//nombre de transistions actuellement créées	
			}
			init ++;
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
				for(k=0;k<afn.tailleTrans;k++){
					if((afn.transitions[k].depart == i) && afn.transitions[k].caractere == afd.alphabet[j])
						afd.transitions[i][afd.alphabet[j]] = afn.transitions[k].arrivee;
				}
				if(!afd.transitions[i][afd.alphabet[j]])
					afd.transitions[i][afd.alphabet[j]] = -1;
			}
		}
	}
	
	return afd;	
}

int contientTab(int **bigTab, int *tab, int taille)
{
	int i,j;
	_Bool contient = false;
	for(i=0;i<taille;i++){
		if(bigTab[i][0] == tab[0]){//si les tableaux sont de même taille on les compare
			contient = true;
			for(j=1;j<tab[0];j++){
				if(bigTab[i][j] != tab[j])
					contient = false;
			}
			if(contient)
				break;
		}
		return i;
	}
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
	
	for(j=0;  j<nbreCol-1; j++)//on remplit la premiere ligne
	{
		tab[0][j]=0;
		for(k=0; k<afd.tailleAccept; k++)
		{
			if(j==afd.etatAccept[k])//l etat est accepteur
			{
				entete[j]=1;
				break;
			}
		}
	}
	for(i=0; i<nbreLigne; i++) //on remplit le reste du tableau
	{
		for(j=0; j<nbreCol-1;j++)
			tab[i][j]=entete[afd.transitions[j][i]];
	}
	
	/*printf("\t");
	for(j=0; j<nbreCol; j++)
		printf("%d\t", j);	
	printf("\n");
	for(j=0; j<nbreCol; j++)
		printf("\t%d", entete[j]);
	for(i=0; i<nbreLigne; i++)
	{
		
		printf("\n%c\t", afd.alphabet[i]);
		for(j=0; j<nbreCol; j++)
			printf("%d\t", tab[i][j]);
	}
	printf("\n");*/
	
	//deuxieme entete
	entete2=remplir_entete_2(afd, tab, nbreCol, nbreLigne, entete, entete2, &cpt);
	arret=true;
	//verification des deux entetes : 
	for(j=0; j<nbreCol; j++)
	{
		arret=arret&&(entete[j]==entete2[j]);//si on trouve une entete de fausse alors on continue
		entete[j]=entete2[j];
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
		
		/*//affichage : 
		printf("\n\t");
		for(j=0; j<nbreCol; j++)
			printf("%d\t", j);
		printf("\n\t");
		for(j=0; j<nbreCol; j++)
			printf("%d\t", entete[j]);
		for(i=0; i<nbreLigne; i++)
		{
			
			printf("\n%c\t", afd.alphabet[i]);
			for(j=0; j<nbreCol; j++)
				printf("%d\t", tab[i][j]);
		}
		printf("\n");*/
		
		//verification des deux entetes : 
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
	new.etatAccept=calloc(new.tailleAccept, sizeof(char));
	for(i=0; i<new.tailleAccept; i++)
	{
		existe=false;
		for(j=0; j<i; j++)
		{
			printf("i=%d, j=%d, new[j]=%d, entete[zfd[i]]=%d\n", i, j, new.etatAccept[j], entete[afd.etatAccept[i]]);
			if(new.etatAccept[j]==entete[afd.etatAccept[i]])//on l a deja mis comme etat accepteur
			{
				existe=true;
				printf("on met %d\n", entete[afd.etatAccept[i]]);
			}
			if(existe)
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
				new.transitions[cpt_col][j]=tab[j][i];
			}
			cpt_col++;
		}
	}
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
			
			if(col_identique)
			{
				numCol=entete2[k];
				break;
			}
		}
		if(!trouve)
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
		printf("\ttransitions = { ");	
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
					printf("%d\t",(AF[i]).transitions[j][k]);

				}
				printf("\n");
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
