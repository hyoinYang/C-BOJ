#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int MAX = 1001;
vector<int> graph[MAX];
bool visited[MAX];

void bfs(int node){
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while(!q.empty()){
        int current = q.front();
        q.pop();

        for(int next : graph[current]){
            if(!visited[next]){
                q.push(next);
                visited[next] = true;
            }
        }
    }
    
}

int main(){

    int n, m;
    cin >> n >> m;


    for(int i = 0; i < m; i++){
        int x1, x2;
        cin >> x1 >> x2;
        graph[x1].push_back(x2);
        graph[x2].push_back(x1);
    }
    
    int count = 0;
    for (int i = 1; i <= n; i++){
        if (!visited[i]){
            bfs(i);
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}    