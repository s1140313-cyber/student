#include <iostream>
using namespace std;
int main()
{
    string name[5] = {
        "Amy",
        "Ben",
        "Cindy",
        "David",
        "Eva"
    };

    int score[5][3] = {
        {80, 90, 85},
        {70, 75, 78},
        {88, 92, 95},
        {60, 65, 70},
        {90, 93, 89}
    };
    for (int i=0;i<5;i++) {
        int sum = 0;
        cout << name[i] << "的成績:";
        for (int j=0;j<3;j++){
            cout << score[i][j] << "";
            sum += score[i][j];
        }
        cout << "總合為:" << sum << endl;
    }

    return 0;
}