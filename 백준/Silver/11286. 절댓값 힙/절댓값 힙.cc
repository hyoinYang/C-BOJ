#include <iostream>
#include <queue>

using namespace std;

struct compare
{
    bool operator()(int a, int b) {
        if (abs(a) == abs(b))
            return a > b;
        return abs(a) > abs(b);
    }
};

priority_queue<int, vector<int>, compare> q;

int main()
{
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
                cout << q.top() << endl;
                q.pop();
            }
            else cout << 0 << endl;
        }
    }
}