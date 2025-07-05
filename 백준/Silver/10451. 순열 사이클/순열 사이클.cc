#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>

using namespace std;

int perm[1001];
int visited[1001];

void bfs(int start){
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while(!q.empty()){
        int current = q.front();
        q.pop();

        int next = perm[current];

        if(!visited[next]){
            q.push(next);
            visited[next] = true;
        }
    }
}

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++) {
            cin >> perm[i];
        }
        memset(visited, 0, sizeof(visited));

        int result = 0;
        
        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                bfs(i);
                result++;
            }
        }
        
        cout << result << "\n";
    }

    return 0;
}    