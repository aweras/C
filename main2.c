#include <stdio.h>
#include <stdlib.h>


int main() 
{ 
	int secim,sayi1,sayi2;
	printf("HESAP MAKINASI\n");
	printf("***************\n\n");
	
	printf("sayi1: ");
	scanf("%d",&sayi1);
	printf("sayi2: ");
	scanf("%d",&sayi2);

	
	
	printf("1-Toplama\n");
	printf("2-Cikarma\n");
	printf("3-Carpma\n");
	printf("4-Bolme\n");
    printf("isleminizi seciniz: ");
	scanf("%d",&secim);
	
	switch(secim)
	{
	case 1:
	   printf("sonuc: %d",(sayi1+sayi2));
	break;
	case 2:
	   printf("sonuc: %d",(sayi1-sayi2));
	break;
	case 3:
	   printf("sonuc: %d",(sayi1*sayi2));
	break;
	case 4:
	   printf("sonuc: %d",(sayi1/sayi2));
	break;
	default:
	   printf("hatali giris");
	
	}
	
   
	    
	 


	
	
	return 0;
}
