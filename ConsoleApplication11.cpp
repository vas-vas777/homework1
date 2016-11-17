#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<stdio.h>

int main()
{
	unsigned char s,  b, v, k, d, v2, v3, dd, n, f;
	unsigned char t;
	char cc;
	scanf_s("%c", &cc);
	f = (signed char)(cc);
	srand((int)time(NULL));
	t = rand() % 50;
	b = t^f;
	k = b;
	s = b;
	s = s << 4;
	k = k >> 4;
	v = s | k;
	v2 = v;
	v3 = v;
	v2 = v2 >> 4;
	v3 = v3 << 4;
	dd = v2 | v3;
	d = dd^t;
	printf_s("t=%hhu b=%hhu\n", t, b);
	printf_s("v=%hhu\n", v);
	printf_s("d=%c", d);
	_getch();
	return 0;
}
