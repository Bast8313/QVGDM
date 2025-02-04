#include <stdio.h>
#include <stdlib.h>

#define NB_QUESTIONS 5

char* questions[NB_QUESTIONS] = {
    "Quelle est la couleur du cheval blanc d'Henri IV?\n1.Blanc\n2.Rouge\n3.Noir\n",
    "Date de la prise de la Bastille ?\n1.1750\n2.1789\n3.1800\n",
    "Quel est le plus grand océan du monde ?\n1.Océan Atlantique\n2.Océan Indien\n3.Océan Pacifique\n",
    "Qui a écrit Les Misérables ?\n1.Victor Hugo\n2.Emile Zola\n3.Marcel Proust\n",
    "Quelle est la capitale de l'Australie ?\n1.Sydney\n2.Melbourne\n3.Canberra\n"
};

int reponses[NB_QUESTIONS] = {1, 2, 3, 1, 3};

int main() {

// Declaration des variables nécessaires
    int score = 0;
    int reponse_joueur;
    int bonnes_reponses = 0;

    printf("#################################################################\n######## Bienvenue à ...Qui veut gagner des millions ! ##########\n#################################################################\n\n");

// Parcours des questions , initialisation du score & DE LA BOUCLE !!
    for (int i = 0; i < NB_QUESTIONS; i++) 
     {
// Affiche le score de base ( 0 ), la question & les différents choix.       
        printf("Score : %d\n\n", score);
        printf("Question %d :\n\n", i + 1);
        printf("%s\n", questions[i]);  

        printf("Votre réponse : ");
// réponse du joueur :    
        scanf("%d", &reponse_joueur);

//Affichage de la bonne réponse & mise à jour du compteur
        if (reponse_joueur == reponses[i]) {
            printf("Suspensssss !\n\nBien joué !\n*Le score augmente de 10*\n\n");
            score += 10; // +10 si bonne réponse
            bonnes_reponses++; // A chaque bonne réponse, on ajoute 1 au compteur.
        } else {
            printf("Suspensssss !\n\nNON !\n*Votre score n'augmente pas...* :(\n\n");
        }
    }
// Fin du jeux
    printf("###################################################\n########### GAME OVER #################################\n\n");

// Affichage du score final
    printf("Score final : %d\n", score);

// Affichage du pourcentage de bonnes réponses    
    printf("Pourcentage de bonnes réponses : %f%%\n", (bonnes_reponses * 100.0) / NB_QUESTIONS);

// Calcul du pourcentage et conclusion
    if ((bonnes_reponses * 100.0) / NB_QUESTIONS > 50) {
        printf("GOOD JOB BRO, tu as gagné des millions !\n");
    } else {
        printf("T'es nul à chier ! VA TE JETER !\n");
    }

    return 0;
}
