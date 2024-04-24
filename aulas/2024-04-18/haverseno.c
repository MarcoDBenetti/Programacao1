#include <stdio.h>
#include <math.h>

const float RAIO_TERA = 6371.0;

float hav(float theta)
{
    float h;
    h = pow(sin(theta / 2.0), 2.0);
    return h;
}

float graus2rad(float graus)
{
    float rad;
    rad = graus * M_PI / 180.0;
    return rad;
}

float distancia_na_terra(float lat1, float lon1, float lat2, float lon2)
{
    float d, a;
    lat1 = graus2rad(lat1);
    lon1 = graus2rad(lon1);
    lat2 = graus2rad(lat2);
    lon2 = graus2rad(lon2);
    a = hav(lat2 - lat1) + cos(lat1) * cos(lat2) * hav(lon2 - lon1);
    d = 2 * RAIO_TERA * asin(sqrt(a));
    return d;
}

int main()
{
    float lat1, lon1, lat2, lon2, dist;

    printf("Entre com lat lon do ponto 1: ");
    scanf("%f %f", &lat1, &lon1);
    printf("Entre com lat lon do ponto 2: ");
    scanf("%f %f", &lat2, &lon2);
    dist = distancia_na_terra(lat1, lon1, lat2, lon2);
    printf("Distância de %gKm entre od pontos.\n", dist);
    return 0;
}