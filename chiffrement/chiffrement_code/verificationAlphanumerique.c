#include "verificationAlphanumerique.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int verificationAlphanumerique(char text[])
{
    unsigned int i;

    for (i = 0; i < strlen(text) - 1; i++)
    {
        if (((text[i] >= 'a') && (text[i] <= 'z')) || ((text[i] >= 'A') && (text[i] <= 'Z'))) // verifie si le caractere est entre a et z
        {
            return 1;
        }
        else // Sinon...
        {
            // verifie si le caractere est un caractere accentue
            switch (text[i]) // Pour les ...
            {
            case '�': // ..'a' accentu�s
            case '�':
            case '�': // ..'e' accentu�s
            case '�':
            case '�':
            case '�':
            case '�': // ..'i' accentu�s
            case '�':
            case '�': // ..'o' accentu�s
            case '�':
                return 1; // ..'u' accentu�s // Sortie TRUE
                break;
            default:
                // Pour les autres
                return 0;
                break;
            }
        }
        return 0;
    }
    return 1;
}