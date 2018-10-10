/*by        A y o u b l a c h h a b
Temps De réalisation : Présque 20 jours 
cours de programtation c */ 


#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
void Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}

char * Accent(const char * mess) {
      static char retour [80];
      CharToOem (mess,retour); // API Windows
      return retour;
   }
int  menu_p()
{
	printf("               *********************************************\n");
	printf("               **        Introduction au Langague  C      **\n");
	printf("               *********************************************\n");
    printf("               ** 1. Variable                             **\n");
    printf("               ** 2. Structures  Conditionnelles          **\n");
    printf("               ** 3. Structure  repetetives               **\n");
    printf("               ** 4. Fonction                             **\n");
    printf("               ** 5. Tableaux                             **\n");
    printf("               ** 6. Pointeur                             **\n");
    printf("               ** 7. Structures de donnees                **\n");
    printf("               ** 0. Quitter                              **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
	printf("\n");
	printf("               Choiser Une Option SVP :   ");	
	
}

main()
{

printf("\n\n");
printf("%s",Accent("             Bienvenu sur le tutorat de la programmation c    \n"));
printf("\n");	
printf("%s",Accent("  SVP Choisi Votre Couleur de l'ecriture Prefere et la couleur de fond Prefere:    \n"));
printf("\n");
printf("                                  0 : Noir\n");
printf("%s",Accent("                                  1 : Bleu foncé\n"));
printf("%s",Accent("                                  2 : Vert foncé\n"));
printf("                                  3 : Turquoise\n");
printf("                                  4 : Rouge fonce\n");
printf("                                  5 : Violet\n");
printf("                                  6 : Vert caca d'oie\n");
printf("                                  7 : Gris clair\n");
printf("%s",Accent("                                  8 : Gris foncé\n"));
printf("                                  9 : Bleu fluo\n");
printf("                                  10 : Vert fluo\n");
printf("                                  11 : Turquoise\n");
printf("                                  12 : Rouge fluo\n");
printf("                                  13 : Violet 2\n");
printf("                                  14 : Jaune\n");
printf("                                  15 : blanc \n");
printf("\n");
int x;
int y;
printf("%s",Accent("Votre choix de colleur de l'ecriture Prefere:    \n"));
scanf("%d",&x);	
printf("%s",Accent("Votre choix de colleur du fond Prefere:    \n"));
scanf("%d",&y);	
	Color(x,y);
system("cls");
	int choix;
           menu_p();
           
	scanf("%d",&choix);
	if(choix>=0 && choix<=7)
	{
	while(choix!=0)
	
	{
	
		switch(choix)
		{
			
			case 1 : {
				
				
				system("cls");
	printf("               *********************************************\n");
	printf("               **                   Variable              **\n");
	printf("               *********************************************\n");
	printf ("%s",Accent("               ** 1. Type De Donnees                      **\n"));
	printf ("%s",Accent("               ** 2. Operateurs Arithmetique              **\n"));
	printf ("%s",Accent("               ** 3. Pririorites Des Operateurs           **\n"));              
    printf("               ** 0. Menu Principale                      **\n");
    printf("               *********************************************\n");
     int c1;
    printf("               Choiser Une Option SVP :   ");
   
    scanf("%d",&c1);
    if(c1<=4&&c1>=0)
    {
    	switch(c1)
    	{
    	
    		case 0 :{
    		             system("cls");
    		             menu_p();
    		             scanf("%d",&choix);
    			break;
    		}
    		case 1 : {
    			system("cls");
    			printf("\n\n");
    			printf ("%s\n",Accent("             Les types de donnees :   \n\n"));
    			printf("Les donnees manipulees en langage C sont typees, c'est-a-dire  \n ");
    			printf("\n");
    			printf ("%s\n",Accent(" que pour chaque donnee que l'on utilise (dans les variables par exemple)\n"));
    			printf("\n");
    			printf ("%s\n",Accent("il faut preciser le type de donnee \n"));
				printf("\n");
 				printf("ce qui permet de connaitre l'occupation memoire");
				printf("\n");
				printf("(le nombre d'octets) de la donnee ainsi que sa representation :\n\n");
    			printf("des nombres : entiers (int) ou reels, c'est-a-dire a virgules (float)\n\n");
    			printf("des pointeurs (pointer) : permettent de stocker l'adresse d'une autre donnee,\n ");
    			printf("ils  pointent  vers une autre donnee");
    			printf("\n\n");
    			printf("les types : \n1_int\n2_float\n3_char\n4_double ........\n");
    			printf("\n\n");
    			printf("************************************************************\n");
	     printf ("%s",Accent("**                   Type De Donnees                      **\n"));
	     printf("************************************************************\n");
	     printf("**                      Variable                          **\n");
	     printf("************************************************************\n");
	     printf("1.Menu  principal            2.Menu precedent                       0.quitter");
    			
    		printf("\n\n");
    			int n;
    			scanf("%d",&n);
    			switch(n)
    			{
    				case 0 :{
    					 return 0;
    					
    				
    				}
    				case 1 :{
    						system("cls");
    						
    					menu_p();
    						// choix=getchar();
    						
    						 scanf("%d",&choix);
    					break;
    				}
    				case 2 :{
    					
    								system("cls");
	printf("               *********************************************\n");
	printf("               **                   Variable              **\n");
	printf("               *********************************************\n");
    printf ("%s",Accent("               ** 1. Type De Donnees                      **\n"));
    printf ("%s",Accent("               ** 2. Operateurs Arithmetique              **\n"));
	printf ("%s",Accent("               ** 3. Pririorites Des Operateurs           **\n"));  
    printf("               ** 4. Menu Principale                      **\n");
    printf("               *********************************************\n");
     int c1;
    printf("               Choiser Une Option SVP :   ");
   
   scanf("%d",&c1);
    					break;
    				}
    			}
    			
    			
    
    			break;
    		}
    		case 2:{
    			system("cls");
    			printf("\n\n\n");
    			 printf ("%s",Accent("Qu'est-ce qu'un operateur ?\n\n"));
    			 printf ("%s",Accent("Les operateurs sont des symboles qui permettent de manipuler des variables\nc'est-a-dire effectuer des operations, les evaluer, etc\n"));
    			 printf ("%s",Accent("On distingue plusieurs types d'operateurs : \n"));
    			 printf ("%s",Accent("\n"));
    			 printf ("%s",Accent("1_les operateurs de calcul\n2_les operateurs d'assignation\n3_les operateurs d'incrementation\n4_les operateurs de comparaison\n"));
    			 printf ("%s",Accent("\n\n"));
    			 printf ("%s",Accent("1_les operateurs de calcul :\n"));
    			 printf ("%s",Accent("Les operateurs de calcul permettent de modifier mathematiquement la valeur \nd'une variable.\n\n"));
    			 printf ("%s",Accent("exemple(+ , - , / , * , %)"));
    			 printf ("%s",Accent("\n\n"));
    			 printf ("%s",Accent("1_Les operateurs d'assignation :\n\n"));
    			 printf ("%s",Accent("Ces operateurs permettent de simplifier des operations \ntelles que ajouter une valeur dans une variable \net stocker le resultat dans la variable \n\n"));
    			 printf ("%s",Accent("exemple(x+=2) \n\n"));
    			 printf ("%s",Accent("+=    ,     -=     , *=   \n\n%=    /="));
    			 printf ("%s",Accent("\n\n3_les operateurs d'incrementation \n\n"));
    			 printf ("%s",Accent("Ce type d'operateur permet de facilement augmenter ou diminuer d'une unite une\nvariable. Ces operateurs sont très utiles pour des structures telles que des \nboucles, qui ont besoin d'un compteur (variable qui augmente de un en un)"));
    			 printf ("%s",Accent("\nUn operateur de type x++ permet de remplacer des notations lourdes telles que\nx=x+1 ou bien x+=1. \n\n++ : Incrementation\n--: Decrementation\n\n"));
    			 printf ("%s",Accent("4_les operateurs de comparaison\n\n"));
    			 printf ("%s",Accent("== :operateur de d'egalite \ncomparer 2 valeur et verifier leur egalite\n< : operateur d'inferiorite stricte \n<= operateur d'inferiorite\n> :operateur de superiorite stricte\n>=: operateur de superiorite\n!= :operateur de superiorite\n"));
    	 printf("************************************************************\n");
         printf ("%s",Accent("**                   Type De Donnees                      **\n"));
	     printf("************************************************************\n");
	     printf("**                      Variable                          **\n");
	     printf("************************************************************\n");
	     printf("1.Menu  principal            2.Menu precedent                       0.quitter");
    			
    		printf("\n\n");
    			int n;
    			scanf("%d",&n);
    			switch(n)
    			{
    				case 2 :{
    					
    					system("cls");
    					
	printf("               *********************************************\n");
	printf("               **                   Variable              **\n");
	printf("               *********************************************\n");
	printf ("%s",Accent("               ** 1. Type De Donnees                      **\n"));
	printf ("%s",Accent("               ** 2. Operateurs Arithmetique              **\n"));
	printf ("%s",Accent("               ** 3. Pririorites Des Operateurs           **\n"));              
    printf("               ** 0. Menu Principale                      **\n");
    printf("               *********************************************\n");
    scanf("%d",&c1);
    					break;
    				
    				}
    				case 1 :{
    						system("cls");
    						
    					menu_p();
    						
    					scanf("%d",&choix);
    					break;
    				}
    				case 0 : return 0;
    			}
    
				break;
    		}
    		case 3:{
    			system("cls");
    			printf("\n\n\n");
    			 printf ("%s",Accent("  Priorite des operations \n\n"));
    			 printf ("%s",Accent(" () pour l'appel de procedure \n "));
    			 printf ("%s",Accent("[]  pour l'indexation\n"));
    			 printf ("%s",Accent(" *  pour l'indirection \n"));
    			 printf ("%s",Accent(" .  pour la selection de champ\n"));
    			 printf ("%s",Accent(" -> pour l'indirection et selection\n"));
    			 printf ("%s",Accent(" &  pour delivrer l'adresse d'un objet\n"));
    	 printf("************************************************************\n");
         printf ("%s",Accent("**                   Type De Donnees                      **\n"));
	     printf("************************************************************\n");
	     printf("**                      Variable                          **\n");
	     printf("************************************************************\n");
	     printf("1.Menu  principal            2.Menu precedent                       0.quitter");
    			printf("\n\n");
    			int n;
    			scanf("%d",&n);
    			switch(n)
    			break;
    		}
    		case 4 :{
    			
    				system("cls");
    				
    				
    			
/*	printf("               *********************************************\n");
	printf("               **        Introduction au Langague  C      **\n");
	printf("               *********************************************\n");
    printf("               ** 1. Variable                             **\n");
    printf("               ** 2. Structures  Conditionnelles          **\n");
    printf("               ** 3. Structure  repetetives               **\n");
    printf("               ** 4. Fonction                             **\n");
    printf("               ** 5. Tableaux                             **\n");
    printf("               ** 6. Pointeur                             **\n");
    printf("               ** 7. Structures de donnees                **\n");
    printf("               ** 0. Quitter                              **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
	printf("\n");*/
	
	menu_p();
    	scanf("%d",&choix);
    	
    			break;
    		}

}

}
else printf("\nDesole Votre choix est incorect\n");
				break;
			}
			case 2 :{
				system("cls");
				
    printf("               *********************************************\n");
	printf("               **        Structures Conditionnelles       **\n");
	printf("               *********************************************\n");
    printf("               ** 1. Structures Conditionneles 'IF'       **\n");
    printf("               ** 2. Structures Conditionneles 'Switch'   **\n");
    printf("               ** 3. Menu Principale                      **\n");
    printf("               ** 0. Quitter                              **\n");
    printf("               **                                         **\n");
    printf("               *********************************************\n");
     printf("               Choiser Une Option SVP :   ");
				int c2;
	
    scanf("%d",&c2);
    if(c2>=0&& c2<=3)
    {
    	switch(c2)
    	{
    		case 0 : {
    			return 0; 
    			break;
    		}
    		case 1 :{
    			system("cls");
    			printf("\nL'instruction if ... else : \n\n");
    			printf("L'instruction if dans sa forme basique ne permet de tester\n qu'une condition, or la plupart du temps\n on aimerait pouvoir choisir les instructions\n à executer en cas de non realisation de la condition... ");
    			printf("L'expression if ... else permet d'executer une autre serie \nd'instructions en cas de non-realisation\n de la condition.\n\n");
    			printf("La syntaxe de cette expression est la suivante :\n\n");
    			printf("if (condition realisee) {\n");
    			printf(" liste d'instructions\n");
    			printf("}\n");
    			printf("else {\n");
    			printf("autre serie d'instructions\n");
    			printf("}");
    			printf("\n\n");
    			 printf("************************************************************\n");
	     printf ("%s",Accent("**                   Type De Donnees                      **\n"));
	     printf("************************************************************\n");
	     printf("**          Structures  Conditionnelles                   **\n");
	     printf("************************************************************\n");
	     printf("1.Menu  principal            2.Menu precedent                       0.quitter");
    			
    		printf("\n\n");
    			int n;
    			scanf("%d",&n);
    			switch(n)
    			{
    				case 2 :{
    					
    					system("cls");
    					
    printf("               *********************************************\n");
	printf("               **        Structures Conditionnelles       **\n");
	printf("               *********************************************\n");
    printf("               ** 1. Structures Conditionneles 'IF'       **\n");
    printf("               ** 2. Structures Conditionneles 'Switch'   **\n");
    printf("               ** 3. Menu Principale                      **\n");
    printf("               ** 0. Quitter                              **\n");
    printf("               **                                         **\n");
    printf("               *********************************************\n");
     printf("               Choiser Une Option SVP :   ");
    scanf("%d",&c2);
    					 
    					break;
    				
    				}
    				case 1 :{
    						system("cls");
    						
    					menu_p();
    						
    				scanf("%d",&choix);
    					break;
    				}
    				case 0 : return 0;
    			}
    			
    			
    			break;
    		}
    		case 2 :{
    			system("cls");
    			printf("\nL'instruction switch :\n\n");
    			printf("L'instruction switch permet de faire plusieurs tests \n");
    			printf("de valeurs sur le contenu d'une même variable. \n");
    			printf("Ce branchement conditionnel simplifie beaucoup\n le test de plusieurs valeurs \n");
    			printf("d'une variable, car cette operation aurait ete compliquee \n");
    			printf("(mais possible) avec des if imbriques. \nSa syntaxe est la suivante : \n");
    			printf("switch (Variable) {\n");
    			printf("case Valeur1 :");
    			printf("\n");
    			printf(" Liste d'instructions;");
    			printf("\n");
				printf("break;");
    			printf("\n");
				printf("case Valeur2 :");
    			printf("\n");
				printf("Liste d'instructions;");
    			printf("\n");
				printf("break;");
				printf("\n");
				printf("case Valeurs... :");
				printf("\n");
				printf("Liste d'instructions;");
				printf("\n");
				printf("break;");
				printf("\n");
				printf("default: ");
				printf("\n");
				printf("Liste d'instructions;");
				printf("\n");
				printf("}");
				printf("\n");
				printf("\n\n");
		 printf("************************************************************\n");
	     printf ("%s",Accent("**                   Type De Donnees                      **\n"));
	     printf("************************************************************\n");
	     printf("**          Structures  Conditionnelles                   **\n");
	     printf("************************************************************\n");
	     printf("1.Menu  principal            2.Menu precedent                       0.quitter");
    			
    		printf("\n\n");
    			int n;
    			scanf("%d",&n);
    			switch(n)
    			{
    				case 2 :{
    					
    					system("cls");
    					
    					menu_p();
    					
    					 scanf("%d",&choix);
    					break;
    				
    				}
    				case 1 :{
    						system("cls");
    						
    				 printf("               *********************************************\n");
	printf("               **        Structures Conditionnelles       **\n");
	printf("               *********************************************\n");
    printf("               ** 1. Structures Conditionneles 'IF'       **\n");
    printf("               ** 2. Structures Conditionneles 'Switch'   **\n");
    printf("               ** 3. Menu Principale                      **\n");
    printf("               ** 0. Quitter                              **\n");
    printf("               **                                         **\n");
    printf("               *********************************************\n");
     printf("               Choiser Une Option SVP :   ");
    						
    					scanf("%d",&choix);
    					break;
    				}
    				case 0 : return 0;
    			}
				break;
				
    		}
    		case 3 : {
    				system("cls");
   /* printf("               *********************************************\n");
	printf("               **        Introduction au Langague  C      **\n");
	printf("               *********************************************\n");
    printf("               ** 1. Variable                             **\n");
    printf("               ** 2. Structures  Conditionnelles          **\n");
    printf("               ** 3. Structure  repetetives               **\n");
    printf("               ** 4. Fonction                             **\n");
    printf("               ** 5. Tableaux                             **\n");
    printf("               ** 6. Pointeur                             **\n");
    printf("               ** 7. Structures de donnees                **\n");
    printf("               ** 0. Quitter                              **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
	printf("\n");*/
	
	menu_p();
    	scanf("%d",&choix);
				break;
    		}
    	}
    }
				
				break;
			}
			case 4 :{
					system("cls");
    printf("               *********************************************\n");
	printf("               **                   Fonction              **\n");
	printf("               *********************************************\n");
	printf ("%s",Accent("               ** 1. Definition d'une fonction            **\n"));
    printf("               ** 2. Retour d'une fonction                **\n");
    printf ("%s",Accent("               ** 3. Passage des parametres               **\n"));
    printf("               ** 4. Appel d'une foncion                  **\n");
    printf("               ** 5. Menu principal                       **\n");
    printf("               ** 0.Quitter                               **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
					
					int c3;
				
				 printf("               Choiser Une Option SVP :   ");
    
               scanf("%d",&c3);
               if(c3>=0&&c3<=5)
               {
               	switch(c3)
               	{
               		case 0:{
               			return 0;
               			break;
               		}
               		case 1:{
               			system("cls");
               			printf("\n\nDefinition d'une fonction ");
               			printf("\n");

                         
                         printf("On appelle fonction un sous-programme qui permet d'effectuer");
                         printf("\n");
                         printf("un ensemble d'instructions par simple appel ");
                         printf("\n");
                         printf("de la fonction dans le corps du programme principal.");
                         printf("\n");
                         printf ("%s",Accent("Les fonctions permettent d'executer dans plusieurs parties"));
                         printf("\n");
                         printf ("%s",Accent("du programme une serie d'instructions,cela permet une simplicite"));
                         printf("\n");
                         printf("du code et donc une taille de programme minimale.");
                         printf("\n");
                         printf ("%s",Accent("D'autre part, une fonction peut faire appel à elle-même, "));
                         printf("\n");
                         printf ("%s",Accent("on parle alors de fonction recursive (il ne faut pas)"));
                         printf("\n");
                         printf("oublier de mettre une condition de sortie au risque");
                         printf("\n");
                         printf ("%s",Accent("sinon de ne pas pouvoir arrêter le programme...)"));
                         printf("\n");
                         
		 printf("************************************************************\n");
	     printf ("%s",Accent("**                   Type De Donnees                      **\n"));
	     printf("************************************************************\n");
	     printf("**                       Fonction                         **\n");
	     printf("************************************************************\n");
	     printf("1.Menu  principal            2.Menu precedent                       0.quitter");
    			
    		printf("\n\n");
    			int n;
    			scanf("%d",&n);
    			switch(n)
    			{
    				case 2 :{
    					
    					system("cls");
    					
    printf("               *********************************************\n");
	printf("               **                   Fonction              **\n");
	printf("               *********************************************\n");
    printf ("%s",Accent("               ** 1. Definition d'une fonction            **\n"));
    printf("               ** 2. Retour d'une fonction                **\n");
    printf ("%s",Accent("               ** 3. Passage des parametres               **\n"));
    printf("               ** 4. Appel d'une foncion                  **\n");
    printf("               ** 5. Menu principal                       **\n");
    printf("               ** 0.Quitter                               **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
	scanf("%d",&c3);
    					break;
    				
    				}
    				case 1 :{
    						system("cls");
    						
    					menu_p();
    						
    					scanf("%d",&choix);
    					break;
    				}
    				case 0 : return 0;
    			}
                         
               			break;
               		}
               		case 2: {
               			system("cls");
               			printf("\n\nRetour d'une fonction :\n");
               			  
                    printf ("%s",Accent("La fonction peut renvoyer une valeur (et donc se terminer)"));
                    printf ("%s",Accent("\n"));
                    printf ("%s",Accent("grâce au mot-cler eturn. Lorsque l'instruction return est rencontree,"));
                    printf ("%s",Accent("\n"));
                    printf ("%s",Accent("la fonction evalue la valeur qui la suit, puis la renvoie au programme"));
                    printf ("%s",Accent("\n"));
                    printf ("%s",Accent("appelant (programme à partir duquel la fonction a ete appelee)."));
                    printf ("%s",Accent("\n"));
                    printf ("%s",Accent("Une fonction peut contenir plusieurs instructions return,"));
                    printf ("%s",Accent("\n"));
                    printf ("%s",Accent("ce sera toutefois la première instruction return rencontree "));
                    printf ("%s",Accent("\n"));
                    printf ("%s",Accent("qui provoquera la fin de la fonction et le renvoi de la valeur qui la suit."));
                    printf ("%s",Accent("\n"));
                    printf ("%s",Accent("La syntaxe de l'instruction return est simple : "));
                    printf ("%s",Accent("\n\n"));
                    printf ("%s",Accent("return (valeur_ou_variable);"));
                    printf ("%s",Accent("\n\n"));
                   printf("************************************************************\n");
	     printf ("%s",Accent("**                   Type De Donnees                      **\n"));
	     printf("************************************************************\n");
	     printf("**                       Fonction                         **\n");
	     printf("************************************************************\n");
	     printf("1.Menu  principal            2.Menu precedent                       0.quitter");
    			
    		printf("\n\n");
    			int n;
    			scanf("%d",&n);
    			switch(n)
    			{
    				case 2 :{
    					
    					system("cls");
    					
    					menu_p();
    					
    					 scanf("%d",&choix);
    					break;
    				
    				}
    				case 1 :{
    						system("cls");
    						
    					printf("               *********************************************\n");
	printf("               **                   Fonction              **\n");
	printf("               *********************************************\n");
    printf("               ** 1. Definition d'une fonction            **\n");
    printf("               ** 2. Retour d'une fonction                **\n");
    printf ("%s",Accent("               ** 3. Passage des parametres               **\n"));
    printf("               ** 4. Appel d'une foncion                  **\n");
    printf("               ** 5. Menu principal                       **\n");
    printf("               ** 0.Quitter                               **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
    						printf("               Choiser Une Option SVP :   ");
    					scanf("%d",&choix);
    					break;
    				}
    				case 0 : return 0;
    			}
               		
               		}
               	case 4:{
               		system("cls");
               	 printf("\n\nAppel d'une foncion\n");
                  printf ("%s",Accent("Pour executer une fonction, il suffit de faire appel"));
                    printf ("%s",Accent("\n"));
                    printf ("%s",Accent("à elle en ecrivant son nom (une fois de plus en respectant"));
                    printf ("%s",Accent("\n"));
                    printf ("%s",Accent("la casse) suivi d'une parenthèse ouverte "));
                    printf ("%s",Accent("\n"));
                    printf ("%s",Accent("(eventuellement des arguments) puis d'une parenthèse fermee :"));
                    printf ("%s",Accent("\n"));
                    printf ("%s",Accent("\n"));
                    printf ("%s",Accent("Nom_De_La_Fonction());"));
                    printf ("%s",Accent("\n"));
                    printf ("%s",Accent("Remarques :"));
                    printf ("%s",Accent("\n"));
                    printf ("%s",Accent("le point-virgule signifie la fin d'une instruction et permet \nau navigateur de distinguer les differents blocs \nd'instructions"));
                    printf ("%s",Accent("\n"));
                    printf ("%s",Accent("	si jamais vous avez defini des arguments \ndans la declaration de la fonction, \nil faudra veiller à les inclure"));
                    printf ("%s",Accent("\n\n"));
                    printf ("%s",Accent("lors de l'appel de la fonction \n(le même nombre d'arguments separes par des virgules !) "));
                    printf ("%s",Accent("\n"));
                    printf ("%s",Accent("Nom_De_La_Fonction(argument1, argument2));"));
                    printf ("%s",Accent("\n"));
                   
                 printf("\n");
         printf("************************************************************\n");
        printf ("%s",Accent("**                   Type De Donnees                      **\n"));
	     printf("************************************************************\n");
	     printf("**                       Fonction                         **\n");
	     printf("************************************************************\n");
	     printf("1.Menu  principal            2.Menu precedent                       0.quitter");
    			
    		printf("\n\n");
    			int n;
    			scanf("%d",&n);
    			switch(n)
    			{
    				case 2 :{
    					
    					system("cls");
    					printf("               *********************************************\n");
	printf("               **                   Fonction              **\n");
	printf("               *********************************************\n");
    printf("               ** 1. Definition d'une fonction            **\n");
    printf("               ** 2. Retour d'une fonction                **\n");
    printf("               ** 3. Passage des parametres               **\n");
    printf("               ** 4. Appel d'une foncion                  **\n");
    printf("               ** 5. Menu principal                       **\n");
    printf("               ** 0.Quitter                               **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
    						printf("               Choiser Une Option SVP :   ");
    					 
    					 scanf("%d",&c3);
    					break;
    				
    				}
    				case 1 :{
    						system("cls");
    						
    					menu_p();
    						
    					scanf("%d",&choix);
    					break;
    				}
    				case 0 : return 0;
    			}
                   
               		break;
               	}
               	case 3 :{
               		printf("\nPassage des parametres :\n");

                    /*  printf("Il est possible de passer des arguments à une fonction,");
                      printf("\n");
                      printf("c'est-à-dire lui fournir une valeur ou le nom d'une variable");
                      printf("\n");
                      printf("afin que la fonction puisse effectuer des operations sur ces ");
                      printf("\n");
                      printf("arguments Le passage d'arguments à une fonction se fait au");
                      printf("\n");
                      printf("au moyen d'une liste d'arguments (separes par des virgules)");
                      printf("\n");
                      printf("entre parenthèses suivant immediatement le nom de la fonction.");
                      printf("\n");
                      printf("Le nombre et le type d'arguments");
                      printf("\n");
                      printf("dans la declaration, le prototype et dans l'appel doit");
                      printf("\n");
                      printf("correspondre au risque, sinon, de generer une erreur");
                      printf("\n");
                      printf("lors de la compilation...");
                      printf("\n");
                      printf("Un argument peut être :");
                      printf("\n");
                      printf("\n");
                      printf("	une constante");
                      printf("\n");
                      printf("une variable");
                      printf("\n");
                      printf("une expression");
                      printf("\n");
                      printf("une autre fonction");
                      printf("\n");*/
                      	system("cls");
    printf("               *********************************************\n");
	printf ("%s",Accent("               **            Passage des parametres        **\n"));                
	printf("               *********************************************\n");
	printf ("%s",Accent("               ** 1. Passage Des parametres par valeur    **\n"));
	printf ("%s",Accent("               ** 2. passage des parametres par references**\n"));
	printf ("%s",Accent("               ** 3. menu precedent                       **\n"));
    printf("               ** 0.Quitter                               **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
					
					int c4;
				
				 printf("               Choiser Une Option SVP :   ");
    
               scanf("%d",&c4);
               		if(c4>=0&&c4<=5)
               		{
               			switch(c4)
               			{
               				case 0 : {
               					return 0;
               					break;
               				}
               				case 1 : {

                                  printf ("%s",Accent("La valeur de l'expression passee en paramètre est copiee"));
                                   printf ("\n");
                                  printf ("%s",Accent("dans une variable locale. C'est cette variable qui est utilisee"));
                                  printf ("%s",Accent("\n"));
                                  printf ("%s",Accent("pour faire les calculs dans la fonction appelee."));
                                  printf ("%s",Accent("\n"));
                                  printf ("%s",Accent("Si l'expression passee en paramètre est une variable,"));
                                  printf ("%s",Accent("\n"));
                                  printf ("%s",Accent("son contenu est copie dans la variable locale."));
                                  printf ("%s",Accent("\n"));
                                  printf ("%s",Accent("Aucune modification de la variable locale dans la fonction appelee ne modifie"));
                                  printf ("%s",Accent("\n"));
                                  printf ("%s",Accent("la variable passee en paramètre, parce que ces modifications ne s'appliquent"));
                                  printf ("%s",Accent("\n"));
                                  printf ("%s",Accent("qu'à une copie de cette dernière."));
                                  printf ("%s",Accent("\n"));
                                  printf ("%s",Accent("Le C ne permet de faire que des passages par valeur."));
                                  printf ("%s",Accent("\n"));
                                 
               					break;
               				}
               				case 2:{
               					 printf ("%s",Accent("\nPassage des parametres :\n"));

                       printf ("%s",Accent("Il est possible de passer des arguments à une fonction,"));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("c'est-à-dire lui fournir une valeur ou le nom d'une variable"));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("afin que la fonction puisse effectuer des operations sur ces "));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("arguments Le passage d'arguments à une fonction se fait au"));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("au moyen d'une liste d'arguments (separes par des virgules)"));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("entre parenthèses suivant immediatement le nom de la fonction."));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("Le nombre et le type d'arguments"));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("dans la declaration, le prototype et dans l'appel doit"));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("correspondre au risque, sinon, de generer une erreur"));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("lors de la compilation..."));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("Un argument peut être :"));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("	une constante"));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("une variable"));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("une expression"));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("une autre fonction"));
                       printf ("%s",Accent("\n"));
               					break;
               				}
               				case 3:{
               					printf("\npassage Des Parametres \n\n");
               					printf("");
               					
               					break;
               				}
               				case 4:{
               						system("cls");
    printf("               *********************************************\n");
	printf("               **                   Fonction              **\n");
	printf("               *********************************************\n");
    printf("               ** 1. Definition d'une fonction            **\n");
    printf("               ** 2. Retour d'une fonction                **\n");
    printf ("%s",Accent("               ** 3. Passage des parametres               **\n"));
    printf("               ** 4. Appel d'une foncion                  **\n");
    printf("               ** 5. Menu principal                       **\n");
    printf("               ** 0.Quitter                               **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
               					break;
               				}
               				case 5 :{
               					system("cls");
               					menu_p();
    printf("               *********************************************\n");
	printf("               **        Introduction au Langague  C      **\n");
	printf("               *********************************************\n");
    printf("               ** 1. Variable                             **\n");
    printf("               ** 2. Structures  Conditionnelles          **\n");
    printf("               ** 3. Structure  repetetives               **\n");
    printf("               ** 4. Fonction                             **\n");
    printf("               ** 5. Tableaux                             **\n");
    printf("               ** 6. Pointeur                             **\n");
    printf("               ** 7. Structures de donnees                **\n");
    printf("               ** 0. Quitter                              **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
	printf("\n");
               					break;
               				}
               				
               			}
               		}
               		
               		break;
               	}
               	case 5 :{
               			system("cls");
               		menu_p();
               		
               	scanf("%d",&choix);
               		
               		 			
   /* printf("               *********************************************\n");
	printf("               **        Introduction au Langague  C      **\n");
	printf("               *********************************************\n");
    printf("               ** 1. Variable                             **\n");
    printf("               ** 2. Structures  Conditionnelles          **\n");
    printf("               ** 3. Structure  repetetives               **\n");
    printf("               ** 4. Fonction                             **\n");
    printf("               ** 5. Tableaux                             **\n");
    printf("               ** 6. Pointeur                             **\n");
    printf("               ** 7. Structures de donnees                **\n");
    printf("               ** 0. Quitter                              **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
	printf("\n");*/
               		
               		break;
               	}
               	
               	}
               }
    
				break;
				
			}
			case 3 :{
					system("cls");
   printf("               *********************************************\n");
	printf("               **          Structure Repetitive           **\n");
	printf("               *********************************************\n");
    printf("               ** 1. Structure Wihle                      **\n");
    printf("               ** 2. Structure Do While                   **\n");
    printf("               ** 3. Structure For                        **\n");
    printf("               ** 4. Menu principal                       **\n");
    printf("               ** 0.Quitter                               **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
					
					int c12;
				
				 printf("               Choiser Une Option SVP :   ");
    
               scanf("%d",&c12);
               switch(c12)
               {
               	case 1 :{
               		system("cls");
               		 printf ("%s",Accent("\nStructure Wihle\n\n"));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent("La structure while correspond tout à fait à la structure tant que"));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent("du langage algorithmique. (Si on neglige le fait qu'en C"));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent(" les conditions peuvent être formulees à l'aide \nd'expressions numeriques.)"));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent("La structure tant que en langage algorithmique"));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent("tant que (<expression logique>) faire"));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent("<bloc d'instructions>"));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent("ftant"));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent("La structure while en C"));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent("while ( <expression> )"));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent("<bloc d'instructions>"));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent("* Tant que l'<expression logique> fournit la valeur vrai, "));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent("le <bloc d'instructions> est execute."));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent("* Si l'<expression logique> fournit la valeur faux,"));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent("l'execution continue avec l'instruction qui suit ftant."));
               		 printf ("%s",Accent("\n"));
               		  printf ("%s",Accent("\n"));
                   
                 printf("\n");
         printf("************************************************************\n");
	     printf ("%s",Accent("**                   Type De Donnees                      **\n"));
	     printf("************************************************************\n");
	     printf("**                  Structure Repetitive                  **\n");
	     printf("************************************************************\n");
	     printf("1.Menu  principal            2.Menu precedent                       0.quitter");
    			
    		printf("\n\n");
    			int n;
    			scanf("%d",&n);
    			switch(n)
    			{
    				case 2 :{
    					
    					system("cls");
    					
    					menu_p();
    						system("cls");
      printf("               *********************************************\n");
	printf("               **          Structure Repetitive           **\n");
	printf("               *********************************************\n");
    printf("               ** 1. Structure Wihle                      **\n");
    printf("               ** 2. Structure Do While                   **\n");
    printf("               ** 3. Structure For                        **\n");
    printf("               ** 4. Menu principal                       **\n");
    printf("               ** 0.Quitter                               **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
					
				
					
				
				
				 printf("               Choiser Une Option SVP :   ");
				 scanf("%d",&c12);
    					break;
    				
    				}
    				case 1 :{
    						system("cls");
    						
    					menu_p();
    						
    					scanf("%d",&choix);
    					break;
    				}
    				case 0 : return 0;
    			}
               		
               		break;
               	}
               	case 2:{
               		system("cls");
               	
               		 printf ("%s",Accent("La structure do - while est semblable à la structure while,"));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent("avec la difference suivante :"));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent("* while evalue la condition avant d'executer le bloc d'instructions,"));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent("* do - while evalue la condition après avoir execute le bloc"));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent("d'instructions. Ainsi le bloc d'instructions est execute"));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent("au moins une fois."));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent("La structure do - while en C"));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent("do"));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent("<bloc d'instructions>"));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent("while ( <expression> )"));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent("Le <bloc d'instructions> est execute au moins une fois "));
               		 printf ("%s",Accent("\n"));
               		 printf ("%s",Accent("\n"));
                   
                 printf("\n");
         printf("************************************************************\n");
	     printf ("%s",Accent("**                   Type De Donnees                      **\n"));
	     printf("************************************************************\n");
	     printf("**                  Structure Repetitive                  **\n");
	     printf("************************************************************\n");
	     printf("1.Menu  principal            2.Menu precedent                       0.quitter");
    			
    		printf("\n\n");
    			int n;
    			scanf("%d",&n);
    			switch(n)
    			{
    				case 2 :{
    					
    					system("cls");
    					
    					menu_p();
    						system("cls");
    printf("               *********************************************\n");
	printf("               **          Structure Repetitive           **\n");
	printf("               *********************************************\n");
    printf("               ** 1. Structure Wihle                      **\n");
    printf("               ** 2. Structure Do While                   **\n");
    printf("               ** 3. Structure For                        **\n");
    printf("               ** 4. Menu principal                       **\n");
    printf("               ** 0.Quitter                               **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
					
				
				
				 printf("               Choiser Une Option SVP :   ");
				 scanf("%d",&c12);
    					break;
    				
    				}
    				case 1 :{
    						system("cls");
    						
    					menu_p();
    						
    					scanf("%d",&choix);
    					break;
    				}
    				case 0 : return 0;
    			}
               		
               		break;
               	}
               	case 3:{
               		system("cls");
               		printf("La structure for en Pascal et la structure pour en langage");
               		printf("\n");
               		printf ("%s",Accent("sont utilisees pour faciliter la programmation de boucles de comptage."));
               	    printf ("%s",Accent("\n"));
               		printf ("%s",Accent("La structure for en C est plus generale et beaucoup plus puissante."));
               		printf("\n");
               		printf("La structure for en C");
               		printf("\n");
               		printf("for ( <expr1> ; <expr2> ; <expr3>");
               		printf("\n");
               		printf("<bloc d'instructions>");
               		printf("\n");
               		 printf("\n");
         printf("************************************************************\n");
	     printf ("%s",Accent("**                   Type De Donnees                      **\n"));
	     printf("************************************************************\n");
	     printf("**                  Structure Repetitive                  **\n");
	     printf("************************************************************\n");
	     printf("1.Menu  principal            2.Menu precedent                       0.quitter");
    			
    		printf("\n\n");
    			int n;
    			scanf("%d",&n);
    			switch(n)
    			{
    				case 2 :{
    					
    					system("cls");
    					
    					menu_p();
    						system("cls");
    printf("               *********************************************\n");
	printf("               **          Structure Repetitive           **\n");
	printf("               *********************************************\n");
    printf("               ** 1. Structure Wihle                      **\n");
    printf("               ** 2. Structure Do While                   **\n");
    printf("               ** 3. Structure For                        **\n");
    printf("               ** 4. Menu principal                       **\n");
    printf("               ** 0.Quitter                               **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
					
				
				
				 printf("               Choiser Une Option SVP :   ");
				 scanf("%d",&c12);
    					break;
    				
    				}
    				case 1 :{
    						system("cls");
    						
    					menu_p();
    						
    					scanf("%d",&choix);
    					break;
    				}
    				case 0 : return 0;
    			}
               		
               		break;
               	}
               	case 4 : {
               			system("cls");
    printf("               *********************************************\n");
	printf("               **          Structure Repetitive           **\n");
	printf("               *********************************************\n");
    printf("               ** 1. Structure Wihle                      **\n");
    printf("               ** 2. Structure Do While                   **\n");
    printf("               ** 3. Structure For                        **\n");
    printf("               ** 4. Menu principal                       **\n");
    printf("               ** 0.Quitter                               **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
               		break;
               	}
               	case 0 :{
               		return 0;
               		break;
               	}
               }
				break;
			}
			case 5 :{
					system("cls");
    printf("               *********************************************\n");
	printf("               **                Les Tableau              **\n");
	printf("               *********************************************\n");
    printf("               ** 1. Tableau A une dimention              **\n");
    printf("               ** 2. Tableau multidimensionnels           **\n");
    printf("               ** 3. Menu principal                       **\n");
    printf("               ** 0.Quitter                               **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
					
					int c5;
				
				 printf("               Choiser Une Option SVP :   ");
    
               scanf("%d",&c5);
               if(c5>=0&&c5<=3)
               {
               	switch(c5)
               	{
               		case 0 :{
               			return 0;
               			break;
               		} 
               		case 1 :{
               			system("cls");
                        printf ("%s",Accent("\n\nTableau A une dimention \n"));
                        printf ("%s",Accent("Un tableau unidimensionnel est un tableau qui contient"));
                        printf ("%s",Accent("\n"));
                        printf ("%s",Accent("des elements simples (des elements qui ne sont pas des tableaux)"));
                        printf ("%s",Accent("\n"));
                        printf ("%s",Accent("Un tableau unidimensionnel est donc une suite de  cases "));
                        printf ("%s",Accent("\n"));
                        printf ("%s",Accent("de même taille contenant des elements"));
                        printf ("%s",Accent("\n"));
                        printf ("%s",Accent("d'un type donne (de la longueur de la case en quelque sorte). "));
                        printf ("%s",Accent("\n"));
                        printf ("%s",Accent("type Nom_du_tableau [Nombre d'elements]"));
                        printf ("%s",Accent("\n"));
                        printf ("%s",Accent("type definit le type d'element que contient le tableau (rappel : un tableau"));
                        printf ("%s",Accent("\n"));
                        printf ("%s",Accent("en langage C est compose uniquement d'elements de même type), c'est-à-dire"));
                        printf ("%s",Accent("\n"));
                        printf ("%s",Accent("qu'il definit la taille d'une case du tableau en memoire"));
                        printf ("%s",Accent("\n"));
                        printf ("%s",Accent("Nom_du_tableau est le nom que l'on decide de donner au tableau, "));
                        printf ("%s",Accent("\n"));
                        printf ("%s",Accent("le nom du tableau suit les mêmes"));
                        printf ("%s",Accent("\n"));
                        printf ("%s",Accent("règles qu'un nom de variable"));
                        printf ("%s",Accent("\n"));
                        printf ("%s",Accent("Nombre d'elements est un nombre entier qui determine \nle nombre de cases que le tableau"));
                        printf ("%s",Accent("\n"));
                        printf ("%s",Accent("doit comporter "));
                        printf ("%s",Accent("\n"));
                        printf ("%s",Accent("Voici par exemple la definition d'un tableau qui doit contenir 8 elements \nde type char :"));
                        printf ("%s",Accent("\n\n"));
                        printf ("%s",Accent("char Tableau [8]"));
                        printf ("%s",Accent("\n"));
                       
                     printf("************************************************************\n");
	     printf ("%s",Accent("**                   Type De Donnees                      **\n"));
	     printf("************************************************************\n");
	     printf("**                      Tableau                           **\n");
	     printf("************************************************************\n");
	     printf("1.Menu  principal            2.Menu precedent                       0.quitter");
    			
    		printf("\n\n");
    			int n4;
    			scanf("%d",&n4);
    			switch(n4)
    			{
    				case 2 :{
    					
    					system("cls");
    					
    				printf("               *********************************************\n");
	printf("               **                Les Tableau              **\n");
	printf("               *********************************************\n");
    printf("               ** 1. Tableau A une dimention              **\n");
    printf("               ** 2. Tableau multidimensionnels           **\n");
    printf("               ** 3. Menu principal                       **\n");
    printf("               ** 0.Quitter                               **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
	scanf("%d",&c5);
    					break;
    				
    				}
    				case 1 :{
    						system("cls");
    						
    					menu_p();
    						
    					scanf("%d",&choix);
    					break;
    				}
    				case 0 : return 0;
    			}
                   
                       
					    break;
               		}
               		case 2 : {
               			system("cls");
               			printf("\ntableau multidimensionnel\n");
               			 printf ("%s",Accent("\nUn tableau multidimensionnel se definit de la manière suivante : \n"));
               			 printf ("%s",Accent("type Nom_du_tableau [a1][a2][a3] ... [aN]"));
               			 printf ("%s",Accent("\n"));
               			 printf ("%s",Accent("Chaque element entre crochets designe le nombre \nd'elements dans chaque dimension"));
               			 printf ("%s",Accent("\n"));
               			 printf ("%s",Accent("Le nombre de dimensions n'est pas limite"));
               			 printf ("%s",Accent("\n"));
               			 printf ("%s",Accent("Un tableau d'entiers positifs à deux dimensions (3 lignes, 4 colonnes)"));
               			 printf ("%s",Accent("\n"));
               			 printf ("%s",Accent("se definira avec la syntaxe suivante : "));
               			 printf ("%s",Accent("\n"));
               			 printf ("%s",Accent("int Tableau [3][4]"));
               			 printf ("%s",Accent("\n"));
               			 printf ("%s",Accent("\n"));
         printf("************************************************************\n");
	     printf ("%s",Accent("**                   Type De Donnees                      **\n"));
	     printf("************************************************************\n");
	     printf("**                      Tableau                           **\n");
	     printf("************************************************************\n");
	     printf("1.Menu  principal            2.Menu precedent                       0.quitter");
    			
    		printf("\n\n");
    			int n5;
    			scanf("%d",&n5);
    			switch(n5)
    			{
    				case 2 :{
    					
    					system("cls");
    					
    						printf("               *********************************************\n");
	printf("               **                Les Tableau              **\n");
	printf("               *********************************************\n");
    printf("               ** 1. Tableau A une dimention              **\n");
    printf("               ** 2. Tableau multidimensionnels           **\n");
    printf("               ** 3. Menu principal                       **\n");
    printf("               ** 0.Quitter                               **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
	 printf("               Choiser Une Option SVP :   ");
    					
    					 scanf("%d",&choix);
    					break;
    				
    				}
    				case 1 :{
    						system("cls");
    						
    					menu_p();
    						
    					scanf("%d",&choix);
    					break;
    				}
    				case 0 : return 0;
    			}
               			break;
               		}
               		case 3:{
               			
               							system("cls");
               					menu_p();
    printf("               *********************************************\n");
	printf("               **        Introduction au Langague  C      **\n");
	printf("               *********************************************\n");
    printf("               ** 1. Variable                             **\n");
    printf("               ** 2. Structures  Conditionnelles          **\n");
    printf("               ** 3. Structure  repetetives               **\n");
    printf("               ** 4. Fonction                             **\n");
    printf("               ** 5. Tableaux                             **\n");
    printf("               ** 6. Pointeur                             **\n");
    printf("               ** 7. Structures de donnees                **\n");
    printf("               ** 0. Quitter                              **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
               			break;
               		}
               	}
               }
				
				break;
			}
			case 6 :{
				system("cls");
	printf("               *********************************************\n");
	printf("               **                Pointeurs                **\n");
	printf("               *********************************************\n");
    printf("               ** 1. C'est Quoi un Pointeur               **\n");
    printf("               ** 2. Pointeur est Adresse memoires        **\n");
    printf("               ** 3. Utilisation de pointeurs             **\n");
    printf("               ** 4. Menu principal                       **\n");
    printf("               ** 0.Quitter                               **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
	
		int c6;
				
				 printf("               Choiser Une Option SVP :   ");
    
               scanf("%d",&c6);
               if(c6>=0&&c6<=4)
               {
               	switch(c6)
               	{
               		case 0 : {
               			return 0;
               			break;
               		}
               		case 1 :{
               			system("cls");
               			printf ("%s",Accent("C'est Quoi un Pointeur\n\n"));

                       printf ("%s",Accent("Un pointeur est une variable contenant l'adresse d'une autre"));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("variable d'un type donne. La notion de pointeur"));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("permettant de definir des structures dynamiques,"));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("c'est-à-dire qui evoluent au cours du temps"));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("(par opposition aux tableaux par exemple qui sont des structures"));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("de donnees statiques, dont la taille est figee à la definition)."));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("\n"));
                         printf("************************************************************\n");
	     printf ("%s",Accent("**                   Type De Donnees                      **\n"));
	     printf("************************************************************\n");
	     printf("**                     Pointeur                           **\n");
	     printf("************************************************************\n");
	     printf("1.Menu  principal            2.Menu precedent                       0.quitter");
    			
    		printf("\n\n");
    			int n6;
    			scanf("%d",&n6);
    			switch(n6)
    			{
    				case 2 :{
    					
    					system("cls");
    					
    						printf("               *********************************************\n");
	printf("               **                Pointeurs                **\n");
	printf("               *********************************************\n");
    printf("               ** 1. C'est Quoi un Pointeur               **\n");
    printf("               ** 2. Pointeur est Adresse memoires        **\n");
    printf("               ** 3. Utilisation de pointeurs             **\n");
    printf("               ** 4. Menu principal                       **\n");
    printf("               ** 0.Quitter                               **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
		 printf("               Choiser Une Option SVP :   ");
	
    					 scanf("%d",&c6);
    					break;
    				
    				}
    				case 1 :{
    						system("cls");
    						
    					menu_p();
    						
    					scanf("%d",&choix);
    					break;
    				}
    				case 0 : return 0;
    			}
                       
               			break;
               		}
               		
               		
               		case 2 : {
               			system("cls");
               			printf ("%s",Accent("\n\nPointeur est Adresse memoires \n"));
               			printf ("%s",Accent("Comme nous l'avons vu, un pointeur est une variable "));
               		printf ("%s",Accent("\n"));
               		printf ("%s",Accent("qui permet de stocker une adresse, il est donc "));
               		printf ("%s",Accent("\n"));
               		printf ("%s",Accent("necessaire de comprendre ce qu'est une adresse."));
               		printf ("%s",Accent("\n"));
               	
               		printf ("%s",Accent("Lorsque l'on execute un programme, celui-ci est stocke en memoire,"));
               		printf ("%s",Accent("\n"));
               		printf ("%s",Accent("cela signifie que d'une part le code à executer est stocke,"));
               		printf ("%s",Accent("\n"));
               		printf ("%s",Accent("mais aussi que chaque variable que l'on a defini"));
               		printf ("%s",Accent("\n"));
               		printf ("%s",Accent("a une zone de memoire qui lui est reservee,"));
               		printf ("%s",Accent("\n"));
               		printf ("%s",Accent("et la taille de cette zone correspond au type de variable"));
               		printf ("%s",Accent("\n"));
               		printf ("%s",Accent("que l'on a declare"));
               		printf ("%s",Accent("\n"));
             
               		printf ("%s",Accent("En realite la memoire est constituee de plein de petites cases de 8 bits"));
               		printf ("%s",Accent("\n"));
               		printf ("%s",Accent("(un octet). Une variable, selon son type (donc sa taille)"));
               		printf ("%s",Accent("\n"));
               		printf ("%s",Accent("va ainsi occuper une ou plusieurs de ces cases"));
               		printf ("%s",Accent("\n"));
               		printf ("%s",Accent("(une variable de type char occupera une seule case, tandis qu'une variable "));
               		printf ("%s",Accent("\n"));
               		printf ("%s",Accent("de type long occupera 4 cases consecutives). "));
               		printf ("%s",Accent("\n"));
               		printf ("%s",Accent("Chacune de ces cases  (appelees blocs) est identifiee par un numero. "));
               		printf ("%s",Accent("\n"));
               		printf ("%s",Accent("Ce numero s'appelle adresse. "));
               		printf ("%s",Accent("\n"));
               		printf ("%s",Accent("On peut donc acceder à une variable de 2 façons :"));
               		printf ("%s",Accent("\n"));
               		printf ("%s",Accent("grâce à son nom"));
               		printf ("%s",Accent("\n"));
               		printf ("%s",Accent("grâce à l'adresse du premier bloc alloue à la variable"));
               		printf ("%s",Accent("\n"));
               		printf ("%s",Accent("Il suffit donc de stocker l'adresse de la variable dans un pointeur "));
               		printf ("%s",Accent("\n"));
               		printf ("%s",Accent("(il est prevu pour cela) afin de pouvoir acceder à celle-ci "));
               		printf ("%s",Accent("\n"));
               		printf ("%s",Accent("ci (on dit que l'on  pointe vers la variable ). "));
               		printf ("%s",Accent("\n"));
               		printf ("%s",Accent("\n"));
               			  printf("************************************************************\n");
	     printf ("%s",Accent("**                   Type De Donnees                      **\n"));
	     printf("************************************************************\n");
	     printf("**                     Pointeur                           **\n");
	     printf("************************************************************\n");
	     printf("1.Menu  principal            2.Menu precedent                       0.quitter");
    			
    		printf("\n\n");
    			int n7;
    			scanf("%d",&n7);
    			switch(n7)
    			{
    				case 1 :{
    					
    					system("cls");
    					
    					menu_p();
    					
    					 scanf("%d",&choix);
    					break;
    				
    				}
    				case 2 :{
    						system("cls");
    						
   	printf("               *********************************************\n");
	printf("               **                Pointeurs                **\n");
	printf("               *********************************************\n");
    printf("               ** 1. C'est Quoi un Pointeur               **\n");
    printf("               ** 2. Pointeur est Adresse memoires        **\n");
    printf("               ** 3. Utilisation de pointeurs             **\n");
    printf("               ** 4. Menu principal                       **\n");
    printf("               ** 0.Quitter                               **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
	scanf("%d",&c6);
    					break;
    				}
    				case 0 : return 0;
    			}
               			break;
               		}
               		case 3 : {
               			system("cls");
               			printf ("%s",Accent("\n\nUtilisation de pointeurs\n"));
                        printf ("%s",Accent("Un pointeur est une variable qui doit être"));
                        printf ("%s",Accent("\n"));
                       printf ("%s",Accent("definie en precisant le type de variable pointee,"));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("de la façon suivante :"));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("type * Nom_du_pointeur"));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("Grâce au symbole '*' le compilateur sait qu'il s'agit  "));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("d'une variable de type pointeuret non d'une variable"));
                       printf ("%s",Accent("\n"));
                       printf ("%s",Accent("\n"));
         printf("************************************************************\n");
	     printf ("%s",Accent("**                   Type De Donnees                      **\n"));
	     printf("************************************************************\n");
	     printf("**                     Pointeur                           **\n");
	     printf("************************************************************\n");
	     printf("1.Menu  principal            2.Menu precedent                       0.quitter");
    			
    		printf("\n\n");
    			int n8;
    			scanf("%d",&n8);
    			switch(n8)
    			{
    				case 2 :{
    					
    					system("cls");
    					
    printf("               *********************************************\n");
	printf("               **                Pointeurs                **\n");
	printf("               *********************************************\n");
    printf("               ** 1. C'est Quoi un Pointeur               **\n");
    printf("               ** 2. Pointeur est Adresse memoires        **\n");
    printf("               ** 3. Utilisation de pointeurs             **\n");
    printf("               ** 4. Menu principal                       **\n");
    printf("               ** 0.Quitter                               **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
	scanf("%d",&c6);
    					break;
    				
    				}
    				case 1 :{
    						system("cls");
    						
    					menu_p();
    						
    					scanf("%d",&choix);
    					break;
    				}
    				case 0 : return 0;
    			}
                       
               			break;
               		}
               		case 4 :{
               				
               							system("cls");
               					menu_p();
    printf("               *********************************************\n");
	printf("               **        Introduction au Langague  C      **\n");
	printf("               *********************************************\n");
    printf("               ** 1. Variable                             **\n");
    printf("               ** 2. Structures  Conditionnelles          **\n");
    printf("               ** 3. Structure  repetetives               **\n");
    printf("               ** 4. Fonction                             **\n");
    printf("               ** 5. Tableaux                             **\n");
    printf("               ** 6. Pointeur                             **\n");
    printf("               ** 7. Structures de donnees                **\n");
    printf("               ** 0. Quitter                              **\n");
    printf("               **                                         **\n");
	printf("               *********************************************\n");
               			break;
               		}
               		
               	}
               	
               }
	
				break;
				
			}
			case 7 : {
					system("cls");
    printf("               ***********************************************\n");
    printf ("%s",Accent("               **           Structures des Donnees          **\n"));
	printf("               ***********************************************\n");
    printf ("%s",Accent("               ** 1.Definition d'une Structures des Donnees **\n"));
    printf ("%s",Accent("               ** 2.Utilisation d'une Structures des Donnees**\n"));
    printf("               ** 3.Menu principal                          **\n");
    printf("               ** 0.Quitter                                 **\n");
    printf("               **                                           **\n");
	printf("               ***********************************************\n");
	
		int c7;
				
				 printf("               Choiser Une Option SVP :   ");
    
               scanf("%d",&c7);
               if(c7>=0&&c7<=3)
               {
               	switch(c7)
               	{
              
              case 0 :{
              	return 0;
              	break;
              }
                        case 1 :{
                        system("cls");
                        printf ("%s",Accent("\n\nDefinition d'une Structures des Donnees\n"));
                        printf ("%s",Accent("Une structure est une combinaison d'objets simples en un objet"));
                        printf ("%s",Accent("\n"));
                        printf ("%s",Accent("plus complexe, permettant d'attribuer à cet"));
                        printf ("%s",Accent("\n"));
                        printf ("%s",Accent("permettant d'attribuer à cet ensemble composite un nom unique."));
                        printf ("%s",Accent("\n"));
                        printf ("%s",Accent("Les objets simples sont les types de donnees de base tels que les"));
                        printf ("%s",Accent("\n"));
                        printf ("%s",Accent("entiers - int - les caractères - char - des tableaux d'entiers ou de caractères,"));
                        printf ("%s",Accent("\n"));
                        printf ("%s",Accent("les flottants - float - et d'autres types. "));
                        printf ("%s",Accent("\n"));
                        printf ("%s",Accent("Cette structure ainsi nomme fera,implicitement, reference à ce regroupement"));
                        printf ("%s",Accent("\n"));
                        printf ("%s",Accent("d'elements caracteristiques."));
                        printf ("%s",Accent("\n"));
                        printf ("%s",Accent("\n"));
        printf("************************************************************\n");
	     printf ("%s",Accent("**                   Type De Donnees                      **\n"));
	     printf("************************************************************\n");
	     printf("**           Structures des Donnees                       **\n");
	     printf("************************************************************\n");
	     printf("1.Menu  principal            2.Menu precedent                       0.quitter");
    			
    		printf("\n\n");
    			int n9;
    			scanf("%d",&n9);
    			switch(n9)
    			{
    				case 2 :{
    					
    					system("cls");
    printf("               ***********************************************\n");
    printf ("%s",Accent("               **           Structures des Donnees          **\n"));
	printf("               ***********************************************\n");
    printf ("%s",Accent("               ** 1.Definition d'une Structures des Donnees **\n"));
    printf ("%s",Accent("               ** 2.Utilisation d'une Structures des Donnees**\n"));
    printf("               ** 3.Menu principal                          **\n");
    printf("               ** 0.Quitter                                 **\n");
    printf("               **                                           **\n");
	printf("               ***********************************************\n");
scanf("%d",&c7);
    					break;
    				
    				}
    				case 1 :{
    						system("cls");
    						
    					menu_p();
    						
    					scanf("%d",&choix);
    					break;
    				}
    				case 0 : return 0;
    			}
                        
                        	break;
                        }
                        
                    case 2 :{
                    	system("cls");
                    	 printf ("%s",Accent("\n\nUtilisation d'une Structures des Donnees\n"));
                    	 printf ("%s",Accent("Pour declarer une structure, on utilise le mot-clef struct, \nde la manière qui suit :"));
                    	 printf ("%s",Accent("\n"));
                    	printf ("%s",Accent("struct "));
                    	printf ("%s",Accent("\n"));
                    	printf ("%s",Accent("{ "));
                    	printf ("%s",Accent("\n"));
                    	printf ("%s",Accent("type1 variable1;"));
                    	printf ("%s",Accent("\n"));
                    	printf ("%s",Accent("type2 variable2;"));
                    	printf ("%s",Accent("\n"));
                    	printf ("%s",Accent("type3 variable3;"));
                    	printf ("%s",Accent("\n"));
                    	printf ("%s",Accent("} nom_structure;"));
                    	printf ("%s",Accent("\n"));
                    	printf ("%s",Accent("Ceci va declarer une variable nommmee nom_structure,"));
                    	printf ("%s",Accent("\n"));
                    	printf ("%s",Accent("qui correspondra à une structure contenant trois variables,"));
                    	printf ("%s",Accent("\n"));
                    	printf ("%s",Accent("de types que vous demandez."));
                    	printf ("%s",Accent("\n"));
                    	
         printf("************************************************************\n");
	     printf ("%s",Accent("**                   Type De Donnees                      **\n"));
	     printf("************************************************************\n");
	     printf ("%s",Accent("**           Structures des Donnees                       **\n"));
	     printf("************************************************************\n");
	     printf("1.Menu  principal            2.Menu precedent                       0.quitter");
    			
    		printf("\n\n");
    			int n10;
    			scanf("%d",&n10);
    			switch(n10)
    			{
    				case 2 :{
    					
    					system("cls");
    					 printf("               ***********************************************\n");
    printf ("%s",Accent("               **           Structures des Donnees          **\n"));
	printf("               ***********************************************\n");
    printf ("%s",Accent("               ** 1.Definition d'une Structures des Donnees **\n"));
    printf ("%s",Accent("               ** 2.Utilisation d'une Structures des Donnees**\n"));
    printf("               ** 3.Menu principal                          **\n");
    printf("               ** 0.Quitter                                 **\n");
    printf("               **                                           **\n");
	printf("               ***********************************************\n");
    						scanf("%d",&c7);
    					break;
    				
    				}
    				case 1 :{
    						system("cls");
    							menu_p();
    				
    					 scanf("%d",&choix);
    					

    					break;
    				}
    				case 0 : return 0;
    			}
                    	break;
                    }
                    case 3 : {
                    		system("cls");
    						
    					menu_p();
    						
    					scanf("%d",&choix);
    					break;
                    
                    }
               	}
               }
				break;
			}
		
		}
	
	
}
}

getch();


}

