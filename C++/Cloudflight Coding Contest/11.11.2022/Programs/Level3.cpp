#include <fstream>
#include <iostream>
#include <cstring>

using namespace std;

ifstream f("level3.in");

struct ghosts {
	int ghostRow;
	int ghostColumn;
	int sequenceLength;
	char movement[1005];
} g[100];

int main() {
	int N, i, j, pacmanRow, pacmanColumn, sequenceLength, boardfrequency[100][100], numberOfGhosts;
	int survivedStatus = 1;
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
	f >> numberOfGhosts;
	for (i = 0; i < numberOfGhosts; i++) {
		f >> g[i].ghostRow >> g[i].ghostColumn>>g[i].sequenceLength>>g[i].movement;
	}
	for (i = 0; i <= sequenceLength && survivedStatus == 1; i++) {
		int r = pacmanRow;
		int c = pacmanColumn;
		for (j = 0; j < numberOfGhosts; j++) {
			if (g[j].ghostRow == r && g[j].ghostColumn == c)
				survivedStatus = 0;
		}
		if (survivedStatus == 1) {
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
			for (j = 0; j < numberOfGhosts; j++) {
				if (g[j].movement[i] == 'U')
					g[j].ghostRow--;
				else {
					if (g[j].movement[i] == 'D')
						g[j].ghostRow++;
					else {
						if (g[j].movement[i] == 'R')
							g[j].ghostColumn++;
						else {
							if (g[j].movement[i] == 'L')
								g[j].ghostColumn--;
						}
					}
				}
			}
		}
	}
	int r = pacmanRow;
	int c = pacmanColumn;
	for (j = 0; j < numberOfGhosts; j++) {
		if (g[j].ghostRow == r && g[j].ghostColumn == c)
			survivedStatus = 0;
	}
	if (survivedStatus == 1)
		cout << coinCount << " YES";
	else
		cout << coinCount << " NO";
	f.close();
	return 0;
}