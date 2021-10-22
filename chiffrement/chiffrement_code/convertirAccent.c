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
    // Si car est dans le jeux de caract�res standard
    switch (car) // Pour les ...
    {
    case '�': // ..'a' accentu�s
    case '�':
        return 'a';
    case '�': // ..'e' accentu�s
    case '�':
    case '�':
    case '�':
        return 'e';
    case '�': // ..'i' accentu�s
    case '�':
        return 'i';
    case '�': // ..'o' accentu�s
        return 'o';
    case '�': // ..'u' accentu�s
        return 'u';
        break;
    default: // Pour les autres
        return car;
        break;
    }
}