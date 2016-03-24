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


int main(void) {
	int board[3][3];
	int i, j, x, y;

	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
			board[i][j] = 0;
		}
	}
	
	print_board(board);

	x = get_coordinate("Enter the row: ");
	y = get_coordinate("Enter the column: ");

	cout << "You entered " << x << ", " << y << "\n";
}

