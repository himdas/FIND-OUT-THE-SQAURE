#include <iostream>

int main() {

  float squarenum;
  char response;

  std::cout << "  WECOME TO THE 'FIND OUT THE SQAURE.' YOU CAN TYPE ANY TYPE OF NUMBER AND THEN PRESS ENTER TO SEE THE SQAURE OF THAT NUMBER.\n";
  std::cout << "------------------------------------------------------------------------------------------------------------------------------\n";
  std::cout << "  Do you want to continue? (Y for yes or N for no) : ";
  std::cin >> response;
  std::cout << "-----------------------------------------------------\n";

  if (response == 'Y') {

    std::cout << "  Ok, please write any type of number : ";
    std::cin >> squarenum;
    std::cout << "-----------------------------------------\n";
    std::cout << "  The sqaure of " << squarenum << " is : " << squarenum * squarenum << "\n";
    std::cout << "----------------------------------------------------\n";
    std::cout << "Thank you using 'FIND OUT THE SQAURE.'\n";

  }
  else if (response == 'N') {

    std::cout << "Ok, see you next time!\n";

  }
  else {

    std::cout << "You can only type Y or N to continue. Please type ./a.out to start again.\n";
    
  }
}
