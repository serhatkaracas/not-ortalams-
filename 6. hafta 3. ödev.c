#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	int Odev1=0,Odev2=0,Odev3=0;
	int Quiz1=0,Quiz2=0,Quiz3=0;
	int Arasinav1=0,Arasinav2=0;
	int Final=0;
	
	float OdevOrt=0,QuizOrt=0,ArasinavOrt=0,FinalOrt=0,Dersnotu=0;
	printf("1., 2. ve 3. Odev notlarini sirayla giriniz\n");
	scanf("%d",&Odev1);
	scanf("%d",&Odev2);
	scanf("%d",&Odev3);
	OdevOrt=((float)Odev1+(float)Odev2+(float)Odev3)*0.03;
	
	printf("1., 2. ve 3. quiz notlarini sirayla giriniz\n");
	scanf("%d %d %d",&Quiz1,&Quiz2,&Quiz3);
	QuizOrt=((float)Quiz1+(float)Quiz2+(float)Quiz3)*0.07;
	
	printf("1. ve 2. Ara sinav notlarini sirayla giriniz\n");
	scanf("%d %d",&Arasinav1,&Arasinav2);
	ArasinavOrt=((float)Arasinav1+(float)Arasinav2)*0.15;

	printf("Final notunu giriniz\n");
	scanf("%d",&Final);
	FinalOrt=(float)Final*0.4;
	
	Dersnotu=OdevOrt+QuizOrt+ArasinavOrt+FinalOrt;
	printf("Ders notu %.2f",Dersnotu);

	return 0;
}
