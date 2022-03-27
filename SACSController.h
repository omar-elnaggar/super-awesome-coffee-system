#pragma once
#include "Clock.h"

class SACSController {
    private:
        Clock clock;
        int temp;
        int coffeesBrewed; // might need refactoring
        int autoTime;
        int autoTemp;
        bool brewing;

    public:
        // constructor
        SACSController(int temp, int coffeesBrewed, int autoTime, int autoTemp, bool brewing, int seconds) : 
        temp(temp), coffeesBrewed(coffeesBrewed), autoTime(autoTime), autoTemp(autoTemp), brewing(brewing), clock(seconds){}

        // setters
        void setTemp(int temperature);
        void setAutoTime(int time);
        void setAutoTemp(int temperature);
        void setBrewing(bool brewing);
        void setClock(int seconds);
        
        // getters
        inline int getTemp() const{ return temp; }
        inline int getAutoTime() const { return autoTime; }
        inline int getAutoTemp() const { return autoTemp; }
        inline bool getBrewing() const { return brewing; }
        inline Clock getClock() const { return clock; }
        inline int getCoffeesBrewed() const { return coffeesBrewed; }

        // display functions
        void displayTime();
        void displayMenu();

        // check for brewing loop
        bool isStillBrewing();

        // hardware functions
        void openValve();
        void closeValve();
        void beep();
        

        // misc.
        void incrementCoffeesBrewed();
};
