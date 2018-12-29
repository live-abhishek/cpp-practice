#include <iostream>
#include "constants.h"

double getTowerHeight(){
    std::cout << "Enter the height of the tower in meters: ";
    double towerHeight;
    std::cin >> towerHeight;
    return towerHeight;
}

double calculateHeight(double towerHeight, int seconds){
    double distanceFallen = (myConstants::gravity * (seconds * seconds)) / 2;
    double currentHeight = towerHeight - distanceFallen;
    return currentHeight;
}

void printHeight(double height, int seconds){
    if(height > 0.0){
        std::cout << "At " << seconds << " seconds, the ball is at the height: " << height << " meters\n";
    } else {
        std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
    }
}

void calculateAndPrintHeight(double towerHeight, int seconds){
    double height = calculateHeight(towerHeight, seconds);
    printHeight(height, seconds);
}

int main(){
    const double towerHeight = getTowerHeight();
    int seconds = 0;
    calculateAndPrintHeight(towerHeight, seconds++);
    calculateAndPrintHeight(towerHeight, seconds++);
    calculateAndPrintHeight(towerHeight, seconds++);
    calculateAndPrintHeight(towerHeight, seconds++);
    calculateAndPrintHeight(towerHeight, seconds++);
    calculateAndPrintHeight(towerHeight, seconds++);

    return 0;
}