#include <iostream>
#include <queue>
#include <algorithm>
#include <functional>

#define MAX_N 100002

using namespace std;

priority_queue< int, vector<int>, less<int> > max_heap;
priority_queue<int, vector<int>, greater<int> > min_heap;
int arr[MAX_N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, target;
    cin >> n;

    while(n--){
        cin >> target;

        if (max_heap.empty())
            max_heap.push(target);
        
        else if (max_heap.size() == min_heap.size())
            max_heap.push(target);

        else
            min_heap.push(target);

        if (!max_heap.empty() && !min_heap.empty() && max_heap.top() > min_heap.top()){
            int a = max_heap.top();
            int b = min_heap.top();

            max_heap.pop();
            min_heap.pop();

            max_heap.push(b);
            min_heap.push(a); 
        }

        cout << max_heap.top() << "\n";
    }

    return 0;
}
