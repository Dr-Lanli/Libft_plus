#include <stdlib.h>

int nb_len(int n)
{
    int i;
    int total_len;
    char str_len[20];

    i = 0;
    total_len = 0;
    if (n < 0)
    {
        n = -n;
        while (n > 0)
        {
            str_len[i++] = n % 10 + '0';
            n /= 10;
            total_len++;
        }
    }
    else if (n > 0)
    {
        while (n > 0)
        {
            str_len[i++] = n % 10 + '0';
            n /= 10;
            total_len++;
        }
    }
    return (total_len);
}

int positive_conversion(int n, int i, char *str_nb)
{
    while (n > 0)
    {
        str_nb[i++] = n % 10 + '0'; // Convertit le chiffre en caractère ASCII
        n /= 10;
    }
    str_nb[i] = '\0'; // Ajout du caractère de fin de chaîne
    return (i);
}

int negative_conversion(int n, int i, char *str_nb)
{
    n = -n;
    while (n > 0)
    {
        str_nb[i++] = n % 10 + '0'; // Convertit le chiffre en caractère ASCII
        n /= 10;
    }
    str_nb[i] = '-';
    str_nb[++i] = '\0'; // Ajout du caractère de fin de chaîne
    return (i);
}

void invert_str(int i, char *str_nb)
{
    char temp;
    int j;

    j = 0;
    i--;
    while (j < i)
    {
        temp = str_nb[j];
        str_nb[j] = str_nb[i];
        str_nb[i] = temp;
        j++;
        i--;
    }
}

char *ft_itoa(int n)
{
    char *str_nb;
    int i;
    int len;

    len = nb_len(n);
    str_nb = (char *)malloc((len) * sizeof(char));
    if (str_nb == NULL)
        return NULL;

    i = 0;
    if (n < 0)
    {
        i = negative_conversion(n, i, str_nb);
    }
    else if (n > 0)
    {
        i = positive_conversion(n, i, str_nb);
    }
    invert_str(i, str_nb);
    return (str_nb);
}
#include <stdio.h>
int main()
{
    int n = -2147483647;

    printf("value : %s\n", ft_itoa(n));
}

