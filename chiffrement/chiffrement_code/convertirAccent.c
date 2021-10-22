#include "convertirAccent.h"
#include <string.h>

void accent(char car[])
{
    for (int i = 0; i <= strlen(car); i++)
    {
        car[i] = conv(car[i]);
    }
}

int conv(int car)
{
    // Si car est dans le jeux de caractères standard
    switch (car) // Pour les ...
    {
    case 'à': // ..'a' accentués
    case 'â':
        return 'a';
    case 'é': // ..'e' accentués
    case 'è':
    case 'ê':
    case 'ë':
        return 'e';
    case 'î': // ..'i' accentués
    case 'ï':
        return 'i';
    case 'ô': // ..'o' accentués
        return 'o';
    case 'ù': // ..'u' accentués
        return 'u';
        break;
    default: // Pour les autres
        return car;
        break;
    }
}