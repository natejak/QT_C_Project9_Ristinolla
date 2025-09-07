/*
 * Description: XXXXXXXXXX
 * Author:      Kajetan Zelech-Alatarvas
 * Date:        2025-09-07
 */

#include <stdio.h>                                                // Standard I/O functions: printf, scanf

int main(void)                                                    // Program entry point; `void` = takes no parameters (in C)
{


    // Setting up variables

    int i;                                                        // i - Matrix VERTICAL parementer for the loop
    int j;                                                        // j - Matrix HORIZONTAL parementer for the loop


    // Setting up Matrix

    int Matrix [3][3];                                            // Creating Matrix 3 x 3


    // Loop for filling in the Matrix with spaces: ' '
    for (int i = 0; i < 3; i++) {                                 //    Value for i = 0, #of iterations:2, each iteration i+1  ->
        for (int j = 0; j < 3; j++) {                             // -> Value for j = 0, #of iterations:2, each iteration i+1  ->
          Matrix[i][j] = ' ';                                     // -> Fill in element [i][j] with space
    }
    }

    // Asking player ONE for a move:'
    char INPUT_1_ALL[3];        // 1 diamention array 0 = column, 1 = row, 2 = end sign \0
    int INPUT_1_COLUMN;        // Variable for column from user input
    int INPUT_1_ROW;          // Variable for row from user input

    int PLAYER_Number;
    int Ask_loop = 0;

        for (int Ask_loop = 0; Ask_loop < 10; Ask_loop++) {
          if (Ask_loop % 2 == 0) {
              printf("Iteracja %d: zachowanie A\n", Ask_loop);

                printf("    A    B    C \n\n");                                                       // ABC Title ROW
                printf("1   %c || %c || %c \n", Matrix[0][0],Matrix[0][1],Matrix[0][2]);          // Print the first row
                printf("    ==++===++==\n");                                                     // Print the rows separator 1
                printf("2   %c || %c || %c \n", Matrix[1][0],Matrix[1][1],Matrix[1][2]);        // Print the second row
                printf("    ==++===++==\n");                                                   // Print the rows separator 1
                printf("3   %c || %c || %c \n", Matrix[2][0],Matrix[2][1],Matrix[2][2]);      // Print the third row

                printf("\nPLAYER 1: Please provide your move (format: A2)\n");
                scanf("%2s", INPUT_1_ALL); // spreading string to the 1 diamention array

                    if (INPUT_1_ALL[0] == 'A') {
                        // jeśli spełniony warunek1
                        INPUT_1_COLUMN = 0;
                    } else if (INPUT_1_ALL[0] == 'B') {
                        // jeśli spełniony warunek2
                        INPUT_1_COLUMN = 1;
                    } else if (INPUT_1_ALL[0] == 'C') {
                        // jeśli spełniony warunek2
                        INPUT_1_COLUMN = 2;
                    } else {
                        // jeśli żaden warunek nie jest spełniony
                        printf("PLAYER 1: ERROR!!!\n");
                    }

                    if (INPUT_1_ALL[1] == '1') {
                        // jeśli spełniony warunek1
                        INPUT_1_ROW = 0;
                    } else if (INPUT_1_ALL[1] == '2') {
                        // jeśli spełniony warunek2
                        INPUT_1_ROW = 1;
                    } else if (INPUT_1_ALL[1] == '3') {
                        // jeśli spełniony warunek2
                        INPUT_1_ROW = 2;
                    } else {
                        // jeśli żaden warunek nie jest spełniony
                        printf("PLAYER 1: ERROR!!!\n");

                 Matrix[INPUT_1_ROW][INPUT_1_COLUMN] = 'X';
           } else {
              printf("Iteracja %d: zachowanie B\n", i);

                printf("    A    B    C \n\n");                                                       // ABC Title ROW
                printf("1   %c || %c || %c \n", Matrix[0][0],Matrix[0][1],Matrix[0][2]);          // Print the first row
                printf("    ==++===++==\n");                                                     // Print the rows separator 1
                printf("2   %c || %c || %c \n", Matrix[1][0],Matrix[1][1],Matrix[1][2]);        // Print the second row
                printf("    ==++===++==\n");                                                   // Print the rows separator 1
                printf("3   %c || %c || %c \n", Matrix[2][0],Matrix[2][1],Matrix[2][2]);      // Print the third row

                printf("\nPLAYER 1: Please provide your move (format: A2)\n");
                scanf("%2s", INPUT_1_ALL); // spreading string to the 1 diamention array

                    if (INPUT_1_ALL[0] == 'A') {
                        // jeśli spełniony warunek1
                        INPUT_1_COLUMN = 0;
                    } else if (INPUT_1_ALL[0] == 'B') {
                        // jeśli spełniony warunek2
                        INPUT_1_COLUMN = 1;
                    } else if (INPUT_1_ALL[0] == 'C') {
                        // jeśli spełniony warunek2
                        INPUT_1_COLUMN = 2;
                    } else {
                        // jeśli żaden warunek nie jest spełniony
                        printf("PLAYER 1: ERROR!!!\n");
                    }

                    if (INPUT_1_ALL[1] == '1') {
                        // jeśli spełniony warunek1
                        INPUT_1_ROW = 0;
                    } else if (INPUT_1_ALL[1] == '2') {
                        // jeśli spełniony warunek2
                        INPUT_1_ROW = 1;
                    } else if (INPUT_1_ALL[1] == '3') {
                        // jeśli spełniony warunek2
                        INPUT_1_ROW = 2;
                    } else {
          }
}
 }
    // Modification in the Matrix


    // Printing the Matrix


    printf("\nPLAYER 2: Please provide your move (format: A2)\n");
    scanf("%2s", INPUT_1_ALL); // spreading string to the 1 diamention array

          if (INPUT_1_ALL[0] == 'A') {
              // jeśli spełniony warunek1
              INPUT_1_COLUMN = 0;
          } else if (INPUT_1_ALL[0] == 'B') {
              // jeśli spełniony warunek2
              INPUT_1_COLUMN = 1;
          } else if (INPUT_1_ALL[0] == 'C') {
              // jeśli spełniony warunek2
              INPUT_1_COLUMN = 2;
          } else {
              // jeśli żaden warunek nie jest spełniony
              printf("PLAYER 1: ERROR!!!\n");
          }

          if (INPUT_1_ALL[1] == '1') {
              // jeśli spełniony warunek1
              INPUT_1_ROW = 0;
          } else if (INPUT_1_ALL[1] == '2') {
              // jeśli spełniony warunek2
              INPUT_1_ROW = 1;
          } else if (INPUT_1_ALL[1] == '3') {
              // jeśli spełniony warunek2
              INPUT_1_ROW = 2;
          } else {
              // jeśli żaden warunek nie jest spełniony
              printf("PLAYER 1: ERROR!!!\n");
          }
    // Modification in the Matrix
       Matrix[INPUT_1_ROW][INPUT_1_COLUMN] = 'Y';




    return 0;                                                    // Exit program with status code 0 (success)
}
