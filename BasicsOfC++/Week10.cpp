//Week 10: Multithreading Basics(Optional for Console Games)Goal : Understand basic multithreading for future SFML performance.Key Concepts :
//•	std::thread for concurrent tasks.
//•	Mutexes for thread safety.
//•	Basic synchronization.
//Exercises :
//	•	Create a thread to print a “loading” message while the main thread processes data.
//	•	Use a mutex to safely update a shared int score variable.
//	•	Simulate an enemy AI running in a separate thread that updates its position.
//	•	Write a program to run two threads : one for input, one for game updates.
//	•	Read about std::async and test a simple example.
//	Mini - Project : Async Text RPG
//	•	Extend your Week 9 RPG : run enemy AI decisions in a separate thread.
//	•	Use a mutex to safely update shared game state(e.g., health).
//	•	Keep it simple to avoid complex thread issues.

#include <iostream>
#include <thread>
using namespace std;

void function1(char symbol) {
	for (int i = 0; i < 200; i++) {
		std::cout << symbol;
	}
}

void function2() {
	for (int i = 0; i < 200; i++) {
		std::cout << "-";
	}
}

int main() {

	std::thread worker1(function1, 'o');
	std::thread worker2(function2);
	return 0;
}

