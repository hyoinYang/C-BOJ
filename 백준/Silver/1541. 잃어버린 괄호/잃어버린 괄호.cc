#include <string>
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string str;
    cin >> str;
    bool isMinus = false;
    string num;

    int result = 0;
    for (int i = 0; i <= str.size(); i++) {
        if (str[i] == '+' || str[i] == '-' || i == str.size()) {
            if (isMinus) {
                result -= stoi(num);
                isMinus = true;
                num = "";
            }
            else {
                result += stoi(num);
                num = "";
            }
        }
        else {
            num += str[i];
        }

        if (str[i] == '-') {
            isMinus = true;
        }
    }

    cout << result;
    
}