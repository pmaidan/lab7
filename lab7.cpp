// Polina Maidanova
// Programming Fundamentals
// CS 1436
// 005
// Due Date: 09/25/2024
// Date completed: 09/22/2024
// Date submitted: 09/22/2024


// This program calculates the distance a sound traveled from the source, using the speed of sound in different medium.

#include <iostream> // Header file allowing to work with input and output.
#include <iomanip>  // Header file allowing to manipulate the output.
using namespace std;    // Use standard namespace.

int main()  // Main function is the starting point of the program execution.
{
    // Initialize the speed of sound at 0 degrees centigrade, measured in meters per second, traveling through the different medium.
    const double CARBON_DIOXIDE_SPEED = 258.0, AIR_SPEED = 331.5;
    const double HELIUM_SPEED = 972.0, HYDROGEN_SPEED = 1270.0;
    // Declare the variables for time, distance and the menu choice.
    double fTime, fDistance;
    int iMenuChoice;

    // Display the menu and request the user to select an option.
    cout << setw(10) << "Menu\n";
    cout << "Select one of the following gases (1-4):\n";
    cout << "1. Carbon Dioxide\n";
    cout << "2. Air\n";
    cout << "3. Helium\n";
    cout << "4. Hydrogen\n";
    cin >> iMenuChoice;  // Store the input in iMenuChoice.

    // Request the user to enter the time the sound traveled from the source to the point of the detection in seconds.
    cout << "Enter the time it took the sound to travel from the source to the location of the detection (in seconds, between 0 and 30): ";
    cin >> fTime;   // Store the input in fTime.

    if (fTime <= 0.0 ||  fTime > 30.0) // Check if the user entered the value less than 0 or more than 30 seconds.
    {
        cout << "Invalid time. Run the program again and enter a positive value for time.\n";   // Display the error message.
        return 1;   // Return 1 if the time input was invalid and terminate the program.
    }

    if (iMenuChoice == 1)
        fDistance = CARBON_DIOXIDE_SPEED * fTime;

    else if (iMenuChoice == 2)
        fDistance = AIR_SPEED * fTime;

    else if (iMenuChoice == 3)
        fDistance = HELIUM_SPEED * fTime;

    else if (iMenuChoice == 4)
        fDistance = HYDROGEN_SPEED * fTime;

    else if (iMenuChoice <1 || iMenuChoice > 4)
    // else
    {
        cout << "Invalid menu choice. Run the program again and enter a value 1-4.\n";
        return 2;
    }

    // cout << fixed << setprecision(2);
    cout << "The distance the sound traveled is " << fDistance << " meters.\n";

    return 0;
}
