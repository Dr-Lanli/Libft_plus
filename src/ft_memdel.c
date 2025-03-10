#include <stdlib.h>

void ft_memdel(void **ap)
{
    free(*ap);
    *ap = NULL;
}

/*int main()
{
    // Exemple d'utilisation avec un tableau d'entiers allou� dynamiquement
    int *intArray = (int *)malloc(5 * sizeof(int));
    if (intArray != NULL)
    {
        printf("Memory allocated successfully.\n");

        // Utilisez la m�moire allou�e comme vous le feriez normalement

        // Lib�rez la m�moire � l'aide de votre fonction ft_memdel
        ft_memdel((void **)&intArray);

        // V�rifiez si la m�moire a �t� lib�r�e en imprimant la valeur de intArray
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
}*/
