#include <fstream>
#include <iostream>
#include <cstring>

using namespace std;

ifstream f("level4.in");

int main() {
	int N, i, j, pacmanRow, pacmanColumn, boardfrequency[100][100];
	int maxMovementSequenceLength = 25000;
	char s[100], movement[1005];
	char boardMatrix[100][100];
	char movementSequence[100];
	int coinCount = 0;
	f >> N;
	for (i = 0; i < N; i++) {
		f >> s;
		strcpy_s(boardMatrix[i], s);
	}
	f >> pacmanRow >> pacmanColumn;
	f >> movement;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			boardfrequency[i][j] = 0;
		}
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (boardMatrix[i][j] == 'C')
				coinCount++;
		}
	}
	for()
	for (i = 0; i < sequenceLength; i++) {
		if (boardMatrix[pacmanRow - 1][pacmanColumn - 1] == 'C' && boardfrequency[pacmanRow - 1][pacmanColumn - 1] == 0) {
			coinCount++;
			boardfrequency[pacmanRow - 1][pacmanColumn - 1] = 1;
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
	cout << movementSequence;
	f.close();
	return 0;
}