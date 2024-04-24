#include <stdio.h>

int main()
{
    float p1, p2, p3, r1, r2, r3, freq;

    printf("Informe p1, p2, p3, r1, r2, r3 e frequência");
    scanf("%f", p1);

    return 0;
}

float max(float x, float y)
{
    return x > y ? x : y;
}

float media(float x, float y, float z)
{
    return (x + y + z) / 3;
}