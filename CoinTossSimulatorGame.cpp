#include "iostream"
#include "Coin.h"

using namespace std;

const string HEADS = "heads";
const string TAILS = "tails";

int main(int argc, char const *argv[])
{
    char cont = 'y';
    int times = 0;
    int winTimes = 0;
    int tossTimes = 0;
    int answer;
    Coin coin = Coin();

    while (cont == 'y')
    {
        times++;
        cout << "Round : " << times << " | Win : " << winTimes << endl;
        cout << "Toss times : ";
        cin >> tossTimes;

        for (int i = 0; i < tossTimes; i++)
        {
            coin.toss();
        }

        cout << "Your answer (0 : 'heads' / 1 : 'tails') : ";
        cin >> answer;
        cout << "Coin side : " << coin.getSideUp() << endl;
        switch (answer)
        {
        case 0:
            if (HEADS == coin.getSideUp())
            {
                cout << "You win " << endl;
                winTimes++;
            }
            else
                cout << "You loss :)))))))))) " << endl;
            break;
        case 1:
            if (TAILS == coin.getSideUp())
            {
                cout << "You win " << endl;
                winTimes++;
            }
            else
                cout << "You loss :)))))))))) " << endl;
            break;

        default:
            cout << "Invalid input .\n Enter your anwser again." << endl;
            cout << "Your answer (0 : 'heads' / 1 : 'tails') : ";
            cin >> answer;
            break;
        }
        cout << "Continue ? (y/n): ";
        cin >> cont;
    }

    return 0;
}