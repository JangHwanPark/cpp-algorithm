// BFS
#include <bits/stdc++.h>
using namespace std;
// pair에서 first, second를 줄여서 쓰기 위해서 사용
#define X first
#define Y second

int board[502][502] =
        {{1,1,1,0,1,0,0,0,0,0},
         {1,0,0,0,1,0,0,0,0,0},
         {1,1,1,0,1,0,0,0,0,0},
         {1,1,0,0,1,0,0,0,0,0},
         {0,1,0,0,0,0,0,0,0,0},
         {0,0,0,0,0,0,0,0,0,0},
         {0,0,0,0,0,0,0,0,0,0} };
bool visited[502][502];
int n = 7, m = 10;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0 ,-1};

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<pair<int, int> > Q;
    visited[0][0] = 1;
    Q.push(pair<int, int>(0,0));

    while(!Q.empty()) {
        pair<int, int> cur = Q.front(); Q.pop();
        cout << '(' << cur.X << ", " << cur.Y << ") -> ";

        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (visited[nx][ny] || board[nx][ny] != 1) continue;

            visited[nx][ny] = 1;
            Q.push(pair<int, int>(nx, ny));
        }
    }
}