
#include "dz.1"
int main() {
	int n = 5;
	int m = 5;
	int** mas;
	mas = new int* [n];
	for (int i = 0; i < n; i++) {
		mas[i] = new int[m];
	}
	randm(mas, n, m);
	darand(mas, n, m);
	cout << endl << "summa nechet = " << slozen(mas, n, m);
}