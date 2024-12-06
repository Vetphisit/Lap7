#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int studentID;
    int GEAR;
    string movie;
    string day;
    string farewellMessage;

    // Greet and ask for the user's name
    cout << "Fahsai: Sawadee ka...Can you tell me your name? \n";
    cout<<"?????: ";
    getline(cin, name);
    

    // Respond to the user's na
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << endl;

    // Ask for the student's ID
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    cout << name << ": ";
    cin >> studentID;
    cin.ignore(); // Clear the buffer after using cin

    // Calculate the GEAR
    GEAR = (studentID / 10000000) - 12;

    // Respond with the GEAR and offer a movie ticket
    cout << "Fahsai: I think you may be GEAR " << GEAR << ". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;

    // Ask for the movie
    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << name << ": ";
    getline(cin, movie);

    // Ask for the day
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << name << ": ";
    getline(cin, day);

    // Respond to the day
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you." << endl;

    // Farewell message
    cout << name << ": ";
    getline(cin, farewellMessage);

    // Final goodbye
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/" << endl;

    return 0;
}
