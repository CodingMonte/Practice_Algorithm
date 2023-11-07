#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves)
{
	int answer = 0;
	stack<int> basket;
    basket.push(0);

	for (int m : moves)
	{
		m--;
		for (int i = 0; i < board.size(); i++)
		{
			if (board[i][m] == 0)
				continue;
			else
			{
                if(basket.top() == board[i][m])
                {
                    answer+=2;
                    basket.pop();
                }
                else
                    basket.push(board[i][m]);
				board[i][m] = 0;
				break;
			}
		}
	}
	return answer;
}