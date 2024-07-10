#include <stdio.h>
#include <math.h>

float calc_area_circulo(float r);
float calc_area_anel(float r_int, float r_ext);
float calc_massa_arruela(float d1, float d2, float H, float rho);

    int main()
{
    float d1, d2, H, rho, massa;
    int quant;

    printf("Entre com o diâmetro interno (cm): ");
    scanf("%f", &d1);
    printf("Entre com o diâmetro externo (cm): ");
    scanf("%f", &d2);
    printf("Entre com a espessura (cm): ");
    scanf("%f", &H);
    printf("Entre com a densidade (g/cm³): ");
    scanf("%f", &rho);
    printf("Entre com o número de arruelas: ");
    scanf("%d", &quant);
    massa = calc_massa_arruela(d1, d2, H, rho);
    printf("Massa total: %.2f g", massa*quant);
    return 0;
}


float calc_area_circulo(float r){
    return M_PI*(pow(r, 2.0));
}

float calc_area_anel(float r_int, float r_ext){
    return calc_area_circulo(r_ext)-calc_area_circulo(r_int);
}

float calc_massa_arruela(float d1, float d2, float H, float rho){
    float v = calc_area_anel((d1/2), (d2/2))*H;
    return rho * v;
}