// rcursion  

//Write a recursive function that returns the factorial of a number n

//#include<iostream>
//
//
//int factorial(int num) {
//	if (num == 0) {
//		return 1;
//	}
//	return num * factorial(num - 1);
//	 
//}
//int main() {
//	std::cout << factorial(3);
//	return 0;
//}



/*?? Question 2 (Easy - Medium) : Fibonacci Series

Problem : Write a recursive function that returns the nth Fibonacci number.

Fibonacci sequence : 0, 1, 1, 2, 3, 5, 8, 13 ...

Formula :

	fib(0) = 0

	fib(1) = 1

	fib(n) = fib(n - 1) + fib(n - 2)

	?? This introduces multiple recursive calls.You’ll see recursion branching out.*/

//#include<iostream>
//
//int fibo(int num) {
//	if (num == 0) return 0;
//	if (num == 1) return 1;
//	return fibo(num - 1) + fibo(num - 2);
//}
//
//int main() {
//	std::cout << fibo(13);
//}





/*	?? Question 3 (Medium) : Reverse a String Recursively

	Problem : Write a recursive function that reverses a string.

	Example : Input = "hello" ? Output = "olleh".

	Hint :

Base case: if the string length is 1, return it.

	Recursive step : reverse the substring except the first char, then add the first char at the end.

	?? This makes you think about recursion with data structures(strings / arrays) instead of just numbers.*/

#include<iostream>

std::string rev(std::string word) {
	if (word == "") return 0;
	return 
}

int main() {
	std::cout << rev("hello");
	return 0;
}