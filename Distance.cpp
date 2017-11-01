//
// Created by Javier Zarate on 10/31/17.
//

#include "Distance.h"

/*!
 * Default constructor. Set intitial values to zero
 */
Distance::Distance()
{
    feet = 0;
    inches = 0;

}

int Distance::getFeet() const
{
    return feet;
}
/*!
 * Set feet variable
 * @param feet
 */
void Distance::setFeet(int feet)
{
    Distance::feet = feet;
}

float Distance::getInches() const
{
    return inches;
}

void Distance::setInches(float inches)
{
    Distance::inches = inches;
}

Distance::Distance(int f, float i)
{
    feet = f;
    inches = i;
}

Distance Distance::operator+(Distance d1)
{
    int tfeet;
    float tinches;
    tfeet = feet + d1.getFeet();
    tinches = inches + d1.getInches();
    if (tinches >= 12.0)
    {
        tinches -= 12.0;
        tfeet += 1;
    }

    return Distance(tfeet, tinches);
}

Distance Distance::operator+(const int f)
{
    return Distance(feet + f, inches);
}

Distance operator+(const int f, Distance d1)
{
    return Distance(f + d1.getFeet(), d1.getInches());
}
