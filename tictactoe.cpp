#include "iostream"

void print_board(int board[3][3]) {
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			std::cout << " " << board[i][j];
		}
		std::cout << "\n";
	}
}

int main(void) {
	int board[3][3];
	int i, j;

	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
			board[i][j] = 0;
		}
	}
	
	print_board(board);
}

