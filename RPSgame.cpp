#include <iostream>
using namespace std;

int main()
{

    int firstplr;
    int secondplr;

    cout << "\033[4m" << "This is a two player game of Rock, Paper, Scissors" << "\033[0m" << endl;
    
    cout << "\033[34m" << "First player: enter '1' for Rock, '2' for Paper or '3' for Scissors then hit enter " << "\033[0m";
    cin >> firstplr;

    cout << "\033[31m" << "Second player: enter '1' for Rock, '2' for Paper or '3' for Scissors then hit enter " << "\033[0m";
    cin >> secondplr;


    if (firstplr == '1' && secondplr == '2')

    {
        cout << "\033[31m" << "The second player wins this round" << "\033[0m";

    } else (firstplr == '1' && secondplr == '3');

    {
   
    cout << "\033[34m" << "The First player wins this round" << "\033[0m";

    }

}