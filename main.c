#include <stdio.h>
#include <stdlib.h>



int main() {
	
    char ad;
    float boy,yas,ideal,kilo,x;
    int sx;
    printf("**ideal kilo hesaplama**\n\n");
    
	printf("Boyunuzu Giriniz: ");
    scanf("%f",&boy);
    
    printf("Yasinizi Giriniz: ");
    scanf("%f",&yas);
    
    printf("Kilonuzu Giriniz: ");
    scanf("%f",&kilo);
    
    printf("1-Erkek\n2-Kadin\n");
    printf("Cinsiyetinizi Seciniz:");
    scanf("%d",&sx);
    

	if(sx==1){
	
	ideal=(boy-100+yas/10)*0.9;
    x=kilo-ideal;
    printf("\n");
    
    
    printf("ideal kilonuz: %f\n",ideal);
    if (ideal<kilo)
	{
		printf("ideal kilonuza ulasabilmek icin %f kilo vermelisiniz",x);
	}
    else
	{
		x=-x;
		printf("ideal kilonuza ulasabilmek icin %f kilo almalisiniz",x);
	} }
	
	else{
	
	ideal=(boy-100+yas/10)*0.8;
    x=kilo-ideal;
    printf("\n");
    
    
    printf("ideal kilonuz: %f\n",ideal);
    if (ideal<kilo)
	{
		printf("ideal kilonuza ulasabilmek icin %f kilo vermelisiniz",x);
	}
    else
	{
		x=-x;
		printf("ideal kilonuza ulasabilmek icin %f kilo almalisiniz",x);
	} }

    
    
    
	
	return 0;
	
}
