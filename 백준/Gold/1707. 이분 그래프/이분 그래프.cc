#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>

using namespace std;

vector<int> graph[20001];
int visited[20001];

bool isBiepart(int start){
    queue<int> q;
    q.push(start);
    visited[start] = 1;

    while(!q.empty()){
        int current = q.front();
        q.pop();

        for (int next : graph[current]){
            if (visited[next] == 0){
                visited[next] = -visited[current];
                q.push(next);
            }

            else if (visited[next] == visited[current]){
                return false;
            }
        }
    }

    return true;
}


int main(){

    int k;
    cin >> k;

    for (int i = 0; i < k; i++){
        int v, e;
        cin >> v >> e;

        for (int i = 1; i <= v; i++) {
            graph[i].clear();
        }
        memset(visited, 0, sizeof(visited));

        for(int i = 0; i < e; i++){
            int n, m;
            cin >> n >> m;
            graph[n].push_back(m);
            graph[m].push_back(n);
        }

        bool result = true;

        for(int i = 1; i <= v; i++){
            if(visited[i] == 0){
                if(!isBiepart(i)){
                    result = false;
                    break;
                }
            }
        }
        
        cout << (result? "YES":"NO") << "\n";
    }

    return 0;
}    