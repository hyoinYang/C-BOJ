#include <iostream>
#include <queue>

using namespace std;

priority_queue<int, vector<int>, greater<int>> q;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        if (temp != 0) q.push(temp);
        else 
        {
            if (q.size() > 0)
            {
                cout << q.top() << "\n";
                q.pop();
            }
            else cout << 0 << "\n";
        }
    }
}