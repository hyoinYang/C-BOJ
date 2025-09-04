#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> nums;

void push(int number){
    nums.push_back(number);
}

int pop(){
    if(nums.empty()){
        return -1;
    }
    else{
        int temp = nums.back();
        nums.pop_back();
        return temp;
    }
}

int size(){
    return nums.size();
}

int empty(){
    if(nums.empty()){
        return 1;
    }
    else{
        return 0;
    }
}

int top(){
    if(nums.empty()){
        return -1;
    }
    else{
        return nums.back();
    }
}

int main(){

    int N;
    cin >> N;

    while(N--){
        string input;
        cin >> input;

        if(input == "push"){
            int number;
            cin >> number;

            push(number);
        }

        else if (input == "pop"){
            cout << pop() << "\n";
        }

        else if (input == "size"){
            cout << size() << "\n";
        }

        else if (input == "empty"){
            cout << empty() << "\n";
        }

        else if (input == "top"){
            cout << top() << "\n";
        }
    }


    return 0;
}    