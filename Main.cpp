#include <iostream>
#include <string>

int main() {

	std::string userSelection;
	std::srand((int)time(0));
	int computerSelection = std::rand() % 3;
	std::string computerSelectionString;
	int intUserSelection;

	std::cout << "Welcome to Rock, Paper, Scissors game! Please enter your selection: R or P or S" << std::endl;
	std::cin >> userSelection;

	if (userSelection == "R" || "r") { intUserSelection = 0; }
	else if (userSelection == "P" || "p") { intUserSelection = 1; }
	else if (userSelection == "S" || "s") { intUserSelection = 2; }
	else { 
		intUserSelection = 3; 
		std::cout << "Invalid selection, exiting." << std::endl;
		return EXIT_FAILURE;
	
	}

	if (computerSelection == 0) { computerSelectionString = "Rock"; }
	else if (computerSelection == 1) { computerSelectionString = "Paper"; }
	else { computerSelectionString = "Scissors"; }

	if (intUserSelection == 0 && computerSelection == 0 || intUserSelection == 1 && computerSelection == 1 || intUserSelection == 2 && computerSelection == 2) {
		std::cout << "Computer selection is: " << computerSelectionString << std::endl;
		std::cout << "It's a tie!" << std::endl;
		return EXIT_SUCCESS;
	}
	else if (intUserSelection == 0 && computerSelection == 1 || intUserSelection == 1 && computerSelection == 2 || intUserSelection == 2 && computerSelection == 0) {
		std::cout << "Computer selection is: " << computerSelectionString << std::endl;
		std::cout << "Computer wins!" << std::endl;
		return EXIT_SUCCESS;
	}
	else if (intUserSelection == 0 && computerSelection == 3 || intUserSelection == 1 && computerSelection == 0 || intUserSelection == 3 && computerSelection == 1) {
		std::cout << "Computer selection is: " << computerSelectionString << std::endl;
		std::cout << "You win!" << std::endl;
		return EXIT_SUCCESS;
	}
	else {
		std::cout << "Invalid selection, exiting.";
		return EXIT_FAILURE;
	}

}