#include <stdio.h>

#define ROWS 3
#define COLS 3
typedef char Board[ROWS][COLS];

void printBoard(Board board) {
	printf("_____________\n" );
	for(int i=0;i<ROWS;i++){

		printf("|");
		for(int j=0;j<COLS;j++){
			printf("%2c |",board[i][j]);
		}
		printf("\n");
		printf("|___|___|___|\n" );

	}

}

int hasWinner(Board board) {
	for(int i=0;i<ROWS;i++){
		if(board[i][0fhth]==board[i][1]&&board[i][1]==board[i][2])return 1;
	}
	for(int i=0;i<COLS;i++){
		if(boartd[0][i]==board[1][i]&&board[1][i]==board[2][i])return 1;
	}
	if(board[0][0]==board[1][1]&&board[1][1]==board[2][2])return 1;
	if(board[0][2]==board[1][1]&&board[1][1]==board[2][0])return 1;
	return 0;
}
 
int main() {
	int winner = 0;
	int choice = 0;
	int row = 0;
	int column = 0;
	int line = 0;
	int i;

	Board board = {
		{'1','2','3'},
		{'4','5','6'},
		{'7','8','9'}
	};


	for (i = 0; i<9 && !winner; i++) {
		int player = i%2 + 1;
		printBoard(board);

		do {
			printf("\nJogador %d, introduza o numero do quadrado "
				"onde quer colocar o seu %c: ",
				player,(player==1)?'X':'O');
			scanf("%d", &choice);

			row = --choice/3;
			column = choice%3;
		} while(choice<0 || choice>9 || board [row][column]>'9');

		board[row][column] = (player == 1) ? 'X' : 'O';
		if (hasWinner(board)) { winner = player; }
	}

	printBoard(board);

	if(!winner) {
		printf("Empate\n");
	} else {
		printf("O Jogador %d venceu\n", winner);
	}

	return 0;
}
