#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Lit un fichier texte et l'affiche sur la sortie standard POSIX.
 * @filename: Le nom du fichier à lire.
 * @letters: Le nombre de lettres à lire et afficher.
 *
 * Retourne : Le nombre réel de lettres qu'il a pu lire et afficher, ou 0 si :
 * - le fichier ne peut pas être ouvert ou lu,
 * - `filename` est NULL,
 * - ou si `write` échoue ou n'écrit pas le nombre attendu d'octets.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    char *buffer;
    ssize_t bread, bwriten;

    if (filename == NULL)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buffer = malloc(letters);
    if (buffer == NULL)
    {
        close(fd);
        return (0);
    }

    bread = read(fd, buffer, letters);
    if (bread == -1)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    bwriten = write(STDOUT_FILENO, buffer, bread);
    if (bwriten == -1 || bwriten != bread)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    free(buffer);
    close(fd);

    return (bwriten);
}

