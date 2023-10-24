#include<stdio.h>
typedef struct complex
{
    int real;
    int complex;
}cmp;
void display(cmp c){
    printf("The real part is %d\n", c.real);
    printf("The imaginary part is %d\n", c.complex);
}
void main()
{
    cmp cnums[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %dth real number:", (i+1));
        scanf("%d", &cnums[i].real);

        printf("Enter the %dth complex number:", (i+1));
        scanf("%d", &cnums[i].complex);
    }
    for (int i = 0; i < 5; i++)
    {
        display(cnums[i]);
    }
    
}