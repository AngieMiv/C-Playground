#include <stdio.h>

int factorial_r(int num) {
	if (num < 0)
		return 0;
	if (num == 0)
		return 1;
	return num * factorial_r(num - 1);
}

int factorial_i(int num) {
	if (num < 0)
		return 0;
	else if (num == 0)
		return 1;
	else {
		int resultado = 1;
		int aux = num - 1;
		while(aux > 1) {
			resultado = resultado * aux;
			aux--;
		}
		return resultado;
	}
}

int factorial_i_j(int num) {
	if (num < 0)
		return 0;

	int resultado = 1;
	while (num > 0) {
		resultado = resultado * num;
		num = num - 1;
	}
	return resultado;
}

int factorial_i_j2(int num) {
	if (num < 0)
		return 0;

	int resultado = num;
	while (--num > 0)
		resultado *= num;
	return resultado;
}

int main() {
	printf("recursiva: %d\n", factorial_r(5));
	printf("iterativa: %d\n", factorial_i(5));
	printf("iterativa: %d (J)\n", factorial_i_j(5));
	printf("iterativa: %d (J2)\n", factorial_i_j2(5));

	return 0;
}
