#include <stdio.h>
#include <stdlib.h>


int main()
{

    int dizi[100];
    int i,sayi,toplam;
    toplam=0;
    printf("Eleman Sayisi: ");
    scanf("%d",&sayi);
    
    for(i=0;i<sayi;i++)
    {
    	printf("Dizinin %d.degerini girin: ", i+1);
    	scanf("%d",&dizi[i]);
	}
	printf("\n\n");
	printf("Diziniz:");
	for(i=0;i<sayi;i++)
	{
		printf("%d ",dizi[i]);
	}

	printf("\n\n");
	printf("Dizinin Toplami: ");
	for(i=0;i<sayi;i++)
	{
		toplam=toplam+dizi[i];
	}
	printf("%d",toplam);
	printf("\n\n");
	
	printf("Dizinin Ortalamasi: %d",toplam/sayi);

	return 0;
}
