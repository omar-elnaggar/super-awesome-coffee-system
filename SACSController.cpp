#include "SACSController.h"
#include <iostream>

#define MINUTE_VALUE 60
#define HOUR_VALUE 3600

// setters
void SACSController::setTemp(int temperature){
    this->temp = temperature;
}
void SACSController::setAutoTime(int time){
    autoTime = time;
}
void SACSController::setAutoTemp(int temperature){
    autoTemp = temperature;
}
void SACSController::setBrewing(bool brewing){
    this->brewing = brewing;
}
void SACSController::setClock(int seconds){
    if (seconds > 86400){
        throw std::runtime_error("Too many seconds");
    } else {
        clock.setSeconds(seconds);
    }
}

// display functions
void SACSController::displayTime(){
    // 3600 seconds in an hour 60 seconds in a minute
    int seconds = clock.getSeconds();
    int hours = seconds / HOUR_VALUE;
    seconds -= hours * HOUR_VALUE;
    int minutes = seconds / MINUTE_VALUE;

    std::cout << hours << ":" << minutes << std::endl;
}
void SACSController::displayMenu(){
    // to be implemented
}

// check for brewing loop
bool SACSController::isStillBrewing(){
    return brewing;
}

// hardware functions
void SACSController::openValve(){
    std::cout << "OPENING RESERVOIR VALVE" << std::endl;
}

void SACSController::closeValve(){
    std::cout << "CLOSING RESERVOIR VALVE" << std::endl;
}

void SACSController::beep(){
    std::cout << "BEEP \a" << std::endl;
}

// misc.
void SACSController::incrementCoffeesBrewed(){
    coffeesBrewed++;
}
