#include <cstdlib>
#include <iostream>
#include <random>

int main() {
  std::random_device random_numb;
  std::mt19937 gen(random_numb());
  std::uniform_int_distribution<> dis(0, 99);
  int random_number = dis(gen);

  bool guess = false;
  while (guess == false) {
    int guessing_number;
    std::cout << "input a number between 0 and 99 ->";
    std::cin >> guessing_number;
    if (guessing_number >= 0 && guessing_number <= 99) {

      if (guessing_number > random_number) {
        std::cout << "guessing number is bigger than random number\n";
      }

      else if (guessing_number < random_number) {
        std::cout << "guessing number is smaller than random number\n";
      }

      else {
        guess = true;
      }
    } else {
      std::cerr << "[WARNING] : Number must be between 0 and 99\n";
    }
  }
  std::cout << "Random number is " << random_number << "\n";
  return 0;
}