#include <iostream>
#include "Clock.h"
#include "Showerhead.h"
#include "Thermostat.h"
#include "SACSController.h"
#include "HeatingElement.h"
#include "WarmingPlate.h"

using namespace std;


int main() {
  // ** make objects
  // WaterHeatingElement
  WaterHeatingElement waterHeater;
  // Showerhead
  Showerhead showerhead;
  // WarmingPlate
  WarmingPlate plateWarmer;
  // Clock
  // now created in SACSController
  // SACSController
  SACSController controller(195, 0, 0, 0, 0, 20000);
  // Thermostat
	Thermostat thermos(waterHeater,plateWarmer);

  // time display
  cout << "Current time is: ";
  controller.displayTime();
  
  
  // brew pressed
  cout << "User presses brew button" << endl;
  controller.openValve();
  
  // setbrewing
  controller.setBrewing(1);
  
  // startheating
  thermos.toggleWaterHeating(); // toggles power state
  
  // loop isstillbrewing
  // getWaterFlow
  while (showerhead.getWaterFlow()){
    // loop notattemp
    // getWaterTemp
    int currentWaterTemp = thermos.getWaterTemp();
    // watertemp != temp
    while(controller.getTemp() != thermos.getWaterTemp()){
      currentWaterTemp += 5;
      thermos.setWaterTemp(currentWaterTemp);
    }
    // watertemp == temp
    cout << "Water is at temp" << endl;

    // waterflow = 1
    showerhead.setWaterFlow(1);
    cout << "Starting Water Flow" << endl;
    
  // brewing false (end of loop)
  
    showerhead.setWaterFlow(0);
    cout << "Water flow stopped" << endl;
    controller.setBrewing(0);
  }
    controller.closeValve();

  // togglePowerState()
  thermos.toggleWaterHeating();
  // beep
  cout << "Brewing Done" << endl;
  thermos.togglePlateWarming();
  controller.beep();

  // User is getting their coffee
  cout << "User presses brew button again." << endl;
  controller.setBrewing(0);
  controller.incrementCoffeesBrewed();
  cout << "Coffee count has been incremented by 1" << endl;
  cout << "Coffees brewed: " << controller.getCoffeesBrewed() << endl;
  thermos.togglePlateWarming();
  cout << "User pours his/her cup of joe." << endl;
  controller.setClock(20120);
  cout << "Current time is: ";
  controller.displayTime();

  return 0;
}
