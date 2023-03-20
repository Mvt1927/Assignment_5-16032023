#include "string"
using namespace std;

class Liquid
{
private:
    string substance;
    int freezingPoint;
    int boilingPoint;

public:
    Liquid(const string &a_substance, const int &a_freezingPoint, const int &a_boilingPoint);
    Liquid();

    void setSubstance(const string &a_substance);
    void setFreezingPoint(const int &a_freezingPoint);
    void setBoilingPoint(const int &a_boilingPoint);

    string getSubstance() const;
    int getFreezingPoint() const;
    int getBoilingPoint() const;

    bool isFreezing(const int &a_temperature) const;
    bool isBoiling(const int &a_temperature) const;
};

Liquid::Liquid(const string &a_substance, const int &a_freezingPoint, const int &a_boilingPoint)
{
    substance = a_substance;
    freezingPoint = a_freezingPoint;
    boilingPoint = a_boilingPoint;
}

Liquid::Liquid()
{
    substance = "Liquid Name";
    freezingPoint = 0;
    boilingPoint = 0;
}

inline void Liquid::setSubstance(const string &a_substance)
{
    substance = a_substance;
}

inline void Liquid::setFreezingPoint(const int &a_freezingPoint)
{
    freezingPoint = a_freezingPoint;
}

inline void Liquid::setBoilingPoint(const int &a_boilingPoint)
{
    boilingPoint = a_boilingPoint;
}

inline string Liquid::getSubstance() const
{
    return substance;
}

inline int Liquid::getFreezingPoint() const
{
    return freezingPoint;
}

inline int Liquid::getBoilingPoint() const
{
    return boilingPoint;
}

inline bool Liquid::isFreezing(const int &a_temperature) const
{
    if (a_temperature <= freezingPoint)
        return true;
    return false;
}

inline bool Liquid::isBoiling(const int &a_temperature) const
{
    if (a_temperature >= boilingPoint)
        return true;
    return false;
}
