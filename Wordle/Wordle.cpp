using namespace std;
#include <iostream>
#include <chrono> //get today's date
#include <random> //to pick a random element in the word of the day array
#include <cctype> //addresses case sensativity
#include <iomanip> //for setw


static string word_of_the_day[25] = { "APPLE", "BRAVE", "CRANE", "DRIVE", "EAGLE", "FLUTE", "GRAPE", "HOUSE", "IMAGE", "JUICE", "KNIFE", "LEMON", "MOUSE", "NIGHT", "OCEAN", "PIANO", "QUEEN", "RIVER", "SMILE", "TIGER", "UNITY", "VOICE", "WATER", "YOUTH", "ZEBRA" };                //array storing a variety of words that can be todays wordle
string user_input;



void wordle_game()
{ 
    random_device rd;                                                               // seed source
    mt19937 gen(rd());                                                              // random number generator
    uniform_int_distribution<> dist(0, 24);                                         // range: 0 to 24 inclusive
    string chosen = word_of_the_day[dist(gen)];
    string s = chosen;
    for (char c : s) {}                                                              // Loop through each character in the string
	vector<char> v(s.begin(), s.end());                                             // Store the characters of the string in a vector in 's'
    





    //GAME BEGINS\\

    cout << "Please enter your guess: ";
	//cout << "FOR TESTING PURPOSES, THE WORDLE IS: " << chosen << endl;              //for testing purposes, the wordle is printed to the console so that it can be guessed correctly DELETE THIS AFTER TESTING IS DONE
 
    
 //attempt one
	cin >> user_input;                                                      //add condition to check if the input is 5 characters long
    for (char& c : user_input)
    {
        c = toupper(static_cast<unsigned char>(c));                                 // Convert user input to uppercase
    }

    if (user_input == chosen)
    {
        cout << "Well Done!" << endl;
		cout << "Enter any key to exit the program." << endl;
		string exit_input;
		cin >> exit_input;
        return; // Exit the function if the guess is correct
    }

	else 
	{
        //attempt two  
        cout << "Incorrect guess. Try again, this is attempt two." << endl << endl;
		string s_u = user_input;
        for (char c_u : s_u) {                                                                           // Loop through each character in the string
        }

        vector<char> v_u(s_u.begin(), s_u.end());

        size_t n = min(v.size(), v_u.size());
        for (size_t i = 0; i < n; ++i) {
            if (v[i] == v_u[i]) {
                cout << v[i];
            }


            if (v[i] != v_u[i]) {
                cout << "_";
            }
        }


        cout << endl << endl;
        cout << "Type your answer: ";
        cin >> user_input;
        for (char& c : user_input)
        {
            c = toupper(static_cast<unsigned char>(c));                                                // Convert user input to uppercase
        }

		} 

    if (user_input == chosen)
    {
        cout << "Well Done!" << endl;
        cout << "Enter any key to exit the program." << endl;
        string exit_input;
        cin >> exit_input;
        return;                                                                                     // Exit the function if the guess is correct
    }

	else 
	{
        //attempt three  
        cout << "Incorrect guess. Try again, this is attempt three." << endl << endl << endl;
        string s_u = user_input;
        for (char c_u : s_u) {                                                                           // Loop through each character in the string
        }

        vector<char> v_u(s_u.begin(), s_u.end());

        size_t n = min(v.size(), v_u.size());
        for (size_t i = 0; i < n; ++i) {
            if (v[i] == v_u[i]) {
                cout << v[i];
            }


            if (v[i] != v_u[i]) {
                cout << "_";
            }
        }

        cout << endl << endl;
        cout << "Type your answer: ";
        cin >> user_input;
        for (char& c : user_input)
        {
            c = toupper(static_cast<unsigned char>(c));                                                // Convert user input to uppercase
        }
	}

    if (user_input == chosen)
    {
        cout << "Well Done!" << endl;
        cout << "Enter any key to exit the program." << endl;
        string exit_input;
        cin >> exit_input;
		return;                                                                                     // Exit the function if the guess is correct
    }
    
    else 
    {
        //attempt four 
        cout << "Incorrect guess. Try again, this is attempt four." << endl << endl << endl;
        string s_u = user_input;
        for (char c_u : s_u) {                                                                           // Loop through each character in the string
        }

        vector<char> v_u(s_u.begin(), s_u.end());

        size_t n = min(v.size(), v_u.size());
        for (size_t i = 0; i < n; ++i) {
            if (v[i] == v_u[i]) {
                cout << v[i];
            }


            if (v[i] != v_u[i]) {
                cout << "_";
            }

        }
        cout << endl << endl;
        cout << "Type your answer: ";
        cin >> user_input;
        for (char& c : user_input)
        {
            c = toupper(static_cast<unsigned char>(c));                                                // Convert user input to uppercase
        }
    }

    if (user_input == chosen)
    {
        cout << "Well Done!" << endl;
        cout << "Enter any key to exit the program." << endl;
        string exit_input;
        cin >> exit_input;
        return;                                                                                     // Exit the function if the guess is correct
    }

    else 
    {
        //FINAL ATTEMPT
        cout << "Incorrect guess. Try again, this is your last try." << endl << endl << endl;
        string s_u = user_input;
        for (char c_u : s_u) {                                                                           // Loop through each character in the string
        }

        vector<char> v_u(s_u.begin(), s_u.end());

        size_t n = min(v.size(), v_u.size());
        for (size_t i = 0; i < n; ++i) {
            if (v[i] == v_u[i]) {
                cout << v[i];
            }


            if (v[i] != v_u[i]) {
                cout << "_";
            }
        }

        cout << endl << endl;

        cin >> user_input;
        for (char& c : user_input)
        {
            c = toupper(static_cast<unsigned char>(c));                                                // Convert user input to uppercase
        }
    }

    if (user_input == chosen)
    {
        cout << "Well Done!" << endl;
        cout << "Enter any key to exit the program." << endl;
        string exit_input;
        cin >> exit_input;
        return;                                                                                     // Exit the function if the guess is correct
    }

    else
    {
        cout << endl;
		cout << "The word is " << chosen << ". Better luck next time!" << endl;
        cout << "Enter any key to exit the program." << endl;
        string exit_input;
        cin >> exit_input;
    }


}

int main()
{
    // Get the current system clock time point
    auto now = chrono::system_clock::now();

    // Convert the time point to a localized system_days object (year-month-day)
    auto today = chrono::floor<chrono::days>(now);

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