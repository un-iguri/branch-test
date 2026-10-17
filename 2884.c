#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int H, M, t, h, m;
	scanf("%d %d", &H, &M);
	if (H == 0)
		H = 24;
	if (M == 0)
		M = 60;
	t = H * 60 + M - 45;
	h = t / 60;
	m = t % 60;
	printf("%d %d", h, m);
}
// Git practice