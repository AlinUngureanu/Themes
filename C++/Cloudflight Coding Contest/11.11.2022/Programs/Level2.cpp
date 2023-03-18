#include <fstream>
#include <iostream>
#include <cstring>

using namespace std;

ifstream f("level2.in");

int main() {
	int N, i, j, pacmanRow, pacmanColumn, sequenceLength,boardfrequency[100][100];
	char s[100], movement[1005];
	char boardMatrix[100][100];
	int coinCount = 0;
	f >> N;
	for (i = 0; i < N; i++) {
		f >> s;
		strcpy_s(boardMatrix[i], s);
	}
	f >> pacmanRow >> pacmanColumn >> sequenceLength;
	f >> movement;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			boardfrequency[i][j] = 0;
		}
	}
	for (i = 0; i < sequenceLength; i++) {
		if (boardMatrix[pacmanRow-1][pacmanColumn-1] == 'C' &&  boardfrequency[pacmanRow-1][pacmanColumn-1] == 0) {
			coinCount++;
			boardfrequency[pacmanRow-1][pacmanColumn-1] = 1;
		}
		if (movement[i] == 'U')
			pacmanRow--;
		else {
			if (movement[i] == 'D')
				pacmanRow++;
			else {
				if (movement[i] == 'R')
					pacmanColumn++;
				else {
					if (movement[i] == 'L')
						pacmanColumn--;
				}
			}
		}
	}
	cout << coinCount;
	f.close();
	return 0;
}