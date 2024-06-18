#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;

	// 우, 하, 상, 좌
	int dr[4] = {0, 1, 0, -1};
	int dc[4] = {1, 0, -1, 0};
	int visit[100][100] = {0};
	int idx = 0;
	int row = 0;
	int col = 0;
	int count = 0;
	visit[row][col] = 1;

	while(1)
	{
		row += dr[idx];
		col += dc[idx];
		if (row < 0 || row >= n || col >= m || col < 0 || visit[row][col] == 1)
		{
			row -= dr[idx];
			col -= dc[idx];
			idx = (idx + 1) % 4;
			if (visit[row + dr[idx]][col + dc[idx]] == 1)
				break;
			count++;
		}
        else
        {
            visit[row][col] = 1;
        }
	}

	cout << count;
	return 0;
}