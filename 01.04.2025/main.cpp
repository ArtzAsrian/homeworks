#include <iostream>
using namespace std;
const int chap = 3;
char board[chap][chap] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
void dasht() {

    cout << "tic-tac" << endl;

    for (int i = 0; i < chap; i++) {
        for (int j = 0; j < chap; j++) {
            cout << " " << board[i][j] << " ";
            if (j < chap - 1) cout << "|"; 
        }
        cout << endl;
        if (i < chap - 1) cout << "---+---+---" << endl; 
        }
}
bool haxtanakstugum(char player) {
    for (int i = 0; i < chap; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||  
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {  
            return true;
        }
    }

    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) || 
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) { 
        return true;
    }
    return false; 
    
}

bool nichya() {
    for (int i = 0; i < chap; i++) {
        for (int j = 0; j < chap; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;
            }
        }
    }
    return true;
}

bool qayl(char player) {
    int move;
    cout << "xaxacox " << player << ", (1-9): ";
    cin >> move;

    if (move < 1 || move > 9) {
        cout << "sxa; qayl (1-9).\n";
        return false;
    }

    int row = (move - 1) / chap;
    int col = (move - 1) % chap;
    
    if (board[row][col] == 'X' || board[row][col] == 'O') {
        cout << "vandaky zbaxvace.\n";
        return false;
    }
    board[row][col] = player;
    return true;
}

int main() {
    char currentPlayer = 'X'; //arajixaxacox

    while (true) {
        dasht(); 
        if (qayl(currentPlayer)) {
            if (haxtanakstugum(currentPlayer)) { //haxtanak
                dasht();
                cout << "xaxacox" << currentPlayer << " haxtec!\n";
                break;
            }
            if (nichya()) { //nichya
                dasht();
                cout << "nichya!\n";
                break;
            }
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
    }

    return 0;
}
