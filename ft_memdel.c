#include <stdlib.h>

void ft_memdel(void **ap)
{
    free(*ap);
    *ap = NULL;
}

int main()
{
    // Exemple d'utilisation avec un tableau d'entiers alloué dynamiquement
    int *intArray = (int *)malloc(5 * sizeof(int));
    if (intArray != NULL)
    {
        printf("Memory allocated successfully.\n");

        // Utilisez la mémoire allouée comme vous le feriez normalement

        // Libérez la mémoire à l'aide de votre fonction ft_memdel
        ft_memdel((void **)&intArray);

        // Vérifiez si la mémoire a été libérée en imprimant la valeur de intArray
        if (intArray == NULL)
        {
            printf("Memory freed successfully.\n");
        }
        else
        {
            printf("Memory not freed.\n");
        }
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
