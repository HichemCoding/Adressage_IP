// Determine la classe d'une adresse IP et donne aussi l'@ réseau + @ de diffusion + masque

#include <stdio.h>

main()
{
    int a, b, c, d;

    printf("\nSaisir adresse IP : ");
    scanf("%d.%d.%d.%d", &a, &b, &c, &d);

    if (a >= 0 && a <= 127)
    {
        printf("\nCLASSE A");

        printf("\n\nAdresse reseau: %d.0.0.0", a);
        printf("\nAdresse masque de sous reseau (par defaut): 255.0.0.0");
        printf("\nAdresse diffusion: %d.255.255.255\n", a);
    }
    else if (a >= 128 && a <= 191)
    {
        printf("\nCLASSE B");

        printf("\n\nAdresse reseau: %d.%d.0.0", a, b);
        printf("\nAdresse masque de sous reseau (par defaut): 255.255.0.0");
        printf("\nAdresse diffusion: %d.%d.255.255\n", a, b);
    }
    else if (a >= 192 && a <= 223)
    {
        printf("\nCLASSE C");

        printf("\n\nAdresse reseau: %d.%d.%d.0", a, b, c);
        printf("\nAdresse masque de sous reseau (par defaut): 255.255.255.0");
        printf("\nAdresse diffusion: %d.%d.%d.255\n", a, b, c);
    }
    else if (a >= 224 && a <= 239)
    {
        printf("\nCLASSE D (multicast)");

        printf("\n\nAdresse reseau: %d.%d.%d.%d", a, b, c, d);
        printf("\nAdresse masque de sous reseau (par defaut): 255.255.255.255");
        printf("\nAdresse diffusion: %d.%d.%d.255\n", a, b, c);
    }
    else if (a >= 240 && a <= 255)
    {
        printf("\nCLASSE E (reservee)");

        printf("\n\nAdresse reseau: %d.%d.%d.%d", a, b, c, d);
        printf("\nAdresse masque de sous reseau (par defaut): NON DEFINIS");
        printf("\nAdresse diffusion: NON DEFINIS");
    }

    else
        printf("\nADRESSE NON VALIDE\n");
}