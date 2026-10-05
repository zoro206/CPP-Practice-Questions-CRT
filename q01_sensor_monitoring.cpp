// Set 4 - Q1: The Sensor Monitoring System
// SCENARIO
// A factory has a digital monitoring system that continuously receives a measurement value
// from a machine.
//
// SYSTEM REQUIREMENTS
// - Accept a number from the operator.
// - Immediately display the same number as the recorded reading.
// - Continue accepting and displaying readings.
// - The monitoring process should stop only when the operator enters 0.
// - 0 indicates that the operator wants to stop the monitoring session.
//
// TASK: Design a C program using goto to control the repeated monitoring process.
// THINK: Where should the program jump to take the next reading? What condition should
// terminate the repetition?

#include <iostream>
using namespace std;

int main() {
    int reading;

  start:
    cout << "Enter reading (0 to stop): ";
    cin >> reading;

    if (reading == 0)
        goto stop;

    cout << "Recorded reading: " << reading << endl;
    goto start;

  stop:
    cout << "Monitoring session stopped." << endl;

    return 0;
}
