#include "Clock.h"

Clock::Clock()
{
  
}


Clock::Clock(int seconds)
{
  this->seconds = seconds;
}
          


int Clock::getSeconds()
{
    return this->seconds;
}


void Clock::setSeconds(int num)
{
    this->seconds = num;
}

void Clock::incrementFiveSeconds()
{
    this->seconds += 5;
}

void Clock::incrementTenSeconds()
{
    this->seconds += 10;
}

void Clock::incrementFifteenSeconds()
{
    this->seconds += 15;
}

int Clock::getMinutes()
{

}
    
int Clock::getHours()
{

}