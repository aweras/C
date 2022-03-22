#include <stdio.h>
#include <stdlib.h>


int main() 
{
	/*int en,boy,i,j;
	printf("En Degeri: ");
	scanf("%d",&en);
	printf("Boy Degeri: ");
	scanf("%d",&boy);
	
	for(i=1;i<=boy;i++)
	{
		for(j=1;j<=en;j++)
		{
			printf("*");
		}
		printf("\n");
	}*/
	
	/*int i,j,taban;
	printf("Taban Degerini girin: ");
	scanf("%d",&taban);
	
	for(i=1;i<=taban;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}*/
	
	


 /*   
     °      5 bosluk 1 yýldýz 1. adim
    °°°     4 bosluk 3 yýldýz 2. adim
   °°°°°    3 bosluk 5 yýldýz 3. adim
  °°°°°°°   2 bosluk 7 yýldýz 4. adim
 °°°°°°°°°  1 bosluk 9 yýldýz 5. adim
°°°°°°°°°°°° 0 bosluk 11yýldýz 6. adim
!!Her basamak ''(Adim-1)'' adet bosluk + ''(adim-1)*2+1'' tane yildizdan olusur!!
*/

int h,adim,bosluk,yildiz;
printf("*****Eskenar Ucgen Olusturma Robotu*****\n");
printf("Ucgenin Yuksekligini Giriniz: ");
scanf("%d",&h);

for(adim=1;adim<=h;adim++)
{
     for(bosluk=h;bosluk>=adim;bosluk--)//bosluk koyma yeri
      {
            printf(" ");
       }
      for(yildiz=1;yildiz<=(adim-1)*2+1;yildiz++)//yildiz koyma yeri
      {
            printf("*");
      }
 
printf("\n");
}

	
	return 0;
}
