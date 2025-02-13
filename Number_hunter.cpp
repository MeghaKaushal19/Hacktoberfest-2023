#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int lowerLimit = 1;
    int upperLimit = 100;
    int secretNumber = (std::rand() % (upperLimit - lowerLimit + 1)) + lowerLimit;
    int attempts = 0;
    int guess;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I've selected a random number between " << lowerLimit << " and " << upperLimit << ". Try to guess it!\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You've guessed the number in " << attempts << " attempts.\n";
        }
    } while (guess != secretNumber);

    return 0;
}
