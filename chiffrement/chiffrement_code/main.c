#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cesar.h"
#include "vigenere.h"
#include "verificationAlphanumerique.h"
#include "convertirAccent.h"
#include "viderBuffer.h"

int main()
{
    FILE *fichier;

    fichier = fopen("resultat.txt", "w");

    if (fichier == NULL)
    {
        printf("impossible de creer le fichier\n");
        exit(EXIT_FAILURE);
    }

    char *chr;
    chr = (char *)malloc(99 * sizeof(char));

    printf("Entrez votre message: ");
    fgets(chr, 99, stdin); //saisi et recuperer le message saisi
    char original[strlen(chr)];
    strcpy(original, chr);                 // stock le message original
    fputs("Message original : ", fichier); // ajout a lenregistrement final
    fputs(chr, fichier);

    if (verificationAlphanumerique(chr) == 0) //verifie si le message saisi est alphanumerique
    {
        printf("Le message contient des caracteres speciaux \n");
        fputs("Le message contenait un caractere special", fichier); // ajout a lenregistrement final
        exit(2);
    }

    accent(chr);                              //converti les accents du message
    fputs("Message sans accent : ", fichier); // ajout a lenregistrement final
    fputs(chr, fichier);

    printf("Quelle algorithme voulez-vous (1 pour Cesar || 2 pour Vigenere) ");
    char c = getchar(); // saisi du choix de lutilisateur entre cesar et vigenere

    if (c == '1')
    {
        fputs("Vous avez choisi l'algorithme de Cesar\n", fichier); // ajout a lenregistrement final
        viderBuffer();
        printf("Entre votre cle entre 0 et 100: ");
        char cle = getchar(); // saisi et recuperer la cle entre 0 et 100

        if (cle < 0 || cle > 100) // verifie si la cle se trouve entre 0 et 100 si non quitter
        {
            printf("Mettre un numero entre 0 et 100  "); // ajout a lenregistrement final
            fputs("La cle n'etait pas entre 0 et 100", fichier);
            exit(2);
        }
        char *p;
        int code = strtol(&cle, &p, 0);
        fputs("La cle choisi : ", fichier); // ajout a lenregistrement final
        fprintf(fichier, "%i\n", code);
        viderBuffer();
        printf("Chiffrement(1) ou Dechiffrement(2) : ");
        char c = getchar(); // recuperer le choix de lutilisateur entre chiffrer ou dechiffrer le message
        if (c == '1')
        {
            fputs("Vous avez choisi de chiffrer\n", fichier); // ajout a lenregistrement final
            chiffrerCesar(chr, code);
            fputs("Message chiffre : ", fichier); // ajout a lenregistrement final
            fputs(chr, fichier);
        }
        else if (c == '2')
        {
            fputs("Vous avez choisi de dechiffrer\n", fichier); // ajout a lenregistrement final
            dechiffrerCesar(chr, code);
            fputs("Message dechiffre : ", fichier); // ajout a lenregistrement final
            fputs(chr, fichier);
        }
        else
        {
            printf("Ce choix n'existe pas");
            fputs("Vous n'avez pas fait un choix valide", fichier); // ajout a lenregistrement final
            exit(2);
        }
    }
    else if (c == '2')
    {
        fputs("Vous avez choisi l'algorithme de Vigenere\n", fichier); // ajout a lenregistrement final

        viderBuffer();

        char *code;
        code = (char *)malloc(99 * sizeof(char));
        printf("Entrez votre cle: ");
        fgets(code, 99, stdin);                       // saisi et recuperer la cle de lutilisateur
        fputs("Vous avez saisi le code : ", fichier); // ajout a lenregistrement final
        fputs(code, fichier);

        printf("Chiffrement(1) ou Dechiffrement(2) : ");
        char c = getchar(); // saisi et recuperer le choix de lutilisateur entre chiffrer et dechiffrer le message
        if (c == '1')
        {
            fputs("Vous avez choisi de chiffrer\n", fichier); // ajout a lenregistrement final
            chiffrerVigenere(chr, code);
            fputs("Message chiffre : ", fichier); // ajout a lenregistrement final
            fputs(chr, fichier);
        }
        else if (c == '2')
        {
            fputs("Vous avez choisi de dechiffrer\n", fichier); // ajout a lenregistrement final
            dechiffrerVigenere(chr, code);
            fputs("Message dechiffre : ", fichier); // ajout a lenregistrement final
            fputs(chr, fichier);
        }
        else
        {
            printf("Ce choix n'existe pas");
            fputs("Vous n'avez pas fait un choix valide", fichier); // ajout a lenregistrement final
            exit(2);
        }
    }
    else
    {
        printf("Ce choix n'existe pas");
        fputs("Vous n'avez pas fait un choix valide", fichier); // ajout a lenregistrement final
        exit(2);
    }

    printf("Message final : ");
    printf(chr);

    printf("Message original : ");
    printf(original);

    fputs("----------FIN----------", fichier); // ajout a lenregistrement final
    fclose(fichier);                           // sauvegarder et fermer lenregistrement
    return 0;
}