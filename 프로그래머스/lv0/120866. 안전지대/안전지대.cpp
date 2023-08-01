#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    for(int i = 0; i < board.size(); i++)
        for(int j = 0; j < board[0].size();j++)
            if(board[i][j] == 1)
                for(int x = i - 1; x <= i + 1;x++)
                    for(int y = j - 1; y <= j + 1; y++)
                        if(board[x][y] == 0 && x < board.size() && y < board[0].size())
                            board[x][y] = 2;

    for(int i = 0; i < board.size(); i++)
        for(int j = 0; j < board[0].size();j++)
            if(board[i][j] == 0)
                answer++;
    return answer;
}