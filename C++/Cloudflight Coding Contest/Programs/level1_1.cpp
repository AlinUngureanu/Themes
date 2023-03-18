#include <fstream>
#include <iostream>
#include <cstring>

using namespace std;

ifstream f("level1_1.in");

int main() {
	int N, i, j;
	char s[100];
	char boardMatrix[100][100];
	int coinCount = 0;
	f >> N;
	for (i = 0; i < N; i++) {
				f >> s;
				strcpy_s(boardMatrix[i],s);
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (boardMatrix[i][j] == 'C')
				coinCount++;
		}
	}
	cout << coinCount;
	f.close();
	return 0;
}