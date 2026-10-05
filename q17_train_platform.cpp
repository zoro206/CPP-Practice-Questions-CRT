// Set 1 - Q17: Train crossing platform
// A train is moving at a certain speed in km/hr, and a railway platform has a fixed length
// in meters. The station master wants to know how much time the train will take to
// completely cross the platform. Write a code to calculate the time taken in seconds.

#include <iostream>
using namespace std;

int main() {
    // NOTE: To cross a platform COMPLETELY, the train has to cover its own length
    // plus the platform length, so train length is taken as an input too.
    // (If your sir wants only the platform length, enter train length = 0.)
    double speed, platformLength, trainLength;
    cout << "Enter train speed (km/hr): ";
    cin >> speed;
    cout << "Enter platform length (m): ";
    cin >> platformLength;
    cout << "Enter train length (m): ";
    cin >> trainLength;

    double speedInMps = speed * 5.0 / 18.0;   // km/hr -> m/s
    double time = (trainLength + platformLength) / speedInMps;

    cout << "Time taken to cross the platform = " << time << " seconds" << endl;

    return 0;
}
