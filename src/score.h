#ifndef SCORE_H_INCLUDED
#define SCORE_H_INCLUDED

void calculLevel(Player *joueur);
void calculRatio(Player *joueur);
void resultScore(Player *joueur);//R�capitulatif des scores du joueur
void saveScore(Player *joueur);//Enregistre les scores du joueur dans un fichier.txt
void getScore(char namePlayers[10][20], int scorePlayer[10][4]);//R�cup�re les scores � partir du fichier.txt
void viewScore(char namePlayers[10][20], int scorePlayer[10][4]);//Affiche les scores du fichier.txt

void permuteElement(int taille,int n, int p, char namePlayers[taille][20], int scorePlayer[taille][4]);//Permutation des �l�ments du tableau
void triScoreAndName(int taille, int typeScore, char namePlayers[taille][20],int scorePlayer[taille][4]);//Tri des scores du joueur ainsi que les noms


#endif // SCORE_H_INCLUDED
