/*
 Tic-Tac-Toe (3x3), minimal version:
  - Asks players for moves like "A2"
  - Updates and prints the board after each move
  - No validation (moves can overwrite), no win detection (added later)

  Coordinates: A..C for columns, 1..3 for rows.
  Mapping: "A1" -> [row=0][col=0], "C3" -> [2][2]
  Turns: even t = Player 1 ('X'), odd t = Player 2 ('Y')
  Input buffer: move[3] (2 chars + '\0'), read with "%2s"

  Author:      Kajetan Zelech-Alatarvas
  Date:        2025-09-07
*/

#include <stdio.h>                                                // Standard I/O functions: printf, scanf
int main(void)                                                   // Program entry point; `void` = takes no parameters (in C)
{


// Setting up variables

    int i;                                                          // i - Matrix VERTICAL parementer for the loop
    int j;                                                         // j - Matrix HORIZONTAL parementer for the loop
    char INPUT_1_ALL[3];                                          // 1 diamention array 0 = column, 1 = row, 2 = end sign \0
    int INPUT_1_COLUMN;                                          // Variable for column from user input
    int INPUT_1_ROW;                                            // Variable for row from user input
    int Ask_loop = 0;                                          // Variable for ASKING PLAYERS LOOP loop - starts with 0


// Setting up Matrix

    int Matrix [3][3];                                            // Creating Matrix 3 x 3


// Loop for filling in the Matrix with spaces: ' '
    for (int i = 0; i < 3; i++) {                                 //    Value for i = 0, #of iterations:2, each iteration i+1  ->
        for (int j = 0; j < 3; j++) {                             // -> Value for j = 0, #of iterations:2, each iteration i+1  ->
          Matrix[i][j] = ' ';                                     // -> Fill in element [i][j] with space
        }
    }



/* LOOP FOR ASKING PLAYERS for their input
 9 total moves on a 3x3 grid
*/
printf("\n************************************\n"); // Welcome Board
printf("*       Welcome to Tic-Tac-Toe      *\n");
printf("************************************\n");

    for (int Ask_loop = 0; Ask_loop < 10; Ask_loop++) {
            // Printing Matrix - Here it will be always repeated, without checking if Ask_loop % 2 == 0

            // Column header
            printf("    A    B    C \n\n");                                                      // ABC Title ROW
            printf("1   %c || %c || %c \n", Matrix[0][0], Matrix[0][1], Matrix[0][2]);          // Print the first row
            printf("    ==++===++==\n");                                                       // Print the rows separator 1
            printf("2   %c || %c || %c \n", Matrix[1][0], Matrix[1][1], Matrix[1][2]);        // Print the second row
            printf("    ==++===++==\n");                                                     // Print the rows separator 1
            printf("3   %c || %c || %c \n", Matrix[2][0], Matrix[2][1], Matrix[2][2]);      // Print the third row

        if (Ask_loop % 2 == 0) {
// Execute if Ask_loop % 2 =! 0 (PLAYER 1)
            // Asking for User Input
            printf("\nPLAYER 1: Please provide your move (format: A2)\n");
            // Read move as "A2" (no validation in this minimal version)
            scanf("%2s", INPUT_1_ALL); // spreading string to the 1 diamention array - Matrix

// Transforming Input to Matrix coordinates
                // COLUMNS
              if (INPUT_1_ALL[0] == 'A') {
                    INPUT_1_COLUMN = 0;
                } else if (INPUT_1_ALL[0] == 'B') {
                   INPUT_1_COLUMN = 1;
                } else if (INPUT_1_ALL[0] == 'C') {
                   INPUT_1_COLUMN = 2;
                } else {
                 printf("PLAYER 1: ERROR!!!\n");
                }
                // ROWS
              if (INPUT_1_ALL[1] == '1') {
                    INPUT_1_ROW = 0;
                } else if (INPUT_1_ALL[1] == '2') {
                   INPUT_1_ROW = 1;
                } else if (INPUT_1_ALL[1] == '3') {
                    INPUT_1_ROW = 2;
                } else {
                    printf("PLAYER 1: ERROR!!!\n");
                }
// Change to the Matrix based on the User input
            Matrix[INPUT_1_ROW][INPUT_1_COLUMN] = 'X';

// Execute if Ask_loop % 2 =! 0 (PLAYER 2)
            // Asking for User Input
           } else {
                printf("\nPLAYER 2: Please provide your move (format: A2)\n");
                // Read move as "A2" (no validation in this minimal version)
                scanf("%2s", INPUT_1_ALL); // spreading string to the 1 diamention array - Matrix

// Transforming Input to Matrix coordinates
                // COLUMNS
              if (INPUT_1_ALL[0] == 'A') {
                    INPUT_1_COLUMN = 0;
                } else if (INPUT_1_ALL[0] == 'B') {
                   INPUT_1_COLUMN = 1;
                } else if (INPUT_1_ALL[0] == 'C') {
                   INPUT_1_COLUMN = 2;
                } else {
                 printf("PLAYER 2: ERROR!!!\n");
                }
                // ROWS
              if (INPUT_1_ALL[1] == '1') {
                    INPUT_1_ROW = 0;
                } else if (INPUT_1_ALL[1] == '2') {
                   INPUT_1_ROW = 1;
                } else if (INPUT_1_ALL[1] == '3') {
                    INPUT_1_ROW = 2;
                } else {
                    printf("PLAYER 2: ERROR!!!\n");
                }
// Change to the Matrix based on the User input
            Matrix[INPUT_1_ROW][INPUT_1_COLUMN] = 'O';
            } // END OF: Execute if Ask_loop % 2 =! 0

 } // END OF: LOOP FOR ASKING PLAYERS for their input

    return 0;                                                    // Exit program with status code 0 (success)
}
