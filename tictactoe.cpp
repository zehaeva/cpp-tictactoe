#include <iostream>
#include <string>

using namespace std;

class Board {
		int board[3][3];

	public:
		Board() {
			for (int i=0;i<3;i++) {
				for (int j=0;j<3;j++) {
					board[i][j] = 0;
				}
			}
		}
		void print() {
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
		void set(int x, int y, int value) {
			board[x][y] = value;
		}
		int get(int x, int y) {
			return board[x][y];
		}

		bool game_won() {
			bool won = false;
			for (int i=0;i<3;i++) {
				if (board[i][0] != 0 && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
					won = true;
					break;
				} else if (board[0][i] != 0 && board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
					won = true;
					break;
				} 
			}
			if (board[0][0] != 0 && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
				won = true;
			} else if (board[0][2] != 0 && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
				won = true;
			}

			return won;
		}
};

int get_coordinate(string prompt) {
	int x;

	cout << prompt;
	cin >> x;

	return x;
}


int main(void) {
	Board board;
	int i, j, x, y;

	bool turn = true;
	bool running = true;

	while (running) {
		board.print();

		x = get_coordinate("Enter the row: ");
		y = get_coordinate("Enter the column: ");

		if (board.get(x, y) == 0) {
			if (turn) {
				board.set(x, y, 1);
			} else {
				board.set(x, y, 2);
			}

			if (board.game_won()) {
				cout << "Congratulations ";
				switch (turn) {
					case true:
						cout << "X";
						break;
					case false:
						cout << "O";
						break;
				}
				cout << "! You've won!\n";
				board.print();
				running = false;
			}

			turn = !turn;
		}
		else {
			cout << "That space isn't free! Pick another one!";
		}
	}
}
