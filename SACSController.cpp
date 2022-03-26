#include "SACSController.h"
#include <iostream>

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

// display functions
void SACSController::displayTime(){
    // to be implemented when clock is updated
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
void SACSController::beep(){
    std::cout << "BEEP \a" << std::endl;
}

// misc.
void SACSController::incrementCoffeesBrewed(){
    coffeesBrewed++;
}