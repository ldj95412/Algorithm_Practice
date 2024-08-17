#include <queue>
#include <string>
#include <vector>

using namespace std;

struct Point //S나 L나 E의 특수한 공간의 위치를 반환
{
	int y, x, cnt;
};

int dy[4] = { -1,0,1,0 }; // 상하의 증감값을 표현
int dx[4] = { 0, 1, 0, -1 }; // 좌우의 증감값을 표현
int n, m; // row와 col을 표현

bool isWithinRange(int y, int x) { return 0 <= y && y < n && 0 <= x && x < m; }//21. 상하좌우로 이동했을 시, 배열의 range에 들어가는지 검사

Point findStartPoint(char start, vector<string>& maps)
{
	for (int i = 0; i < n; i++) // 7.maps의 row만큼 반복
	{
		for (int j = 0; j < m; j++) // 8.maps의 col 만큼 반복
		{
			if (maps[i][j] == start) // 9.start를 검출했다면
			{
				return { i,j,0 }; //10.start의 위치를 반환
			}
		}
	}
}

int bfs(char start, char end, vector<string>& maps)
{
	bool visited[101][101] = { false }; // 4. 방문한 곳들을 이력으로 남기는 배열
	queue<Point> q; // 5. bfs를 진행하기 위한 queue 선언

	q.push(findStartPoint(start, maps)); // 6. queue에 start 위치를 push해주기

	while (!q.empty()) //11. q가 다 빌때까지 반복
	{
		Point current = q.front(); //12. q의 front를 기준으로 최근 포인트를 저장
		q.pop(); //13. current로 저장을 했으니 빼주기

		if (maps[current.y][current.x] == end) //14. 현재 위치가 도착점이면
		{
			return current.cnt; //15. 현재 위치의 cnt를 반환
		}

		for (int i = 0; i < 4; i++) // 16. 4번 반복? 아...! 상하좌우를 for문으로 표현
		{
			int ny = current.y + dy[i]; // 17. 현재위치의 y좌표와 증분y축의 값을 더해 위와 아래를 ny에 넣기
			int nx = current.x + dx[i]; // 18. 현재위치의 x좌표와 증분x축의 값을 더해 좌측과 우측을 nx에 넣기
			// 19. i를 순서대로 하면 위, 오른쪽, 아래, 왼쪽

			if (isWithinRange(ny, nx) && !visited[ny][nx] && maps[ny][nx] != 'X') // 20. 배열 내부에 들어 있는 값인지, 방문한 적이 없는지,  X가 아닌지 다 조건에 적합하다면, q에 푸쉬한다.
			{
				q.push({ ny,nx,current.cnt + 1 }); // 22. count를 1 증가시킨 채 이동한 좌표를 푸쉬해준다.
				visited[ny][nx] = true; // 23. 방문했다는 위치를 갱신
			}
		}
	}
	return -1; // 24. E를 찾지 못했다면 마지막 위치 반환
}

int solution(vector<string> maps)
{
	n = maps.size(); // 1. row
	m = maps[0].size(); // 2. col

	int distanceToL = bfs('S', 'L', maps); // 3. Start 부터 End까지 가는 거리를 cnt로 환산했을 때, bfs 함수를 이용
	if (distanceToL == -1) return -1; // 25. bfs가 -1이 되어 돌아왔다면, 목표를 찾지 못했다는 뜻이므로 -1을 리턴

	int distanceToE = bfs('L', 'E', maps); // 26. bfs 함수를 다시 목표만 바꾸어 호출
	return distanceToE == -1 ? -1 : distanceToL + distanceToE; // 27. -1이 돌아왔다면 -1을, 제대로 카운팅 되었다면 두개의 변수를 합침
}
