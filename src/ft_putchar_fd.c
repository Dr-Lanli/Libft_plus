#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

/*#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
int main()
{
    int fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

    //  O_WRONLY : Constante indiquant � la fonction open() que le fichier doit �tre ouvert en mode �criture seulement
    //  O_CREAT : Constante indiquant � la fonction open() de cr�er le fichier s'il n'existe pas d�j�
    //  O_TRUNC : Constante indiquant � la fonction open() de tronquer le fichier � une longueur de z�ro d�s son ouverture
    //  S_IRUSR : Constante repr�sentant les permissions de lecture pour le propri�taire du fichier
    //  S_IWUSR : Constante repr�sentant les permissions d'�criture pour le propri�taire du fichier

    if (fd == -1) {
        perror("Error");
        return 1;
    }

    char character = 'A';
    ft_putchar_fd(character, fd);
    printf("character '%c' printed\n", character);

    close(fd);

    return 0;
}*/
