#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "russia");
	int a, b;
	float div;
	scanf_s("%d %d", &a, &b);
	if (b == 0) {
		printf("Плохо");
	}
	else {
		div = a / b;
		printf("%f", div);
    }
	system("pause");
	return 0;
}