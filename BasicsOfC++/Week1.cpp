//Week 1: C++ Basics - Variables, Data Types, and Control FlowGoal : Learn fundamental C++ syntax and structure to start coding simple programs.Key Concepts :
//•	Variables(int, float, char, bool, std::string).
//•	Basic input / output(std::cout, std::cin).
//•	Conditionals(if, else if, else).
//•	Loops(for, while, do - while).
//•	Operators(arithmetic, comparison, logical).
//Exercises :
//	•	Write a program that takes a player’s name(std::string) and health(int) as input and prints a status message(e.g., “Alice has 100 health”).
//	•	Create a program that calculates damage dealt based on attack power(int) and enemy defense(int) using arithmetic(e.g., damage = attack - defense).
//	•	Write a loop to print a 5x5 grid of asterisks(*) to simulate a game map.
//	•	Make a number guessing game where the user inputs a number(1–10) and gets feedback(“Correct!” or “Try again!”) until they guess a hardcoded number.
//	•	Create a simple menu with 3 options(e.g., “Start Game”, “Settings”, “Quit”) using if / else and std::cin to handle user choice.
//	Mini - Project: Number Guessing Game
//	•	Generate a hardcoded number(e.g., 7).
//	•	Use a while loop to let the player guess, providing “too high” or “too low” hints.
//	•	Track guesses and display the total when they win.





// write a program that takes a player's name(std::string) and health(int) as input and prints a status message (e.g. "alice has 100 health").


//#include<iostream>

//int main() {
//	std::string name;
//	int health;
//
//	std::cout << "Enter name" << std::endl;
//	std::cin >> name;
//
//	std::cout << "Enter the hp" << std::endl;
//	std::cin >> health;
//
//
//	std::cout << name << " has " << health << " hp";
//}

// Create a program that calculates damage dealt based on attack power (int) and enemy defence  (int) using  arthmetic (e.g. damage = attack - defence).


//int main() {
//	int ap;
//	int ed;
//
//	std::cout << "Enter the attack power";
//	std::cin >> ap;
//
//	std::cout << "Enter the ememy defence";
//	std::cin >> ed;
//
//	int damage = ap - ed;
//
//	std::cout << damage << std:: endl;
//}

// Write a loop to print 5x5 grid of astrisks(*) to stimulate game map.

//void main() {
//	char a ='*';
//
//	for (int i = 0; i <= 5; i++) {
//		for (int j = 0; j <= 5; j++) {
//			std::cout << a;
//		}
//		std::cout << "\n";
//	}
//
//}

// Make a number guessing game where the user inputs a number (1- 10) and gets feedback ("correct!" or "try again") untill they guess a hardcoded number.

//int main() {
//	int guessNumber;
//	int hardcoded = 5;
//	
//	while (true) {
//		std::cout << "Guess the number : ";
//		std::cin >> guessNumber;
//		if (guessNumber == hardcoded) {
//			std::cout << "Correct!";
//			break;
//		}
//		else {
//			std::cout << "Try again \n";
//		}
//	}
//	return 0;
//}


// Create a simple menu with 3 options (eg., "Start Game" , "Settings", "Quit"


//int main() {
//	int choice;
//	
//	std::cout << "1. Start Game \n2. Settings \n3. Quit\n";
//
//
//	std::cout << "Enter your choice";
//	std::cin >> choice;
//
//	if (choice == 1) {
//		std::cout << "user plays the game";
//	}
//	else if (choice == 2) {
//		std::cout << "user fixes settings";
//	}
//	else {
//		std::cout << "User quits the game";
//	}
//	return 0;
//}



// Mini-Project: Number Guessing Game
// Generate a hardcoded number(e.g., 7).
// Use a while loop to let the player guess, providing “too high” or “too low” hints.
// Track guesses and display the total when they win.
//#include<iostream>
//int main() {
//	int number = 7;
//	int guess = 0;
//	int count = 0;
//
//	while (true) {
//		std::cout << "Enter your choice between 0 to 10\n";
//		std::cin >> guess;
//		count++;
//
//		if (guess == number) {
//			std::cout << "Perfecto!\n";
//			break;
//		}
//		else if (guess < number) {
//			std::cout << "too low\n";
//			
//		}
//		else if (guess > number) {
//			std::cout << "too high \n";
//			
//		}
//	}
//	std::cout << "total tries " << count;
//	return 0;
//}
//
