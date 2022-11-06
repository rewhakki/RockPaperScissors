#include <iostream>
#include <stdlib.h>
#include <cstring>

char GetCompChoice() {
    char lib[3] = { 'R', 'P', 'S' };
    srand(time(NULL));
    return lib[rand() % 3];
}

char GetPlayerChoice() {
    char pChoice;
    std::cin >> pChoice;
    return pChoice;
}

void SelectWinner(char pChoice, char cChoice){
    if (pChoice == cChoice) {
        std::cout << "Computer chose: " << cChoice << "\n";
        std::cout << "Draw!";
    }
    else if (pChoice == 'R' && cChoice == 'S') {
        std::cout << "Computer chose: " << cChoice << "\n";
        std::cout << "You Win!";
    }
    else if (pChoice == 'S' && cChoice == 'R') {
        std::cout << "Computer chose: " << cChoice << "\n";
        std::cout << "You Lose!";
    }
    else if (pChoice == 'P' && cChoice == 'R') {
        std::cout << "Computer chose: " << cChoice << "\n";
        std::cout << "You Win!";
    }
    else if (pChoice == 'R' && cChoice == 'P') {
        std::cout << "Computer chose: " << cChoice << "\n";
        std::cout << "You Lose!";
    }
    else if (pChoice == 'S' && cChoice == 'P') {
        std::cout << "Computer chose: " << cChoice << "\n";
        std::cout << "You Win!";
    }
    else if (pChoice == 'P' && cChoice == 'S') {
        std::cout << "Computer chose: " << cChoice << "\n";
        std::cout << "You Lose!";
    }
}

int main()
{
    char pChoice;
    char cChoice;

    std::cout << "Welcome to RockPaperScissors game! \n";
    std::cout << "Make a choice:\n\nRock (R)\nPaper (P)\nScissors (S)\n\n";

    cChoice = GetCompChoice();

    std::cout << "Your choice: ";
    pChoice = GetPlayerChoice();

    SelectWinner(pChoice, cChoice);
}
