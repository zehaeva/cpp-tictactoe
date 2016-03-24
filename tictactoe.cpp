#include "iostream"

void print_board(int board[3][3]) {
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			switch (board[i][j]) {
				case 0:
					std::cout << "_";
					break;
				case 1:
					std::cout << "X";
					break;
				case 2:
					std::cout << "O";
					break;
			}
			std::cout << " ";
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

