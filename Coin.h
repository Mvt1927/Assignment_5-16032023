#include "string"
using namespace std;

/**
 * @brief  Coin class
 * 
 */
class Coin
{
private:
    /**
     * @brief The sideUp member variable will hold either “heads” or “tails”
     * indicating the side of the coin that is facing up. 
     * 
     */
    string sideUp;

public:
    /**
     * @brief Construct a new Coin object
     * 
     */
    Coin();

    /**
     * @brief simulates the tossing of the coin
     * 
     */
    void toss();

    /**
     * @brief Get the Side Up object
     * 
     * @return string 
     */
    string getSideUp();
};

Coin::Coin()
{
    int random = rand() % 2;
    switch (random)
    {
    case 0:
        sideUp = "heads";
        break;
    case 1:
        sideUp = "tails";
        break;
    default:
        break;
    }
}

void Coin::toss()
{
    int random = rand() % 2;
    switch (random)
    {
    case 0:
        sideUp = "heads";
        break;
    case 1:
        sideUp = "tails";
        break;
    default:
        break;
    }
}

inline string Coin::getSideUp()
{
    return sideUp;
}
