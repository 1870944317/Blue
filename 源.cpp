#include <stdio.h>
int main(void) {

	int x, n;
	scanf("%d%d", &x, &n);
	if (n > 32)n %= 32;
	int a, b = 1;
	int m = 1;
	for (int i = 1; i <= n; i++) {
		m *= 2;
	}
	a = x % m;
	//printf("%d\n",a);
	int p = 1, q = 1;
	for (int i = 1; i <= n; i++) {
		p *= 2; x = x&
	}
	p -= 1;
	for (int i = 1; i <= (32 - n); i++) {
		q *= 2;
	}
	if (x < 0) {
		x = x >> n;

	}
	else {
		x = x >> n;
	}
	//printf("%d\n",x);
	for (int i = 1; i <= (32 - n); i++) {
		b *= 2;
	}
	a = a * b;
	//printf("%d\n%d %d",x+a,m,b);
	printf("%d", x + a);

	return 0;
}