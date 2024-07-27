#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

#define RED     4
#define GREEN   2
#define BLUE    1
#define WHITE   7




void setBackgroundColor(char color)
{
    char command[10];
    snprintf(command, sizeof(command), "color %c7", color);
    system(command);
}

struct date
	{
		int jours;
		int mois;
		int annee;	
	};
struct etudiant
	{
		int nu;
		char nomF[10];
		int age;
		struct date naissance;
		float *notes;
		int nbnotes;	
	};
	
void menu ()
	{
		setBackgroundColor('8'); // couleur grise
		printf("\n\n\t///////////////////////////////////////////////////////////\t\n");
		printf("\t///\t\t\t\t\t\t\t///\n\t///\tMENU:\t\t\t\t\t\t///\n\t///\t\t1_Gestion d'etudiant:\t\t\t///\n\t///\t\t2_Fichiers:\t\t\t\t///\n\t///\t\t0_Quitter: \t\t\t\t///\n\t///\t\t\t\t\t\t\t///\n\t///\t\t\t\t\t\t\t///\t\t\n\t///\t\t\t\t\t\t\t///\n\t///\t\t\t\t\t\t\t///\n\t///\t\t\t\t\t\t\t///\n\t///\t\t\t\t\t\t\t///\n\t///////");
		printf("///////////////////////////////////////////////////");
		printf("\n\n\t==> Choisire votre choix: ");
		
	}
void menu2 ()
	{
		setBackgroundColor('8'); 
		printf("\n\n\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\t\n");
		printf("\txxx\t\t\t\t\t\t\txxx\n\txxx\tGestion d'etudiant:\t\t\t\txxx\n\txxx\t\t1_Ajouter un etudiant: \t\t\txxx\n\txxx\t\t2_Lister les donner des etudiants: \txxx\n\txxx\t\t3_Modifier un etudiant: \t\txxx\n\txxx\t\t4_Supprimer un etudiant: \t\txxx\n\txxx\t\t5_Gestion des notes\t\t\txxx\t\t\n\txxx\t\t0_Retour\t\t\t\txxx\n\txxx\t\t\t\t\t\t\txxx\n\txxx\t\t\t\t\t\t\txxx\n\txxx\t\t\t\t\t\t\txxx\n\txxxxxxx");
		printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
		printf("\n\n\t==> Choisire votre choix: ");
		//printf("Gestion d'etudiant:\n1_Ajouter un etudiant: \n2_Lister les donner des etudiants: \n3_Modifier un etudiant: \n4_Supprimer un etudiant: \n\nSaisire Votre Choix");
	
	}
void menuGN()
	{
		setBackgroundColor('5'); // couleur magenta
		printf("\n\n\t***********************************************************\t\n");
		printf("\t***\t\t\t\t\t\t\t***\n\t***\tGestion des Notes:\t\t\t\t***\n\t***\t\t1_Ajouter une note: \t\t\t***\n\t***\t\t2_Modifier une note: \t\t\t***\n\t***\t\t3_Supprimer une note: \t\t\t***\n\t***\t\t0_Retour: \t\t\t\t***\n\t***\t\t\t\t\t\t\t***\t\t\n\t***\t\t\t\t\t\t\t***\n\t***\t\t\t\t\t\t\t***\n\t***\t\t\t\t\t\t\t***\n\t***\t\t\t\t\t\t\t***\n\t*******");
		printf("****************************************************");
		printf("\n\n\t==> Choisire votre choix: ");
	
	}
void menuF()
	{
		setBackgroundColor('0'); // couleur noir
		printf("\n\n\t***********************************************************\t\n");
	    printf("\t***\t\t\t\t\t\t\t***\n\t***\tFichiers:\t\t\t\t\t***\n\t***\t\t1_Sauvegarder au format texte: \t\t***\n\t***\t\t2_Charger depuis le format texte: \t***\n\t***\t\t3_Sauvegarder au format binaire: \t***\n\t***\t\t4_Charger depuis le format binaire: \t***\n\t***\t\t0_Retour: \t\t\t\t***\n\t***\t\t\t\t\t\t\t***\t\t\n\t***\t\t\t\t\t\t\t***\n\t*******");
	    printf("****************************************************");
	    printf("\n\n\t==> Choisissez votre option: ");
	    
	}
//===========================================> Menu Gestion Des Etudiants<====================================================
void ajouterEtudiant(struct etudiant *&t, int &nbE)
	{
		int i = 1;
		if(t == NULL)
			{
				t = (etudiant*)malloc(sizeof(etudiant));
			} else {
				t = (etudiant*)realloc(t, (nbE + 1) * sizeof(etudiant));
			}
						printf("\n\t\t");
						printf("(%d) veuillez donner le numero unique: ",i);
						scanf("%d",&t[nbE].nu);
						printf("\n\t\t");
						printf("(%d) veuillez donner le nom de famille: ",i + 1);
						scanf("%s",&t[nbE].nomF);
						printf("\n\t\t");
						printf("(%d) veuillez donner l'age d'etudiant: ",i + 2);
						scanf("%d",&t[nbE].age);
						printf("\n\t\t");
						printf("(%d) veuillez donner sa notes: ",i + 3);
						float note;
    					scanf("%f", &note);

    					t[nbE].notes = (float *)malloc(sizeof(float)); 
    					t[nbE].notes[0] = note;                        
    					t[nbE].nbnotes = 1;  
						printf("\n\t\t");
						printf("(%d) veuillez donner le jours de votre date de naissance: ",i + 4);
						scanf("%d",&t[nbE].naissance.jours);
						printf("\n\t\t");
						printf("(%d) veuillez donner le mois de votre date de naissance: ",i + 5);
						scanf("%d",&t[nbE].naissance.mois);
						printf("\n\t\t");
						printf("(%d) veuillez donner l'annee de votre date de naissance: ",i + 6);
						scanf("%d",&t[nbE].naissance.annee);
						nbE++;
						system("cls");
	}
int rechercherEtudiant(struct etudiant *&t, int nbE, int nu2)
	{
		int i;
		printf("\n\t\t");
		printf("+ veuillez donner le numero unique: ");
		scanf("%d",&nu2);
		for (i = 0; i < nbE; i++)
			{
				if(nu2 == t[i].nu)
					{
						return i;
					} 
			}
		return -1;
	}
void modifierEtudiant(struct etudiant *&t, int nbE)
	{
		int i;
		int nu2;
		int fonc;
		fonc = rechercherEtudiant(t, nbE, nu2);
		if (fonc == -1)
			{
				printf("\n\t\t");
				printf("etudiant non trouve !");
				getch();
				system("cls");
			} else {
						printf("\n\t\t\t");
						printf("==> veuillez donner le nouveau numero unique: ");
						scanf("%d",&t[i].nu);
						printf("\n\t\t\t");
						printf("==> veuillez donner le nouveau nom de famille: ");
						scanf("%s",&t[i].nomF);
						printf("\n\t\t\t");
						printf("==> veuillez donner le nouveau age d'etudiant: ");
						scanf("%d",&t[i].age);
						printf("\n\t\t\t");
						printf("==> veuillez donner la nouvelle sa notes: ");
						float note;
    					scanf("%f", &note);

    					t[i].notes = (float *)malloc(sizeof(float)); 
    					t[i].notes[0] = note;                        
    					t[i].nbnotes = 1; 
						printf("\n\t\t\t");
						printf(" ==> veuillez donner le nouveau jours de votre date de naissance: ");
						scanf("%d",&t[i].naissance.jours);
						printf("\n\t\t\t");
						printf("==> veuillez donner le nouveau mois de votre date de naissance: ");
						scanf("%d",&t[i].naissance.mois);
						printf("\n\t\t\t");
						printf("==> veuillez donner la nouvelle annee de votre date de naissance: ");
						scanf("%d",&t[i].naissance.annee);
					}
			}
void supprimerEtudiant(struct etudiant *&t, int &nbE)
	{
		int i;
		int fonc2;
		int nu2;
		fonc2 = rechercherEtudiant(t, nbE, nu2);
	
			if (fonc2 == -1)
				{
					printf("\n\t\t");
					printf ("ce numero innexistant");
					getch();
					system("cls");
				} else {
					for (i = fonc2; i < 0; i--)
						{
							t[i + 1] = t[i];
						}
					printf("\n\t\t\t");
					printf ("==> l'etudiant a ete supprimer");
					getch();
					system("cls");
					nbE--;
				}
	}
void listerEtudiant(struct etudiant *&t, int nbE)
	{
    int i;
    if (nbE == 0)
    {
    	printf("\n\t\t");
        printf("Aucun etudiant a afficher !\n");
        getch();
        system("cls");
    }

    for (i = 0; i < nbE; i++)
    {
        printf("\n");
        printf("Etudiant (%d): ", i + 1);
        printf("\n");
        printf("\t\tID: %d\t\t||\tNom de Famille: %s\n\t\tAge: %d\t\t||\tNotes: ", t[i].nu, t[i].nomF, t[i].age);

        if (t[i].nbnotes > 0)
        {
            for (int j = 0; j < t[i].nbnotes; j++)
            {
                printf("%.2f ", t[i].notes[j]);
            }
        }
        else
        {
            printf("Aucune note disponible");
        }

        printf("\n\t\t \n\t\t\t + Date de naissance: %d / %d / %d\n", t[i].naissance.jours, t[i].naissance.mois, t[i].naissance.annee);
    }

    getch();
    system("cls");
}
//================================================> Menu Gestion des Notes <========================================================
void AjouterNote(struct etudiant *&t, int nbE)
	{
		int i;
		int fonc3;
		int nu2;
		if (t == NULL)
			{
				printf("\n\t\t");
				printf("impossible d'ajouter une note,\n\t\tveuillez verifier que vous avez ajouter un etudiant!");
				getch();
			} else {
			 	fonc3 = rechercherEtudiant(t, nbE, nu2);
				if (fonc3 == -1)
					{		
						printf("\n\t\t");
						printf("etudiant non trouve !");
						getch();
						system("cls");
					} else {
						float nvnotes;
						printf("\n\t\tveuillez ajouter la note a l'etudiant %s: ",t[fonc3].nomF);
						scanf("%f",&nvnotes);
						t[fonc3].notes = (float *)realloc(t[fonc3].notes, (t[fonc3].nbnotes + 1) * sizeof(float));
						
						if (t[fonc3].nbnotes == NULL)
							{	
								printf("Malheureusement vous ne pouvez pas ajouter une note, le tableau est initialement vide !");
							}
						t[fonc3].notes[t[fonc3].nbnotes] = nvnotes;
						t[fonc3].nbnotes++;
						
						printf("\n\t\tLa note a ete ajoutee avec succes !");
        				getch();
        				system("cls");
				}
			}
	}
void modifierNotes(struct etudiant *&t, int nbE) 
	{
	    int nu2;
	    int fonc4;
	    fonc4 = rechercherEtudiant(t, nbE, nu2);
	    if (fonc4 == -1) 
			{
	        	printf("cet ID ne correspond a aucun etudiant !");
	    	} else {
	        	printf("\n\t\tveuillez donner l'indice de la note a modifier (0 a %d): ", t[fonc4].nbnotes - 1);
	        int position;
	        scanf("%d", &position);
	        if (position < 0 || position >= t[fonc4].nbnotes) 
				{
	            	printf("Indice de note invalide !");
	        	} else {
	        		printf("\n\t\t");
	            	printf("donnez la nouvelle note: ");
	            	float newNote;
	            	scanf("%f", &newNote);
	            	t[fonc4].notes[position] = newNote;
	            	printf("\n\t\t");
	            	printf("La note a ete modifiee avec succes !");
	        }
	    }
	    getch();
	    system("cls");
}
void supprimerNote(struct etudiant *&t, int nbE)
	{
		int nu2;
		int i;
	    int fonc5;
		fonc5 = rechercherEtudiant(t, nbE, nu2);
	    if (fonc5 == -1) 
			{
	        	printf("cet ID ne correspond a aucun etudiant !");
	    	} else {
	        	printf("\n\t\tveuillez donner l'indice de la note a modifier (0 a %d): ", t[fonc5].nbnotes - 1);
	        int position;
	        scanf("%d", &position);
	        if (position < 0 || position >= t[fonc5].nbnotes) 
				{
	            	printf("Indice de note invalide !");
	        	} else {
	        		printf("\n\t\t");
	            	for (i = fonc5; i < 0; i--)
	            		{
	            			t[i + 1] = t[i];
						}
					printf ("la note a ete supprimer");
					t[i].nbnotes--;
	        }
	    }
	    getch();
	    system("cls");
	}
//===================================================> gestion de fichier <==================================================================
void saveText(struct etudiant *&t, int nbE, char *fileName)
	{
		FILE *file;
    	file = fopen(fileName, "w");
    	if (file == NULL) 
			{
        		printf("Erreur d'ouverture du fichier !\n");
    		}

    	for (int i = 0; i < nbE; i++) 
			{
		        fprintf(file, "\nEtudiant (%d): ", i + 1);
		        fprintf(file, "\n\t\tID: %d\t\t||\tNom de Famille: %s\n\t\tAge: %d\t\t||\tNotes: ", t[i].nu, t[i].nomF, t[i].age);

        	for (int j = 0; j < t[i].nbnotes; j++) 
				{
            		fprintf(file, "%.2f ", t[i].notes[j]);
        		}

        		fprintf(file, "\n\t\t \n\t\t\t + Date de naissance: %d / %d / %d\n", t[i].naissance.jours, t[i].naissance.mois, t[i].naissance.annee);
    		}

		fclose(file);
    	printf("\n\t\t");
    	printf("Donnees sauvegardees au format texte.");
    	getch();
    	system("cls");
	}
void loadText(struct etudiant *&t, int &nbE, char *fileName)
	{
	    FILE *file;
	    file = fopen(fileName, "r");
    	if (file == NULL)
		    {
		        printf("Erreur d'ouverture du fichier !\n");
		    }

    	nbE = 0;
    	while (!feof(file))
    		{
        		t = (etudiant *)realloc(t, (nbE + 1) * sizeof(etudiant));

        		fscanf(file, "\nEtudiant (%*d): ");
        		fscanf(file, "\n\t\tID: %d\t\t||\tNom de Famille: %s\n\t\tAge: %d\t\t||\tNotes: ", &t[nbE].nu, t[nbE].nomF, &t[nbE].age);

        		t[nbE].notes = NULL;
        		t[nbE].nbnotes = 0;
		        char line[100];
		        fgets(line, 100, file);
		        char *note = strtok(line, " ");
		        while (note != NULL)
        	{
	            t[nbE].notes = (float *)realloc(t[nbE].notes, (t[nbE].nbnotes + 1) * sizeof(float));
	            t[nbE].notes[t[nbE].nbnotes] = atof(note); 
	            t[nbE].nbnotes++;
	            note = strtok(NULL, " ");
        	}

        fscanf(file, "\n\t\t \n\t\t\t + Date de naissance: %d / %d / %d\n", &t[nbE].naissance.jours, &t[nbE].naissance.mois, &t[nbE].naissance.annee);
        nbE++;
    		}
    	fclose(file);
    	printf("\n\t\t");
    	printf("Donnees chargees depuis le format texte.\n");
    	getch();
    	system("cls");
	}
void sauvegarderEtudiantsBinaire(struct etudiant *t, int nbE) {
    FILE *file = fopen("etudiants.bin", "wb");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier de sauvegarde !\n");
    }
    fwrite(&nbE, sizeof(int), 1, file);
    for (int i = 0; i < nbE; i++) {
        fwrite(&t[i].nu, sizeof(int), 1, file);
        fwrite(t[i].nomF, sizeof(char), 10, file);
        fwrite(&t[i].age, sizeof(int), 1, file);
        fwrite(&t[i].naissance, sizeof(struct date), 1, file);
        fwrite(&t[i].nbnotes, sizeof(int), 1, file);
        fwrite(t[i].notes, sizeof(float), t[i].nbnotes, file);
    }
    fclose(file);
    printf("\n\t\t");
    printf("Donnees sauvegardees dans etudiants.bin\n");
    getch();
    system("cls");
}

void chargerEtudiantsBinaire(struct etudiant **t, int *nbE) {
    FILE *file = fopen("etudiants.bin", "rb");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier de chargement !\n");
    }
    fread(nbE, sizeof(int), 1, file);
    *t = (struct etudiant*)malloc((*nbE) * sizeof(struct etudiant));
    for (int i = 0; i < *nbE; i++) {
        fread(&((*t)[i].nu), sizeof(int), 1, file);
        fread((*t)[i].nomF, sizeof(char), 10, file);
        fread(&((*t)[i].age), sizeof(int), 1, file);
        fread(&((*t)[i].naissance), sizeof(struct date), 1, file);
        fread(&((*t)[i].nbnotes), sizeof(int), 1, file);
        (*t)[i].notes = (float *)malloc((*t)[i].nbnotes * sizeof(float));
        fread((*t)[i].notes, sizeof(float), (*t)[i].nbnotes, file);
    }
    fclose(file);
    printf("\n\t\t");
    printf("Donnees chargees depuis etudiants.bin\n");
    getch();
    system("cls");
}
int main ()
	{
		int nbE = 0;
		char *fileName = "save.txt";
		int choix,choix2, choix3, choix4;
		etudiant *t = NULL;
	  	do {
	  			menu ();
	  			scanf("%d",&choix);
	  			switch (choix)
	  				{
	  					case 0 : 
	  						system("cls");
	  						break;
	  					case 1 :
						  do{
						  	system("cls");
							  menu2();
		  						scanf("%d",&choix2);
		  						switch (choix2)
				  					{
				  						case 0 :
				  							system("cls");
				  							break;
					  					case 1 : ajouterEtudiant(t, nbE);
					  						break;
							  			case 2 : listerEtudiant(t, nbE);
							  				break;
							  			case 3 : modifierEtudiant(t, nbE);
							  				break;
							  			case 4 : supprimerEtudiant(t, nbE);
							  				break;
							  			case 5 :
										  		do{
						  							system("cls");
							  						menuGN();
		  											scanf("%d",&choix2);
		  											switch (choix2)
				  										{
				  											case 0 :
				  											system("cls");
				  												break;
					  										case 1 : AjouterNote(t, nbE);
					  											break;
							  								case 2 : modifierNotes(t, nbE);
							  									break;
							  								case 3 : supprimerNote(t, nbE);
							  									break;
							  			
							  								default: 
												  				printf("\n\t\t");
												  				printf("choix non valide!");
												  				getch();
												  				system("cls");
												  				break;
												  		}
													} while (choix3 != 0);
													break;
												  	
									} 
											 	
							} while (choix2 != 0);
	  						break;
	  					case 2 : 
						  do{
						  		system("cls");
							  	menuF();
		  						scanf("%d",&choix2);
		  						switch (choix2)
				  					{
				  						case 0 :
				  						system("cls");
				  							break;
					  					case 1 : saveText(t, nbE, fileName);
					  						break;
							  			case 2 : loadText(t, nbE, fileName);
							  				break;
							  			case 3 : sauvegarderEtudiantsBinaire(t, nbE);
							  				break;
							  			case 4 : chargerEtudiantsBinaire(&t, &nbE);
							  				break;
							  			
							  			default: 
											printf("\n\t\t");
											printf("choix non valide!");
											getch();
											system("cls");
												break;
									}
							}while (choix3 != 0);
									break;
	  					default :
	  						printf("\n\t\t");
	  						printf("choix non valide!");
	  						getch();
	  						system("cls");
	  						break;
	  				}
					  			
		   } while (choix != 0);
		   free(t);
		   return 0;
	}
