#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
int main(int argc, char *argv[]) { // by default -> argc==1
                                   // argv=="<binary_path>"

  std::cout << "number of argc " << argc << "\n ";
  if ((argc - 1) != 2) {
    std::cerr << "only two argc are allowed\n ";
    exit(EXIT_FAILURE);
  } else {
    std::string strname1, strname2;
    strname1 = argv[1];
    strname2 = argv[2];

    // number-extension separation code block in the week2 video

    std::stringstream filename1{strname1};
    std::stringstream filename2{strname2};
    int firstPart1, firstPart2 = -1;
    std::string secondPart1, secondPart2;

    filename1 >> firstPart1 >> secondPart1;
    filename2 >> firstPart2 >> secondPart2;

    std::cout << firstPart1 << " " << firstPart2 << "\n";
    std::cout << secondPart1 << " " << secondPart2 << "\n";

    if (!secondPart1.compare(".txt") && !secondPart2.compare(".txt")) {
      std::cout << "str1->txt str2->txt The output is :"
                << (firstPart1 + firstPart2) / 2 << "\n";
    } else if (!secondPart1.compare(".png") && !secondPart2.compare(".png")) {
      std::cout << "str1->png str2->png The output is :"
                << (firstPart1 + firstPart2) << "\n";
    } else if (!secondPart1.compare(".txt") && !secondPart2.compare(".png")) {
      std::cout << "str1->txt str2->png The output is :"
                << (firstPart1 % firstPart2) << "\n";
    } else {
      std::cerr << "Exiting the program because no conditions are met...\n";
      exit(EXIT_FAILURE);
    }
  }
}