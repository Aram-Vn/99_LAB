#include <iostream>

void dfs(int tmp[][4], int i, int j, int rows, int columns);

int main() {

 const int rows = 5;
 const int columns = 4;
 int grid[rows][columns]; 

    for(int i = 0; i < rows; ++i){
		for(int j = 0; j < columns; ++j){
            std::cin >> grid[i][j];
        }
    }

 std::cout << "OK" << std::endl;

 int numIslands = 0;
 int tmp[rows][columns];
   
	 for(int i = 0; i < rows; ++i){
		for(int j = 0; j < columns; ++j){
			tmp[i][j] = grid[i][j];
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if(tmp[i][j] == 1){
                numIslands++;
                dfs(tmp, i, j, rows, columns);
            }
        }
    }

    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < columns; ++j){
            std::cout << grid[i][j] << " ";
		}
		std::cout << std::endl; 
    }
    std::cout << numIslands << std::endl;
}

void dfs(int tmp[][4], int i, int j, int rows, int columns) {
    if (i < 0 || j < 0 || i >= rows || j >= columns || tmp[i][j] == 0) {
        return;
    }

    tmp[i][j] = 0; // Mark the cell as visited

    dfs(tmp, i - 1, j, rows, columns);
    dfs(tmp, i + 1, j, rows, columns);
    dfs(tmp, i, j - 1, rows, columns);
    dfs(tmp, i, j + 1, rows, columns);
}

