#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
int main()
{
    int fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

    //  O_WRONLY : Constante indiquant à la fonction open() que le fichier doit être ouvert en mode écriture seulement
    //  O_CREAT : Constante indiquant à la fonction open() de créer le fichier s'il n'existe pas déjà
    //  O_TRUNC : Constante indiquant à la fonction open() de tronquer le fichier à une longueur de zéro dès son ouverture
    //  S_IRUSR : Constante représentant les permissions de lecture pour le propriétaire du fichier
    //  S_IWUSR : Constante représentant les permissions d'écriture pour le propriétaire du fichier

    if (fd == -1) {
        perror("Error");
        return 1;
    }

    char character = 'A';
    ft_putchar_fd(character, fd);
    printf("character '%c' printed\n", character);

    close(fd);

    return 0;
}
