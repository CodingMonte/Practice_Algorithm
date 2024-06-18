#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	// 0 북, 1 동, 2 남, 3 서
	int dir = 0;
	int dr[4] = {-1, 0, 1, 0};
	int dc[4] = {0, 1, 0, -1};
	int y, x;
	cin >> y >> x >> dir;
	int count = 0;

	vector<vector<int>> map(n, vector<int>(m)); // 지도 만들기
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> map[i][j];

	while (1)
	{
		if (map[y][x] == 0)
		{
			map[y][x] = -1;
			count++;
		}

        int flag = 1;

        for(int i = 0; i < 4; i++)
        {
            dir = (dir + 3) % 4;
            int ny = y + dr[dir];
            int nx = x + dc[dir];
            if(ny >= 0 && ny < n && nx >= 0 && nx < m && map[ny][nx] == 0)
            {
                y = ny;
                x = nx;
                flag = 0;
                break;
            }
        }
		if (flag)
		{
			int ny = y - dr[dir];
			int nx = x - dc[dir];

			if (ny >= 0 && ny < n && nx >= 0 && nx < m && map[ny][nx] != 1)
			{
				y = ny;
                x = nx;
			}
			else
			{
				break;
			}
		}
	}

	cout << count;
	return 0;
}