#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void printGrid(const vector<vector<int>>& grid) {
    for (const auto& row : grid) {
        for (const auto& num : row) {
            if (num == 0) {
                cout << "   "; 
            } else {
                cout << num << " ";
                if (num < 10) cout << " ";  
            }
        }
        cout << endl;
    }
}

pair<int, int> findPosition(const vector<vector<int>>& grid, int value) {
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            if (grid[i][j] == value) {
                return {i, j};
            }
        }
    }
    return {-1, -1}; 
}
bool isSolved(const vector<vector<int>>& grid) {
    int expected = 1;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            if (i == grid.size() - 1 && j == grid[i].size() - 1) {
                return grid[i][j] == 0;
            }
            if (grid[i][j] != expected) {
                return false;
            }
            ++expected;
        }
    }
    return true;
}


bool moveTile(vector<vector<int>>& grid, char move) {
    pair<int, int> emptyPos = findPosition(grid, 0);
    int x = emptyPos.first;
    int y = emptyPos.second;

    if (move == 'w' && x > 0) {
        swap(grid[x][y], grid[x-1][y]);
    } else if (move == 's' && x < grid.size() - 1) {
        swap(grid[x][y], grid[x+1][y]);
    } else if (move == 'a' && y > 0) {
        swap(grid[x][y], grid[x][y-1]);
    } else if (move == 'd' && y < grid[x].size() - 1) {
        swap(grid[x][y], grid[x][y+1]);
    } else {
        return false;  
    }
    return true;  
}


void shuffleGrid(vector<vector<int>>& grid) {
    srand(time(0));
    for (int i = 0; i < 100; ++i) {
        char moves[] = {'w', 's', 'a', 'd'};
        char move = moves[rand() % 4];
        moveTile(grid, move);
    }
}

int main() {
    vector<vector<int>> grid = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 0}
    };

    shuffleGrid(grid);

    while (true) {
        printGrid(grid);
        if (isSolved(grid)) {
            cout << "Selamat! Anda telah menyelesaikan puzzle." << endl;
            break;
        }

        cout << "Gunakan WASD untuk menggeser angka: ";
        char move;
        cin >> move;

        if (!moveTile(grid, move)) {
            cout << "Gerakan tidak valid!" << endl;
        }
    }

    return 0;
}