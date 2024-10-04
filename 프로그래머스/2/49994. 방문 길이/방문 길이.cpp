#include <string>
#include <set>
#include<tuple>

using namespace std;

int dy[4] = {0,0,-1,1};
int dx[4] = {1,-1,0,0};


int solution(string dir){
    int answer = 0;
    int y = 0, x = 0;
    set<tuple<int, int, int, int>> visited;
    
    for(int i = 0; i < dir.size();i++)
    {
        int ny, nx;
        if(dir[i] == 'R')
        {
            ny = y + dy[0];
            nx = x + dx[0];
            
        }
        else if(dir[i] == 'L')
        {
            ny = y + dy[1];
            nx = x + dx[1];
        }
        else if(dir[i] == 'D')
        {
            ny = y + dy[2];
            nx = x + dx[2];
        }
        else
        {
            ny = y + dy[3];
            nx = x + dx[3];
        }
        
        if(ny > 5 || ny < -5 || nx > 5 || nx < -5)
            continue;
        
        if(visited.find(make_tuple(x,y,nx,ny)) == visited.end())
        {
            visited.insert(make_tuple(x,y,nx,ny));
            visited.insert(make_tuple(nx,ny,x,y));
            answer++;
        }
        x = nx;
        y = ny;
    }
    return answer;
}