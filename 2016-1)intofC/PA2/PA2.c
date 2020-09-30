#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
	int card[NUM_SUITS][NUM_RANKS] = { 0 };
	int r[NUM_RANKS+1] = { 0 };
	int s[NUM_SUITS] = { 0 };
	int rank, suit, num = 7, i, j, k = 0, st=0, stf=0, top=0;
	const char rank_code[] = { 'A','2','3','4','5','6','7','8','9','t','J','Q','K' };
	srand((int)time(NULL));

	while (num > 0) {
		suit = rand() % NUM_SUITS;
		rank = rand() % NUM_RANKS;
		if (card[suit][rank] == 0) {
			card[suit][rank] = 1;
			num--;
			switch (suit) {
			case 0: printf("Clover ");
				break;
			case 1: printf("Diamond ");
				break;
			case 2: printf("Heart ");
				break;
			case 3: printf("Spade ");
				break;
			}
			if (rank == 9) printf("10");
			else if (rank != 9) printf("%c", rank_code[rank]);
			if (num > 0) printf(", ");
			else if (num == 0)printf("\n");
		}

	}

	for (j = 0; j <= 3; ++j) {
		for (i = 0; i <= 12; ++i) {
			r[i] += card[j][i];
			}
	}
	
	for (i = 0; i <= 12; ++i) {
		for (j = 0; j <=  3; ++j) {
			s[j] += card[j][i];
		}
	}

	if (r[0] >= 1) {
		r[13] = 1;
		for (i = 0; i <= 9; ++i) {
			if ((r[i] >= 1) && (r[i + 1] >= 1) && (r[i + 2] >= 1) && (r[i + 3] >= 1) && (r[i + 4] >= 1)) {
				if ((card[0][i] == 1) && (card[0][i + 1] == 1) && (card[0][i + 2] == 1) && (card[0][i + 3] == 1) && (card[0][i + 4] == 1)) { stf = 1; break; }
				else if ((card[1][i] == 1) && (card[1][i + 1] == 1) && (card[1][i + 2] == 1) && (card[1][i + 3] == 1) && (card[1][i + 4] == 1)) { stf = 1; break; }
				else if ((card[2][i] == 1) && (card[2][i + 1] == 1) && (card[2][i + 2] == 1) && (card[2][i + 3] == 1) && (card[2][i + 4] == 1)) { stf = 1; break; }
				else if ((card[3][i] == 1) && (card[3][i + 1] == 1) && (card[3][i + 2] == 1) && (card[3][i + 3] == 1) && (card[3][i + 4] == 1)) { stf = 1; break; }
				else { st = 1; break; }
			}
		}
	}
	else if (r[0] == 0) {
		for (i = 0; i <= 8; ++i) {
			if ((r[i] >= 1) && (r[i + 1] >= 1) && (r[i + 2] >= 1) && (r[i + 3] >= 1) && (r[i + 4] >= 1)) {
				if ((card[0][i] == 1) && (card[0][i + 1] == 1) && (card[0][i + 2] == 1) && (card[0][i + 3] == 1) && (card[0][i + 4] == 1)) { stf = 1; break; }
				else if ((card[1][i] == 1) && (card[1][i + 1] == 1) && (card[1][i + 2] == 1) && (card[1][i + 3] == 1) && (card[1][i + 4] == 1)) { stf = 1; break; }
				else if ((card[2][i] == 1) && (card[2][i + 1] == 1) && (card[2][i + 2] == 1) && (card[2][i + 3] == 1) && (card[2][i + 4] == 1)) { stf = 1; break; }
				else if ((card[3][i] == 1) && (card[3][i + 1] == 1) && (card[3][i + 2] == 1) && (card[3][i + 3] == 1) && (card[3][i + 4] == 1)) { stf = 1; break; }
				else { st = 1; break; }
			}
		}
	}

	for (i = 13; i >= 1; --i) {
		if (r[i] == 1) { top = i;  break; }
	}

	for (i = 0; i <= 12; ++i) {
		if (r[0] >= r[i]);
		else { r[0] = r[i]; k = i; }
	}
	
	for (j = 1; j <= 12; ++j) {
		if (j != k) { r[1] = r[1] >= r[j] ? r[1] : r[j]; }
	}

	for (i = 1; i <= 3; ++i) {
		s[0] = s[0] >= s[i] ? s[0] : s[i];
	}

	if (stf) { printf("Straight Flush\n"); }
	else if ((r[0] <= 7) && (r[0] >= 4)) {printf("Four of a kind\n");}
	else if ((r[0] == 3) && ((r[1] == 2) || (r[1] == 3))) { printf("Full House\n"); }
	else if (s[0] >= 5) { printf("Flush\n"); }
	else if (st) { printf("Straight\n"); }
	else if (r[0] == 3) { printf("Three of a kind\n"); }
	else if (r[0] == 2) {
		if (r[1] == 2) { printf("Two pair\n"); }
		else { printf("One pair\n"); }
	}
	else {
		if (top == 9) { printf("10 Top\n"); }
		else if (top == 13) { printf("A Top\n"); }
		else { printf("%c Top\n", rank_code[top]); }
	}
	return 0;
}