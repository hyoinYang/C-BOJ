#include <iostream>
#include <vector>
#include <set>
#include <queue>
using namespace std;

#define INF 987654320

int dist[1001];
vector<pair<int, int>> graph[1001];
int ans, n, m;
int start, dest;

void dijkstra(int start) {
    priority_queue<pair<int, int>> pq;

    dist[start] = 0;
    pq.push({ 0, start });

    while (!pq.empty()) {
        int cur_dist = -pq.top().first;
        int cur_node = pq.top().second;
        pq.pop();

        if (cur_dist > dist[cur_node])
            continue;

        for (auto& edge : graph[cur_node]) {
            int nxt_node = edge.first;
            int nxt_dist = cur_dist + edge.second;

            if (nxt_dist < dist[nxt_node]) {
                dist[nxt_node] = nxt_dist;
                pq.push({ -nxt_dist, nxt_node });
            }
        }
    }
    cout << dist[dest] << endl;

}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b, k;
        cin >> a >> b >> k;
        graph[a].push_back({ b, k });
        //graph[b].push_back({ a, c });
    }

    for (int i = 1; i <= n; i++) {
        dist[i] = INF;
    }

    cin >> start >> dest;

    dijkstra(start);

	return 0;
}
