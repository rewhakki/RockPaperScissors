#include <iostream>
#include <stdlib.h>
#include <cstring>

int main()
{
    std::string pChoice;
    std::string cChoice;
    std::string lib[3] = { "R", "P", "S" };

    srand(time(NULL));
    cChoice = lib[rand() % 3];

    std::cout << "Welcome to RockPaperScissors game! \n";
    std::cout << "Make a choice:\n\nRock (R)\nPaper (P)\nScissors (S)\n\n";

    std::cout << "Your choice: ";
    std::cin >> pChoice;

    if (pChoice == cChoice) {
        std::cout << "Computer chose: " << cChoice << "\n";
        std::cout << "Draw!";
    }
    else if (pChoice == "R" && cChoice == "S") {
        std::cout << "Computer chose: " << cChoice << "\n";
        std::cout << "You Win!";
    }
    else if (pChoice == "S" && cChoice == "R") {
        std::cout << "Computer chose: " << cChoice << "\n";
        std::cout << "You Lose!";
    }
    else if (pChoice == "P" && cChoice == "R") {
        std::cout << "Computer chose: " << cChoice << "\n";
        std::cout << "You Win!";
    }
    else if (pChoice == "R" && cChoice == "P") {
        std::cout << "Computer chose: " << cChoice << "\n";
        std::cout << "You Lose!";
    }
    else if (pChoice == "S" && cChoice == "P") {
        std::cout << "Computer chose: " << cChoice << "\n";
        std::cout << "You Win!";
    }
    else if (pChoice == "P" && cChoice == "S") {
        std::cout << "Computer chose: " << cChoice << "\n";
        std::cout << "You Lose!";
    }
}
