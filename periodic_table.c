#include<stdio.h>

int main()
{
    int n;
    int m;
    int a;
    int Exit;
    int Exi;

    printf("Welcome to a Modern Periodic Table\n\n");

    printf("> Enter 1 to know about an element\n\n");
    printf("> Enter 2 tot close the periodic table\n\n");

    printf("ENTER\n");
    scanf("%id", &n);

    if(n==1)
    {
        printf("> Press 3 to search the element by atomic number\n\n");

        printf("ENTER\n");
        scanf("%d", &m);

        if(m==3)
        {
            printf("Enter the atomic number of the element to be searched : ");
            scanf("%d", &a);

            if(a==1)
            {
                printf("Name : Hydrogen\n");
                printf("Symbol : H");
                printf("Atomic Number : 1\n");
                printf("Electronic Configuration : 1s^1\n");
                printf("Discover By : Henry Cavendish\n");
                printf("Charge : +1\n");
            }
        }
    }
    else if(n==2)
    {
        
    }
}
