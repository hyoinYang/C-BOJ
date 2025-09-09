#include <iostream>
#include <vector>

using namespace std;

int arr[2000005];
int fro = 0;
int rear = 0;

void push(int x){
    arr[rear++] = x;
}

int pop(){
    if (fro == rear)
    {
        return -1;
    }
    else{
        int result = arr[fro++];
        return result;
    }
}

int size(){
    return rear - fro;
}

int empty(){
    if(fro == rear) return 1;
    else return 0;
}

int front(){
    if(fro == rear) return -1;
    else return arr[fro];
}

int back(){
    if(fro == rear) return -1;
    else return arr[rear-1];
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int N;
    cin >> N;

    while(N--){
        string command;
        cin >> command;

        if(command == "push"){
            int param;
            cin >> param;
            push(param);
        }
        else if (command == "pop"){
            cout << pop() << "\n";
        }
        else if (command == "size"){
            cout << size() << "\n";
        }
        else if (command == "empty"){
            cout << empty() << "\n";
        }
        else if (command == "front"){
            cout << front() << "\n";
        }
        else if (command == "back"){
            cout << back() << "\n";
        }

    }

    return 0;
}

