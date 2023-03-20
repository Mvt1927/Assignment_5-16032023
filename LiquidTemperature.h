#include "Liquid.h"
#include "string"
using namespace std;

class LiquidTemperature
{
private:
public:
    Liquid ethyl;
    Liquid oxygen;
    Liquid water;

    LiquidTemperature();

    bool isEthylFreezing(const int &a_temperature) const;
    bool isEthylBoiling(const int &a_temperature) const;

    bool isOxygenFreezing(const int &a_temperature) const;
    bool isOxygenBoiling(const int &a_temperature) const;

    bool isWaterFreezing(const int &a_temperature) const;
    bool isWaterBoiling(const int &a_temperature) const;
};

LiquidTemperature::LiquidTemperature()
{
    ethyl = Liquid("Ethyl Alcohol", -173, 172);
    oxygen = Liquid("Oxygen", -362, -306);
    water = Liquid("Water", 32, 212);
}

inline bool LiquidTemperature::isEthylFreezing(const int &a_temperature) const
{
    return ethyl.isFreezing(a_temperature);
}

inline bool LiquidTemperature::isEthylBoiling(const int &a_temperature) const
{
    return ethyl.isBoiling(a_temperature);
}

inline bool LiquidTemperature::isOxygenFreezing(const int &a_temperature) const
{
    return oxygen.isFreezing(a_temperature);
}

inline bool LiquidTemperature::isOxygenBoiling(const int &a_temperature) const
{
    return oxygen.isBoiling(a_temperature);
}

inline bool LiquidTemperature::isWaterFreezing(const int &a_temperature) const
{
    return water.isFreezing(a_temperature);
}

inline bool LiquidTemperature::isWaterBoiling(const int &a_temperature) const
{
    return water.isBoiling(a_temperature);
}
