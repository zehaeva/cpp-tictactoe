#include "iostream"

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

int main(void) {
	int board[3][3];
	int i, j, x, y;

	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
			board[i][j] = 0;
		}
	}
	
	print_board(board);

	cout << "Enter the row: ";
	cin >> x;
	cout << "Enter the column: ";
	cin >> y;

	cout << "You entered " << x << ", " << y << "\n";
}

