#include<vector>
#include<queue>

using namespace std;

int dy[4] = {0,0,1,-1};
int dx[4] = {1,-1,0,0};

int solution(vector<vector<int> > maps)
{
    int n = maps.size();
    int m = maps[0].size();
    
    vector<vector<int>> visit(n,vector<int>(m,0));
    queue<pair<int,int>> q;
    q.push({0,0});
    visit[0][0] = 1;
    
    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        
        if(y == n - 1 && x == m - 1)
            return visit[y][x];
        
        for(int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            
            if(ny >= 0 && ny < n && nx < m && nx >= 0 && maps[ny][nx] == 1 && visit[ny][nx] == 0)
            {
                visit[ny][nx] = visit[y][x] + 1;
                q.push({ny,nx});
            }
        }
    }
    
    
        
    return -1;
}