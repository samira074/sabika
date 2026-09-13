#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, root1, root2;

    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d >= 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else
    {
        printf("Roots are complex.");
    }

    return 0;
}
