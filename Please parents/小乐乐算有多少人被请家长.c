#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0, q = 0, w = 0, e = 0, r = 0, t = 0;
	scanf("%d", &n);
	while (scanf("%d %d %d", &q, &w, &e) != EOF)
	{
		r = q + w + e;
		r /= 3;
		if (r < 60)
		{
			t++;
		}
	}
	printf("%d\n", t);
	return 0;
}