/*Girilen Sayının Tek mi Çift mi Olduğunu Bulan C Program*/
#include<stdio.h>
#include <locale.h>
 
 int main()
 {
 	setlocale(LC_ALL, "Turkish");
 	int sayi;
    printf("SayÄ±: ");
    scanf("%d",&sayi);
    
    if( sayi%2 == 0 )
        printf("%d Ã§ift sayÄ±dÄ±r.",sayi);
    else
        printf("%d tek sayÄ±dÄ±r.",sayi);
    return 0;
    
 }