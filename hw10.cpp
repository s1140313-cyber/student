#include <iostream>
using namespace std;

int main()
{
    int password = 7;
    int enterkey;
    std::cout<<"請輸入密碼(1-10)";
    cin >> enterkey;
    while (password != enterkey) {
        cout << "密碼錯誤,請輸入密碼(1-10)";
        cin >> enterkey;
    }
    cout << "恭喜猜對了";
    return 0;
}