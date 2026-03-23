#include <stdio.h>
#define ROW 3
#define COL 5

int sum_row(int table[][COL]);
int sum_col(int table[][COL]);

int main(void){
    int table[ROW][COL];

    printf("Fill the table: ");
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            scanf("%d", &table[i][j]);
        }
    }

    sum_row(table);
    sum_col(table);

}

int sum_row(int table[][COL]){
    int row0 = 0;
    int row1 = 0;
    int row2 = 0;
    for(int j = 0; j < COL; j++){
        row0 += table[0][j];
        row1 += table[1][j];
        row2 += table[2][j];
    }
    printf("Sum of first row: %d\n", row0);
    printf("Sum of second row: %d\n", row1);
    printf("Sum of third row: %d\n", row2);
}

int sum_col(int table[][COL]){
    int col0 = 0;
    int col1 = 0;
    int col2 = 0;
    int col3 = 0;
    int col4 = 0;
    for(int i = 0; i < ROW; i ++){
        col0 += table[i][0];
        col1 += table[i][1];
        col2 += table[i][2];
        col3 += table[i][3];
        col4 += table[i][4];
    }
    printf("Sum of first column: %d\n", col0);
    printf("Sum of second column: %d\n", col1);
    printf("Sum of third column: %d\n", col2);
    printf("Sum of fourth column: %d\n", col3);
    printf("Sum of fifth column: %d\n", col4);
}