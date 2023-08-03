#include <iostream>
#include<iomanip>
#include <string>

void start_game();
void end_game(int score);

using namespace std;

int main()
{
    string user_input;
    cout << "================================Welcome========================================" << endl;
    cout << "if you want to play game then enter 'play' to start:";
    
    cin >> user_input;

    if (user_input == "play")
    {
        start_game();

    }
    else {
        end_game(0);
    }
}
void start_game() {
    char answer;
    int score = 0;


    //question start here
    cout << "\n How much is 3+3:" << endl;
    cout << "a) 4" << endl;
    cout << "b) 5" << endl;
    cout << "c) 6" << endl;
    cout << "d) 8" << endl;
    cout << "please enter 'a' 'b' 'c' 'd' and press enter:";

    cin >> answer;
    if (answer == 'c') {
        cout << "\n Congrats you entered right Answer!" << endl;
        score++;
    }
    else {
        cout << "\n Sorry you choose wrong Answer!" << endl;
    }
    // question end here


        //question start here
    cout << "\n Who is the CEO of Google" << endl;
    cout << "a) Bill Gates" << endl;
    cout << "b) Jeff Bezos" << endl;
    cout << "c) Suleman" << endl;
    cout << "d) Sundar Pichai" << endl;
    
    cout << "please enter 'a' 'b' 'c' 'd' and press enter:";
    cin >> answer;

    if (answer == 'd') {
        cout << "\n Congrats you entered right Answer!" << endl;
        score++;
    }
    else {
        cout << "\n Sorry you choose wrong Answer!" << endl;
    }
    // question end here
    end_game(score);
}

void end_game( int score) {
    cout << "Thanks for Playing" << endl;
    cout << "Your Score is" << score << endl;
}