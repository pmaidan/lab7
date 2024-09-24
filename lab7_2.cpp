// Polina Maidanova
// Programming Fundamentals
// CS 1436
// 005
// Due Date: 09/25/2024
// Date completed: 09/24/2024
// Date submitted: 09/24/2024


// This program calculates the distance a sound traveled from the source, using the speed of sound in different medium.

#include <iostream> // Header file allowing to work with input and output.
#include <iomanip>  // Header file allowing to manipulate the output.
#include <string>   // Header file allowing to work with the string class.
using namespace std;    // Use standard namespace.

int main()  // Main function is the starting point of the program execution.
{   
    // Initialize the string class objects for the request of time from the user and for the error message for the time input.
    string sTimeErrorMessage = "Invalid time. Run the program again and enter a value between 0 and 30.\n";
    string sTimeRequest = "Enter the time it took the sound to travel from the source to the location of the detection (in seconds, between 0 and 30): ";

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

    // Compare the choice input with the options and execute the block of code accordingly.
    if (iMenuChoice == 1)   // Execute the following code block if the user chose the first option.
    {
        // Request the user to enter the time the sound traveled from the source to the point of the detection in seconds.
        cout << sTimeRequest;
        cin >> fTime;   // Store the input in fTime.

        if (fTime <= 0.0 ||  fTime > 30.0) // Check if the user entered the value less than 0 or more than 30 seconds.
        {
            cout << sTimeErrorMessage;   // Display the error message.
            return 1;   // Return 1 if the time input was invalid in the iMenuChoice = 1 and terminate the program.
        }

        // Calculate the distance a sound traveled through carbon dioxide.
        fDistance = CARBON_DIOXIDE_SPEED * fTime; 
    }

    else if (iMenuChoice == 2)  // Execute the following code block if the user chose the second option.
    {
        // Request the user to enter the time the sound traveled from the source to the point of the detection in seconds.
        cout << sTimeRequest;
        cin >> fTime;   // Store the input in fTime.

        if (fTime <= 0.0 ||  fTime > 30.0) // Check if the user entered the value less than 0 or more than 30 seconds.
        {
            cout << sTimeErrorMessage;   // Display the error message.
            return 2;   // Return 2 if the time input was invalid in iMenuChoice 2 and terminate the program.
        }

        // Calculate the distance a sound traveled through air.
        fDistance = AIR_SPEED * fTime;
    }

    else if (iMenuChoice == 3)  // Execute the following code block if the user chose the third option.
    {
        // Request the user to enter the time the sound traveled from the source to the point of the detection in seconds.
        cout << sTimeRequest;
        cin >> fTime;   // Store the input in fTime.

        if (fTime <= 0.0 ||  fTime > 30.0) // Check if the user entered the value less than 0 or more than 30 seconds.
        {
            cout << sTimeErrorMessage;   // Display the error message.
            return 3;   // Return 3 if the time input was invalid in iMenuCHoice = 3 and terminate the program.
        }

        // Calculate the distance a sound traveled through helium.
        fDistance = HELIUM_SPEED * fTime;
    }

    else if (iMenuChoice == 4)  // Execute the following code block if the user chose the fourth option.
    {
        // Request the user to enter the time the sound traveled from the source to the point of the detection in seconds.
        cout << sTimeRequest;
        cin >> fTime;   // Store the input in fTime.

        if (fTime <= 0.0 ||  fTime > 30.0) // Check if the user entered the value less than 0 or more than 30 seconds.
        {
            cout << sTimeErrorMessage;   // Display the error message.
            return 4;   // Return 4 if the time input was invalid in iMenuChoice = 4 and terminate the program.
        }

        // Calculate the distance a sound traveled through hydrogen.
        fDistance = HYDROGEN_SPEED * fTime;
    }

    else    // If the user's input didn't match any of the options, display an error message and terminate the program.
    {
        cout << "Invalid menu choice. Run the program again and enter a value 1-4.\n";
        return 5;   // Return 5 if the choice input was invalid and terminate the program.
    }

    cout << "The source of sound is " << fDistance << " meters away from the detection location.\n";

    return 0;   // Return 0 to indicate successful completion of the program.
}
