using namespace std;
#include <iostream>
#include <chrono> //get today's date
#include <random> //to pick a random element in the word of the day array
#include <cctype> //addresses case sensativity
#include <iomanip> //for setw


//static string word_of_the_day[1] = { "APPLE" };//for testing purposes, only one word is used to make it easier to guess the wordle
static string word_of_the_day[25] = { "APPLE", "BRAVE", "CRANE", "DRIVE", "EAGLE", "FLUTE", "GRAPE", "HOUSE", "IMAGE", "JUICE", "KNIFE", "LEMON", "MOUSE", "NIGHT", "OCEAN", "PIANO", "QUEEN", "RIVER", "SMILE", "TIGER", "UNITY", "VOICE", "WATER", "YOUTH", "ZEBRA" };//array storing a variety of words that can be todays wordle

string user_input;

void wordle_game()
{
    cout << "Please enter your guess: ";
    random_device rd;                               // seed source
    mt19937 gen(rd());                              // random number generator
    uniform_int_distribution<> dist(0, 24);         // range: 0 to 24 inclusive
    string chosen = word_of_the_day[dist(gen)];


	cout << "FOR TESTING PURPOSES, THE WORDLE IS: " << chosen << endl; //for testing purposes, the wordle is printed to the console so that it can be guessed correctly DELETE THIS AFTER TESTING IS DONE
    for (size_t i = 0; i < chosen.length(); i++) {;
    }

    //attempt one
    cin >> setw(5) >> user_input;
    for (char& c : user_input)
    {
        c = toupper(static_cast<unsigned char>(c)); // Convert user input to uppercase
    }

    if (user_input == chosen)
    {
        cout << "Well Done!" << endl;
        return; // Exit the function if the guess is correct
    }

	else //attempt two
	{
		cout << "Incorrect guess. Try again, this is attempt two." << endl;
        cin >> setw(5) >> user_input;
        for (char& c : user_input)
        {
            c = toupper(static_cast<unsigned char>(c)); // Convert user input to uppercase
        }

		} 

    if (user_input == chosen)
    {
        cout << "Well Done!" << endl;
        return; // Exit the function if the guess is correct
    }

	else //attempt three
	{
		cout << "Incorrect guess. Try again. This is aatempt three" << endl;
        cin >> setw(5) >> user_input;
        for (char& c : user_input)
		{
			c = toupper(static_cast<unsigned char>(c)); // Convert user input to uppercase
		}
	}

    if (user_input == chosen)
    {
        cout << "Well Done!" << endl;
		return; // Exit the function if the guess is correct
    }
    
    else //attempt four
    {
        cout << "Incorrect guess. Try again. This is attempt four." << endl;
        cin >> setw(5) >> user_input;
        for (char& c : user_input)
        {
            c = toupper(static_cast<unsigned char>(c)); // Convert user input to uppercase
        }
    }

    if (user_input == chosen)
    {
        cout << "Well Done!" << endl;
        return; // Exit the function if the guess is correct
    }

    else //FINAL ATTEMPT
    {
        cout << "Incorrect guess. Try again. LAST TRY" << endl;
        cin >> setw(5) >> user_input;
        for (char& c : user_input)
        {
            c = toupper(static_cast<unsigned char>(c)); // Convert user input to uppercase
        }
    }

    if (user_input == chosen)
    {
        cout << "Well Done!" << endl;
        return; // Exit the function if the guess is correct
    }

    else
    {
		cout << "The word is " << chosen << ". Better luck next time!" << endl;
    }


}

int main()
{
    // Get the current system clock time point
    auto now = std::chrono::system_clock::now();

    // Convert the time point to a localized system_days object (year-month-day)
    auto today = std::chrono::floor<std::chrono::days>(now);

    string user_input;
    cout << "Welcome to today's wordle!!! " << today << endl << endl << endl;
	cout << "Word is five characters long. You have five tries to guess the word." << endl;
	wordle_game();

};
// Hello, my name is Marco. If you're reading this, you probably found this through the listed projects section on my resume. 
// Thank you for taking the time to look at this and for your consideration! I'm currently a Dev/SysOps professional with a strong interest in programming and software development. 
// I have experience in various programming languages and frameworks, and I enjoy solving complex problems through code. 
// If you have any questions or would like to discuss potential opportunities, please feel free to reach out. 
// Thank you again for your time and consideration!