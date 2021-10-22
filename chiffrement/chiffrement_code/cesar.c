#include "cesar.h"

//chiffrement d'un message avec la methode Cesar
void chiffrerCesar(char str[], int cle)
{
    int i;

    //une boucle ou on compare les characteres afin d'ajouter a leur valeur le decalage demande
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        { // le caractere est une majuscule
            char c = str[i] - 'A';
            c += cle;
            c = c % 26;

            str[i] = c + 'A';
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        { // le caractere est une minuscule
            char c = str[i] - 'a';
            c += cle;
            c = c % 26;
            str[i] = c + 'a';
        }
    }
}

void dechiffrerCesar(char str[], int cle)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] -= 'A';
            str[i] -= cle;
            while (str[i] < 0)
                str[i] += 26;
            str[i] = str[i] % 26;
            str[i] = str[i] + 'A';
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 'a';
            str[i] -= cle;
            while (str[i] < 0)
                str[i] += 26;
            str[i] = str[i] % 26;
            str[i] = str[i] + 'a';
        }
    }
}
