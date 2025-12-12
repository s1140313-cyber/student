#include <iostream>
using namespace std;

int main()
{
    int subject = 5;
    int grade[5] = {98,30,10,15,92};
    int sum = 0;
    for (int i=0;i<5;i++) {
        sum = sum + grade[i];
    }
    int average = sum/subject;
    cout<<"段考的平均是:"<<average;
    return 0;
}