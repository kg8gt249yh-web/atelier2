#include <stdio.h>
#include <stdlib.h>

int main() {
    int scoreJoueur = 0;
    int scoreOrdi = 0;
    int manche = 1;
    int choixJoueur;
    int choixOrdi;

   printf("=== PIERRE - FEUILLE - CISEAUX - LEZARD - SPOCK ===\n");
printf("Regles : 1 = Pierre, 2 = Feuille, 3 = Ciseaux, 4 = Lezard, 5 = Spock\n\n");

while (manche <= 7 && abs(scoreJoueur - scoreOrdi) < 2) {

        printf("--- Manche %d/5 ---\n", manche);

printf("Votre choix (1, 2, 3, 4 ou 5) : ");
        scanf("%d", &choixJoueur);

        choixOrdi = (rand() % 5) + 1;

        printf("L'ordinateur a choisi : %d\n", choixOrdi);

        if (choixJoueur == choixOrdi) {
            printf("Egalite !\n");
        }
        else if ((choixJoueur == 1 && (choixOrdi == 3 || choixOrdi == 4)) ||
         (choixJoueur == 2 && (choixOrdi == 1 || choixOrdi == 5)) ||
         (choixJoueur == 3 && (choixOrdi == 2 || choixOrdi == 4)) ||
         (choixJoueur == 4 && (choixOrdi == 2 || choixOrdi == 5)) ||
         (choixJoueur == 5 && (choixOrdi == 1 || choixOrdi == 3))) {
    printf("Vous gagnez cette manche !\n");
    scoreJoueur = scoreJoueur + 1;
}
        }
        else {
            printf("L'ordinateur gagne cette manche !\n");
            scoreOrdi = scoreOrdi + 1;
        }

        printf("Score actuel -> Vous : %d | Ordi : %d\n\n",
               scoreJoueur, scoreOrdi);

        manche = manche + 1;
    }

    printf("=== FIN DE LA PARTIE ===\n");
    printf("Score final -> Vous : %d | Ordi : %d\n",
           scoreJoueur, scoreOrdi);

    if (scoreJoueur > scoreOrdi) {
        printf("Bravo, vous avez gagne la partie !\n");
    }
    else if (scoreOrdi > scoreJoueur) {
        printf("L'ordinateur remporte la partie...\n");
    }
    else {
        printf("Match nul parfait !\n");
    }

    return 0;
}
