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
#include <mutex>

std::mutex mtx;  // mutex to protect shared data
int score = 0;

void incrementScore() {
    for (int i = 0; i < 5; ++i) {
        std::lock_guard<std::mutex> lock(mtx);  // automatically locks/unlocks
        ++score;
        std::cout << "Score updated to: " << score << std::endl;
    }
}

void loadingMessage() {
    for (int i = 0; i < 5; ++i) {
        std::cout << "Loading..." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

int main() {
    std::thread t1(incrementScore);   // thread for updating score
    std::thread t2(loadingMessage);   // thread for printing loading

    t1.join();  // wait for t1 to finish
    t2.join();  // wait for t2 to finish

    std::cout << "Final score: " << score << std::endl;
    return 0;
}
