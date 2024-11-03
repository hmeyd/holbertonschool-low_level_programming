#include "main.h"
/**
 * cap_string - prints a string in reverse
 *
 * @str: l'array à afficher en sens inverse
 * Return:le string
 */
char *leet(char *str)
{
    int i, j;
    char letters[] = "aAeEoOtTlL";
    char leet[] = "430071";

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; letters[j] != '\0'; j++)
        {
            if (str[i] == letters[j])
            {
                str[i] = leet[j / 2];
                break;
            }
        }
    }

    return str;
}
