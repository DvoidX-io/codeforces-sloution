#include <iostream>
using namespace std;

bool isSafe(int grid[9][9], int row ,int col, int num){
    // check row
    for(int x = 0; x <= 8; x++){
        if(grid[row][x] == num){
            return false;
        }
    }

    // check column
    for(int x = 0; x <= 8; x++){
        if(grid[x][col] == num){
            return false;
        }
    }

    // check 3x3 box
    int boxRow = row - row % 3;
    int boxCol = col - col % 3;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(grid[i + boxRow][j + boxCol] == num){
                return false;
            }
        }
    }

    return true;
}
bool solveSudoku(int grid[9][9]){
    int row, col;
    bool isEmpty = true;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(grid[i][j] == 0){
                row = i;
                col = j;
                isEmpty = false;
                break;
            }
        }
        if(!isEmpty){
            break;
        }
    }

    if(isEmpty){
        return true; // Sudoku solved
    }

    for(int num = 1; num <= 9; num++){
        if(isSafe(grid, row, col, num)){
            grid[row][col] = num;

            if(solveSudoku(grid)){
                return true;
            }

            grid[row][col] = 0; // backtrack
        }
    }
    

    return false; // trigger backtracking
}