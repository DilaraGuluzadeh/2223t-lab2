/*Daire Alanı ve Çevresini Hesaplayan C Programı*/
 
#include<stdio.h>
#include <locale.h>
#define PI 3.14
 int main()
 {
 	setlocale(LC_ALL, "Turkish");
 	float r, alan, cevre;
    printf("Yarıçap: ");
    scanf("%f", &r);
    alan = PI * r * r;
    cevre= 2 * PI * r;
    printf("Alan: %f", alan);
    printf("\nÇevre: %f", cevre);
    return 0;
    
 }
