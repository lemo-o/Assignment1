/*
Assignment #1, Fortune Teller
I did everything in the assignment, including the extra credit, as well as inclduing some extra stuff. 
I moved the variables outside of the main function, and then I created a void for some extra spice. 
If I had more time, I could also add lucky to the void statement as a variable that was more easily editable,
making the statement more versatile.
Another idea that I had was a joke about gifs; I thought about making it a 50-50 chance if you got the good 
statement or the bad statement, but I decided to make it based on whether or not you just typed in "gif."
I also used a "hacky" system to detect when a user puts in gif. Its exploitable, but for the purpose of this program, it works good enough.
*/
#include <iostream> // include a library
using namespace std;
// -------------- Variable Declarations ------------------
int favorite; // create a variable to store the favorite number
int disliked; // create a variable to store the disliked number
string movie; // create a string to be used later
string gif;
int lucky; // create a variable to store the lucky number

void bulk()
{
    cout << endl
         << "Your secret, lucky number is: " << lucky << endl;
    if (lucky < 0)
    { // conditional, calues less than 0
        cout << "Try to be less negative." << endl;
    }
    if (lucky >= 0 && lucky < 5)
    { // 0 to 4 inclusive
        cout << "Think bigger!" << endl;
    }
    if (lucky >= 5 && lucky < 8)
    { // 5 to 8 inclusive
        cout << "Today you should embrace technology." << endl;
    }
    if (lucky == 9)
    { // exactly 9

        cout << "Today is your lucky day!" << endl;
    }
    if (lucky == 8)
    {
        cout << "Today you should slap someone with a fish by sunset." << endl;
    }
}

int main() // main() starts the program
{

    // ------------- Get user input -------------------------
    cout << "Enter your favorite number (no decimals): "; // output
    cin >> favorite;                                      // user input
    cout << "Enter a number you don't like (no decimals): ";
    cin >> disliked;
    cout << "Enter the name of your favorite movie: ";
    cin.ignore();
    std::getline(cin,movie);
    cout << "Is it gif or gif? ";
    cin >> gif;
    lucky = (favorite * disliked * movie.size()) % 10;
    if (gif.size() == 3 && (gif.front() == 'g'||gif.front() == 'G'))
    {
        cout << "I'm glad we could see eye to eye...";
        bulk();
    }
    else
    {
        cout << "You should probably see a therapist...\nAnyway, here is your fortune for today:";
        bulk();
    }
    // ---------- Code to help the program exit "gracefully" -----
    cin.ignore();
    cout << "Press enter to quit." << endl;
    cin.ignore();
    return 0;
}