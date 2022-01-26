
#include <iostream>
using namespace std;

int main() {

    float distance, time, velocity;
    
    // Gets the distance
    cout << "Enter how many miles you are traveling " << endl;
    cin >> distance;
    
    // Gets the velocity
    cout << "How fast are you traveling in mph? " << endl;
    cin >> velocity;
    
    // Calculate the time it takes here.
    time = distance/velocity;

    cout << endl;
    cout << "At " << velocity << " mph it will take " << time << " hours to travel " << distance << " miles." << endl;
    
    return 0;

}
