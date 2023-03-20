#include "iostream"
#include "Coin.h"
#include "iomanip"

using namespace std;

const string HEADS = "heads";
const string TAILS = "tails";

const int col = 2;
const int col_w = 20;

void drawLine();
void printCoinSide();
void printCoinSide(const int &times, const string &side);
void printTimesCoinSide();
void printTimesCoinSide(const int &headsTimes, const int &tailsTimes);

int main(int argc, char const *argv[])
{
    int headsTimes = 0;
    int tailsTimes = 0;
    int tossTimes = 20;
    Coin coin = Coin();

    drawLine();

    printCoinSide();

    drawLine();

    printCoinSide(0, coin.getSideUp());

    drawLine();

    for (int i = 0; i < tossTimes; i++)
    {
        coin.toss();
        printCoinSide(i + 1, coin.getSideUp());
        if (coin.getSideUp() == HEADS)
            headsTimes++;
        else
            tailsTimes++;
    }
    drawLine();
    printTimesCoinSide();
    drawLine();
    printTimesCoinSide(headsTimes, tailsTimes);
    drawLine();

    return 0;
}

void drawLine()
{
    cout << setfill('-');
    cout << setw(col_w * col + (col + 2)) << "-" << endl;
    cout << setfill(' ');
}

void printCoinSide()
{
    cout << setw(2) << left << "|";
    cout << setw(col_w - 1) << left << "Time toss";
    cout << setw(2) << left << "|";
    cout << setw(col_w - 1) << left << "Coin side";
    cout << setw(2) << right << "|" << endl;
}

void printCoinSide(const int &times, const string &side)
{
    cout << setw(2) << left << "|";
    cout << setw(col_w - 1) << left << times;
    cout << setw(2) << left << "|";
    cout << setw(col_w - 1) << left << side;
    cout << setw(2) << right << "|" << endl;
}

void printTimesCoinSide()
{
    cout << setw(2) << left << "|";
    cout << setw(col_w - 1) << left << HEADS;
    cout << setw(2) << left << "|";
    cout << setw(col_w - 1) << left << TAILS;
    cout << setw(2) << right << "|" << endl;
}

void printTimesCoinSide(const int &headsTimes, const int &tailsTimes)
{
    cout << setw(2) << left << "|";
    cout << setw(col_w - 1) << left << headsTimes;
    cout << setw(2) << left << "|";
    cout << setw(col_w - 1) << left << tailsTimes;
    cout << setw(2) << right << "|" << endl;
}
