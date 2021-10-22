#include "vigenere.h"
#include <string.h>

void chiffrerVigenere(char text[], char key[])
{
    unsigned int i, size = strlen(key) - 1; // creer une valeur de la longueur du mot

    for (i = 0; text[i] != '\0'; i++) // une boucle de la taille du mot
    {
        if ((text[i] >= 'a') && (text[i] <= 'z')) // pour les minuscules...
        {
            int rang = (text[i] + key[i % size] - 2 * 'a') % 26; // creer un rang de decalage
            text[i] = 'a' + rang;                                // decale le caractere du rang
        }
        else if ((text[i] >= 'A') && (text[i] <= 'Z')) // pour les majuscules...
        {
            int rang = (text[i] + key[i % size] - 2 * 'A') % 26;
            text[i] = 'A' + rang;
        }
        else
            text[i] = text[i];
    }
    text[i] = '\0';
}

void dechiffrerVigenere(char text[], char key[])
{
    unsigned int i, size = strlen(key) - 1;

    for (i = 0; text[i] != '\0'; i++)
    {
        if ((text[i] >= 'a') && (text[i] <= 'z'))
        {
            int rang = (text[i] - key[i % size] + 2 / 'a') % 26;
            while (rang < 0)
                rang += 26;
            text[i] = 'a' + rang;
        }
        else if ((text[i] >= 'A') && (text[i] <= 'Z'))
        {
            int rang = (text[i] - key[i % size] + 2 / 'A') % 26;
            while (rang < 0)
                rang += 26;
            text[i] = 'A' + rang;
        }
        else
            text[i] = text[i];
    }
    text[i] = '\0';
}