 /*
 * Tic-Tac-Toe Game in C
 * Two player console game
 */

#include <stdio.h>
#include <stdlib.h>

char board[3][3];
char PLAYER_X = 'X';
char PLAYER_O = 'O';

// Initialize the board with numbers 1-9
void init_board() {
    int k = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // We store numbers as characters for display
            board[i][j] = k + '0'; 
            k++;
        }
    }
}

// Display the board
void print_board() {
    printf("\n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

// Check for a win
// Returns: 1 if win, 0 otherwise
int check_win() {
    // Rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return 1;
    }
    // Columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return 1;
    }
    // Diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return 1;

    return 0;
}

// Insert move
int make_move(int choice, char player) {
    int row, col;
    
    if (choice < 1 || choice > 9) return 0;

    // Logic to map 1-9 to row/col
    row = (choice - 1) / 3;
    col = (choice - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = player;
        return 1;
    }
    return 0;
}

int main() {
    int move;
    int turn = 0; // 0 for Player X, 1 for Player O
    int total_moves = 0;
    char current_player;

    init_board();

    printf("--- tic-tac-toe C Game ---\n");

    while (total_moves < 9) {
        print_board();
        
        current_player = (turn % 2 == 0) ? PLAYER_X : PLAYER_O;
        printf("Player %c, enter position (1-9): ", current_player);
        
        if (scanf("%d", &move) != 1) {
            while(getchar() != '\n'); // flush buffer
            printf("Invalid input. Try again.\n");
            continue;
        }

        if (make_move(move, current_player)) {
            if (check_win()) {
                print_board();
                printf("Congratulations! Player %c wins!\n", current_player);
                return 0;
            }
            turn++;
            total_moves++;
        } else {
            printf("Invalid move or cell already taken. Try again.\n");
        }
    }

    print_board();
    printf("It's a Draw!\n");

    return 0;
}
