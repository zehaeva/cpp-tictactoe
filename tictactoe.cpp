#include <iostream>
#include <string>

using namespace std;

void print_board(int board[3][3]) {
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			switch (board[i][j]) {
				case 0:
					cout << "_";
					break;
				case 1:
					cout << "X";
					break;
				case 2:
					cout << "O";
					break;
			}
			cout << " ";
		}
		cout << "\n";
	}
}

int get_coordinate(string prompt) {
	int x;

	cout << prompt;
	cin >> x;

	return x;
}

bool game_won(int board[3][3]) {
	bool won = false;
	for (int i=0;i<3;i++) {
		if (board[i][0] != 0 && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
			won = true;
		} else if (board[0][i] != 0 && board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
			won = true;
		}
	}

	return won;
}

int main(void) {
	int board[3][3];
	int i, j, x, y;

	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
			board[i][j] = 0;
		}
	}

	bool turn = true;
	bool running = true;

	while (running) {
	
		print_board(board);

		x = get_coordinate("Enter the row: ");
		y = get_coordinate("Enter the column: ");

		if (turn) {
			board[x][y] = 1;
		} else {
			board[x][y] = 2;
		}

		if (game_won(board)) {
			cout << "Congratulations ";
			switch (turn) {
				case true:
					cout << "X";
				case false:
					cout << "O";
			}
			cout << "! You've won!\n";
			running = false;
		}

		turn = !turn;
	}
}
