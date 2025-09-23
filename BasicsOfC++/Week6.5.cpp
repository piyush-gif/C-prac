//Week 6.5: Templates & STL Essentials practice questions set so you can actually apply what you’ve learned.
//________________________________________
//Templates Practice
//1.	Function Templates
//o	Write a template function swapValues that swaps two variables of any type.
//o	Create a template function clampValue that clamps a number between a min and max value.
//o	Make a template function average that takes two numbers of any type and returns their average.
//2.	Class Templates
//o	Create a Pair class template that stores two values of any type and has a method display() to print them.
//o	Implement a Stack class template with push, pop, and peek functions.
//o	Make a Box class template that can store an item of any type and has setItem() and getItem() methods.
//________________________________________
//STL Containers Practice
//3.	Vectors
//o	Store the health values of 5 enemies in a std::vector<int>.
//Remove all enemies with health ≤ 0 using std::remove_if.
//o	Create a std::vector<std::string> inventory.
//Add 5 items, then search for “Sword” using std::find.
//4.	Maps / Unordered Maps
//o	Store player names and scores in a std::map<std::string, int> and print them sorted by name.
//o	Use std::unordered_map to store item names and their prices.
//Look up the price of an item entered by the user.
//5.	Sets
//o	Store unique quest IDs in a std::set<int>.
//Try inserting duplicates and see if they are stored.
//o	Use a std::set<std::string> to keep track of completed achievements.

//#include <iostream>
//#include<iostream>
//
//template<typename T>
//void swapValues(T& x, T& y) {
//	T temp = x;
//	x = y;
//	y = temp;
//}
//
//
//
//int main() {
//	int x = 5;
//	int y = 10;
//	swapValues(x, y);
//	std::cout << x << " " << y;
//
//	std::string hello = "the cherno";
//	std::string world = " is good";
//	swapValues(hello , world);
//	std::cout << hello << " " << world;
//
//	return 0;
//}

//o	Create a template function clampValue that clamps a number between a min and max value.


//template<typename T>
//T clampValue(T m , T n, T x) {
//	if (n < m) {
//		return m;
//	}
//	else if (n > x) {
//		return x;
//	}
//	else if (n > m && n < x) {
//		return n;
//	}
//}
//
//
//int main() {
//
//	
//	std::cout << clampValue(10, 5, 15) <<std::endl;
//	std::cout << clampValue(10.5, 5.5, 5.3);
//	return 0;
//}


//Make a template function average that takes two numbers of any type and returns their average.

//template<typename T>
//T average(T x , T y) {
//
//	
//	return (x + y) / 2;
//}
//
//int main() {
//	std::cout << average(10, 5);
//
//	return 0;
//}





//template<typename T>
//class Pair {
//public:
//	T xe, ye;
//
//	Pair(T X, T Y) {
//		xe = X;
//		ye = Y;
//	}
//	void display() {
//		std::cout << xe << ye;
//	}
//
//
//};
//
//int main() {
//
//	Pair<int> pair(10, 10);
//	pair.display();
//
//	return 0;
//}

//o	Implement a Stack class template with push, pop, and peek functions.
//#include<vector>
//template<typename T>
//class Stack {
//private:
//	std::vector<T> data;
//public:
//	
//	void push(const T& item) {
//		data.push_back(item);
//	}
//	void pop()  {
//		if (!data.empty()) {
//			data.pop_back();
//		}
//	}
//	T peek() const {
//		if (data.empty()) {
//			throw std::out_of_range("Stack is empty! Cannot peek.");
//		}
//		return data.back();
//	}
//};
//
//int main() {
//	Stack<int> intStack;
//	Stack<std::string> stringStack;
//
//	intStack.push(10);
//	intStack.push(15);
//
//	stringStack.push("hello");
//	intStack.pop();
//	std::cout << intStack.peek() << std::endl;
//	std::cout << stringStack.peek() << std::endl;
//
//	return 0;
//}



//o	Make a Box class template that can store an item of any type and has setItem() and getItem() methods.


//template<typename T>
//class Box {
//private:
//	T a ;
//public: 
//	void setItem(const T& item) {
//		a = item;
//	}
//	T getItem() const {
//		return a;
//	}
//};
//
//int main() {
//	Box<int> box1;
//	Box<std::string> box2;
//
//	box1.setItem(10);
//	box2.setItem("hello");
//
//	std::cout << box1.getItem();
//	std::cout << box2.getItem();
//
//	return 0;
//}



//3.	Vectors
//o	Store the health values of 5 enemies in a std::vector<int>.
//Remove all enemies with health ≤ 0 using std::remove_if.
//o	Create a std::vector<std::string> inventory.
//Add 5 items, then search for “Sword” using std::find.


//#include<vector>
//#include<algorithm>
//
//int main() {
//
//	std::vector<int> chars = { 10, 11, 10, 11, 10 };
//
//	/*chars.push_back(10);
//	chars.push_back(11);
//	chars.push_back(10);
//	chars.push_back(11);
//	chars.push_back(10);*/
//
//	chars.erase(
//		std::remove_if(chars.begin(), chars.end(), [](int x) {
//			return x <= 0;
//			}
//		),
//		chars.end());
//
//	for (int x : chars) {
//		std::cout << x << " ";
//	}
//
//	auto it = std::find(chars.begin(), chars.end(), 11);
//
//	if (it != chars.end()) {
//		std::cout << "found 11 at index" << it - chars.begin();
//	}
//	else {
//		std::cout << "not found!";
//	}
//	
//	return 0;
//} 

//4.	Maps / Unordered Maps
//o	Store player names and scores in a std::map<std::string, int> and print them sorted by name.
//o	Use std::unordered_map to store item names and their prices.
//Look up the price of an item entered by the user.
//5.	Sets
//o	Store unique quest IDs in a std::set<int>.
//Try inserting duplicates and see if they are stored.
//o	Use a std::set<std::string> to keep track of completed achievements.


//int main() {
//
//
//	return 0;
//}