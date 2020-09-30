#include<stdio.h>
int main(void)
{
	int x;
	char a = '4';
	char b = '3';
	char c = '8';
	char d = ' ';
	char e = '7';
	char f = '5';
	char g = '1';
	char h = '2';
	char i = '6';
	int aa = 4;
	int bb = 3;
	int cc = 8;
	int dd = 0;
	int ee = 7;
	int ff = 5;
	int gg = 1;
	int hh = 2;
	int ii = 6;
	printf("+---+---+---+\n");
	printf("| %c | %c | %c |\n", a, b, c);
	printf("+---+---+---+\n");
	printf("| %c | %c | %c |\n", d, e, f);
	printf("+---+---+---+\n");
	printf("| %c | %c | %c |\n", g, h, i);
	printf("+---+---+---+\n");
	
	while ((a != '1') || (b != '2') || (c != '3') ||(d != '4') || (e != '5') || (f != '6') || (g != '7') || (h != '8') || (i != ' ')) {
		printf("Enter a block number:");
		scanf_s("%d", &x);
		if (x <= 0 || x >= 9) {
			printf("Invalid block number!\n");
		}
		else if (x == aa) {
			if (b == ' ') {
				b ^= a; a ^= b; b ^= a;
				bb ^= aa; aa ^= bb; bb ^= aa;
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", a, b, c);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", d, e, f);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", g, h, i);
				printf("+---+---+---+\n");
			}
			else if (d == ' ') {
				d ^= a; a ^= d; d ^= a;
				dd ^= aa; aa ^= dd; dd ^= aa;
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", a, b, c);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", d, e, f);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", g, h, i);
				printf("+---+---+---+\n");

			}
			else {
				printf("Invalid block number!\n");

			}
		}
		else if (x == bb) {
			if (a == ' ') {
				a ^= b; b ^= a; a ^= b;
				aa ^= bb; bb ^= aa; aa ^= bb;
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", a, b, c);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", d, e, f);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", g, h, i);
				printf("+---+---+---+\n");
			}
			else if (c == ' ') {
				c ^= b; b ^= c; c ^= b;
				cc ^= bb; bb ^= cc; cc ^= bb;
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", a, b, c);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", d, e, f);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", g, h, i);
				printf("+---+---+---+\n");
			}
			else if (e == ' ') {
				e ^= b; b ^= e; e ^= b;
				ee ^= bb; bb ^= ee; ee ^= bb;
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", a, b, c);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", d, e, f);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", g, h, i);
				printf("+---+---+---+\n");
			}
			else {
				printf("Invalid block number!\n");
			}
		}
		else if (x == cc) {
			if (b == ' ') {
				b ^= c; c ^= b; b ^= c;
				bb ^= cc; cc ^= bb; bb ^= cc;
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", a, b, c);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", d, e, f);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", g, h, i);
				printf("+---+---+---+\n");
			}
			else if (f == ' ') {
				f ^= c; c ^= f; f ^= c;
				ff ^= cc; cc ^= ff; ff ^= cc;
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", a, b, c);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", d, e, f);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", g, h, i);
				printf("+---+---+---+\n");
			}
			else {
				printf("Invalid block number!\n");
			}
		}
		else if (x == dd) {
			if (a == ' ') {
				a ^= d; d ^= a; a ^= d;
				aa ^= dd; dd ^= aa; aa ^= dd;
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", a, b, c);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", d, e, f);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", g, h, i);
				printf("+---+---+---+\n");
			}
			else if (e == ' ') {
				e ^= d; d ^= e; e ^= d;
				ee ^= dd; dd ^= ee; ee ^= dd;
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", a, b, c);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", d, e, f);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", g, h, i);
				printf("+---+---+---+\n");
			}
			else if (g == ' ') {
				g ^= d; d ^= g; g ^= d;
				gg ^= dd; dd ^= gg; gg ^= dd;
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", a, b, c);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", d, e, f);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", g, h, i);
				printf("+---+---+---+\n");
			}
			else {
				printf("Invalid block number!\n");
			}
		}
		else if (x == ee) {
			if (b == ' ') {
				b ^= e; e ^= b; b ^= e;
				bb ^= ee; ee ^= bb; bb ^= ee;
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", a, b, c);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", d, e, f);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", g, h, i);
				printf("+---+---+---+\n");
			}
			else if (d == ' ') {
				d ^= e; e ^= d; d ^= e;
				dd ^= ee; ee ^= dd; dd ^= ee;
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", a, b, c);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", d, e, f);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", g, h, i);
				printf("+---+---+---+\n");
			}
			else if (f == ' ') {
				f ^= e; e ^= f; f ^= e;
				ff ^= ee; ee ^= ff; ff ^= ee;
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", a, b, c);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", d, e, f);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", g, h, i);
				printf("+---+---+---+\n");
			}
			else if (h == ' ') {
				h ^= e; e ^= h; h ^= e;
				hh ^= ee; ee ^= hh; hh ^= ee;
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", a, b, c);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", d, e, f);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", g, h, i);
				printf("+---+---+---+\n");
			}
			else {
				printf("Invalid block number!\n");
			}
		}
		else if (x == ff) {
			if (c == ' ') {
				c ^= f; f ^= c; c ^= f;
				cc ^= ff; ff ^= cc; cc ^= ff;
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", a, b, c);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", d, e, f);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", g, h, i);
				printf("+---+---+---+\n");
			}
			else if (e == ' ') {
				e ^= f; f ^= e; e ^= f;
				ee ^= ff; ff ^= ee; ee ^= ff;
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", a, b, c);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", d, e, f);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", g, h, i);
				printf("+---+---+---+\n");
			}
			else if (i == ' ') {
				i ^= f; f ^= i; i ^= f;
				ii ^= ff; ff ^= ii; ii ^= ff;
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", a, b, c);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", d, e, f);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", g, h, i);
				printf("+---+---+---+\n");
			}
			else {
				printf("Invalid block number!\n");
			}
		}
		else if (x == gg) {
			if (d == ' ') {
				d ^= g; g ^= d; d ^= g;
				dd ^= gg; gg ^= dd; dd ^= gg;
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", a, b, c);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", d, e, f);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", g, h, i);
				printf("+---+---+---+\n");
			}
			else if (h == ' ') {
				h ^= g; g ^= h; h ^= g;
				hh ^= gg; gg ^= hh; hh ^= gg;
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", a, b, c);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", d, e, f);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", g, h, i);
				printf("+---+---+---+\n");
			}
			else {
				printf("Invalid block number!\n");
			}
		}
		else if (x == hh) {
			if (g == ' ') {
				g ^= h; h ^= g; g ^= h;
				gg ^= hh; hh ^= gg; gg ^= hh;
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", a, b, c);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", d, e, f);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", g, h, i);
				printf("+---+---+---+\n");
			}
			else if (e == ' ') {
				e ^= h; h ^= e; e ^= h;
				ee ^= hh; hh ^= ee; ee ^= hh;
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", a, b, c);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", d, e, f);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", g, h, i);
				printf("+---+---+---+\n");
			}
			else if (i == ' ') {
				i ^= h; h ^= i; i ^= h;
				ii ^= hh; hh ^= ii; ii ^= hh;
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", a, b, c);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", d, e, f);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", g, h, i);
				printf("+---+---+---+\n");
			}
			else {
				printf("Invalid block number!\n");
			}
		}
		else if (x == ii) {
			if (f == ' ') {
				f ^= i; i ^= f; f ^= i;
				ff ^= ii; ii ^= ff; ff ^= ii;
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", a, b, c);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", d, e, f);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", g, h, i);
				printf("+---+---+---+\n");
			}
			else if (h == ' ') {
				h ^= i; i ^= h; h ^= i;
				hh ^= ii; ii ^= hh; hh ^= ii;
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", a, b, c);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", d, e, f);
				printf("+---+---+---+\n");
				printf("| %c | %c | %c |\n", g, h, i);
				printf("+---+---+---+\n");
			}
			else {
				printf("Invalid block number!\n");
			}
		}
	}

	if ((a == '1') && (b == '2') && (c == '3') && (d == '4') && (e == '5') && (f == '6') && (g == '7') && (h == '8') && (i == ' ')) { printf("*****Congratulations!*****\n"); }
	return 0;
}