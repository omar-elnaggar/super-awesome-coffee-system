#pragma once

class SACSController {
    private:
        // Clock clock
        int temp;
        int coffeesBrewed; // might need refactoring
        int autoTime;
        int autoTemp;
        bool brewing;

    public:
        // constructor
        SACSController(int temp, int coffeesBrewed, int autoTime, int autoTemp, bool brewing) : 
        temp(temp), coffeesBrewed(coffeesBrewed), autoTime(autoTime), autoTemp(autoTemp), brewing(brewing){}
        // setters
        void setTemp(int temperature);
        void setAutoTime(int time);
        void setAutoTemp(int temperature);
        void setBrewing(bool brewing);
        // void setClock(&Clock);
        
        // getters
        inline int getTemp() const{ return temp; }
        inline int getAutoTime() const { return autoTime; }
        inline int getAutoTemp() const { return autoTemp; }
        inline bool getBrewing() const { return brewing; }
        // Clock getClock();

        // display functions
        void displayTime();
        void displayMenu();

        // check for brewing loop
        bool isStillBrewing();

        // hardware functions
        void openValve();
        void beep();

        // misc.
        void incrementCoffeesBrewed();
};