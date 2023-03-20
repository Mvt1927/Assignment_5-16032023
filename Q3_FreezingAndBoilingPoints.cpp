#include "iostream"
#include "LiquidTemperature.h"
using namespace std;

int main(int argc, char const *argv[])
{
    LiquidTemperature someLiquid = LiquidTemperature();
    int temperature(0);

    cout << "Enter temperature : ";
    cin >> temperature;

    if (someLiquid.isEthylFreezing(temperature))
    {
        cout << someLiquid.ethyl.getSubstance() << " is Freeze" << endl;
    }

    if (someLiquid.isEthylBoiling(temperature))
    {
        cout << someLiquid.ethyl.getSubstance() << " is Boil" << endl;
    }
    
    if (someLiquid.isOxygenFreezing(temperature))
    {
        cout << someLiquid.oxygen.getSubstance() << " is Freeze" << endl;
    }

    if (someLiquid.isOxygenBoiling(temperature))
    {
        cout << someLiquid.oxygen.getSubstance() << " is Boil" << endl;
    }

    if (someLiquid.isWaterFreezing(temperature))
    {
        cout << someLiquid.water.getSubstance() << " is Freeze" << endl;
    }

    if (someLiquid.isWaterBoiling(temperature))
    {
        cout << someLiquid.water.getSubstance() << " is Boiling" << endl;
    }

    return 0;
}