#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
	int sayi;
	int binlikSayi;/*degiskenler tanimlanir*/
	int yuzlukSayi;
	int onlukSayi;
	int birlikSayi;
	char cevap='e';/*cevap degiskenine deger atamasi yapilir*/

	printf("\n\n");
	printf("================================ SAYI COZUMLEME ================================\n");
	/*do-while döngüsü ile kullanıcı 'e' dedigi müddetce cözümlemek icin kullanıcıdan yeni sayi almaya devam eder*/
	do
	{
		sayi=0;/*sayiyi 0 ladık çünkü girilen yeni degerin ideal bir deger girilmedigi müddetce tekrarını önlemek icin*/
 		printf("\nCozumlemek icin 4 haneli bir tam sayi giriniz: ");
		scanf("%d",&sayi);
		fflush(stdin);/*en son basılan enter karakterinin islevini ortadan kaldırmak icin*/
		printf("\n");
	
		if ((sayi>=1000 && sayi<=9999) || (sayi>=-9999 && sayi<=-1000))/*tam sayi dedigi icin eksili sayi araliginida dahil ettim*/
		{
			printf("Cozumlenecek sayi: %d",sayi);
			printf("\n\n");
			printf("Girilen sayi: %d",sayi);
			printf("\n\n");
			binlikSayi=sayi/1000;/*binlik adedini bulduran işlem*/
			printf("-> %d tane binlik sayi vardir.",binlikSayi);
			printf("\n");
			yuzlukSayi=(sayi%1000)/100;/*yüzlük adedini bulduran işlem*/
			printf("-> %d tane yuzluk sayi vardir.",yuzlukSayi);
			printf("\n");
			onlukSayi=(sayi%100)/10;/*onluk adedini bulduran işlem*/
			printf("-> %d tane onluk sayi vardir.",onlukSayi);
			printf("\n");
			birlikSayi=sayi%10;/*birlik adedini bulduran işlem*/
			printf("-> %d tane birlik sayi vardir.",birlikSayi);
			printf("\n");
			
		}
		/*Girilen deger 4 haneli bir tam sayi degilse else yapısına girer*/
		else
		{
			printf("Girmis oldugunuz deger 4 haneli bir tam sayi degildir.\n\n");
		}
		printf("Devam etmek istiyor musunuz?(devam-e): ");
		cevap=getche();/*'e' karakterini aldık*/
		fflush(stdin);/*en son basılan enter karakterinin islevini ortadan kaldırmak icin*/
		system("cls");/*her yeni sayi alındıgında ekranı temizlemek icin*/
	}while(cevap=='e');
	
	system("PAUSE");
}
