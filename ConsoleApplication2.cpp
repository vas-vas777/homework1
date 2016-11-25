#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<conio.h>
int main()
{
	unsigned char t, n, i, a, sdvig, aa, sdvig2, d, tt, gamma;
	char *s, *s1, *s2;
	printf_s("Quantity of symbols n=");
	scanf_s("%hhu", &n);
	printf_s("enter str ");
	s =(char*) malloc(n * sizeof(char));
	for (unsigned char i = 0; i < n; i++)
	{
		s[i] = getchar();
	}
	s1 =(char*) malloc(n * sizeof(char));
	s2 =(char*) malloc(n * sizeof(char));
	srand(time(NULL));
	for (unsigned char i = 0; i < n; i++)
	{
		gamma = rand() % 80;
		tt = (unsigned char)s[i];
		t = gamma ^ tt;
		a = t;
		printf_s("gamma=%hhu tt=%hhu t=%hhu \n", gamma, tt, t);
		sdvig = (a >> 4) | (t << 4);
		s1[i] = (char)sdvig;
		aa = sdvig;
		
		sdvig2 = (sdvig<<4) | (aa>>4);
		d = gamma^sdvig2;
		s2[i] = (char)d;
		printf_s("sdvig=%hhu sdvig2=%hhu d=%hhu\n", sdvig, sdvig2, d);
	}
	printf_s("encrypted str ");
	for (unsigned char i = 0; i < n; i++)
		putchar(s1[i]);
	printf_s("\n\n");
	printf_s("decrypted str ");
	for (unsigned char i = 0; i < n; i++)
		putchar(s2[i]);
	free(s);
	free(s1);
	free(s2);
	_getch();
}



	