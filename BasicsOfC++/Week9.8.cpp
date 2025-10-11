//#include <iostream>
//#define SIZE 5
//
//int arr[SIZE];
//int top = -1;
//
//void push(int n) {
//    if (top == SIZE - 1) {
//        std::cout << "Stack overflow\n";
//        return;
//    }
//    top++;
//    arr[top] = n;
//}
//
//void pop() {
//    if (top == -1) {
//        std::cout << "Stack is empty\n";
//        return;
//    }
//    top--;
//}
//
//void display() {
//    if (top == -1) {
//        std::cout << "Stack is empty\n";
//        return;
//    }
//    for (int i = top; i >= 0; i--)
//        std::cout << arr[i] << std::endl;
//}
//
//int main() {
//    push(5);
//    push(6);
//    pop();
//    push(2);
//    display();
//    return 0;
//}

//#include<iostream>
//
//struct Node {
//	int data;
//	Node* next;
//};
//
//struct Stack {
//	Node* top;
//};
//
//void push(Stack& s, int value) {
//	Node* newNode = new Node{ value, s.top };
//	s.top = newNode;
//}
//
//void pop(Stack& s) {
//	if (s.top == nullptr) {
//		return;
//	}
//	Node* temp = s.top;
//	s.top = s.top->next;
//	delete temp;
//}
//
//void rev(Stack& s) {
//	while (s.top != nullptr) {
//		std::cout << s.top->data;
//		s.top = s.top->next;
//	}
//}
//
//void peek(Stack& s) {
//	if (s.top == nullptr) {
//		return;
//	}
//	std::cout << s.top->data << std::endl;
//}
//
//void display(Stack& s) {
//	Node* temp = s.top;
//	while (temp != nullptr) {
//		std::cout << temp->data << std::endl;
//		temp = temp->next;
//	}
//}
//
//int main() {
//	Stack s;
//	s.top = nullptr;
//
//	push(s, 1);
//	push(s, 2);
//	push(s, 3);
//	display(s); 
//
//	//peek(s);
//
//	//pop(s);
//	//display(s); 
//
//	/*rev(s);*/
//	return 0;
//}

//If the expression is not balanced, print the index(or position) of the first mismatch.

#include<iostream>

struct Node {
	std::string data;
	Node* next;
};

struct Stack {
	Node* top;
};

void check(Stack& s, std::string& str) {
	for (char ch : str) {
		if (ch == '(' || ch == '{' || ch == '[') {
			Node* newNode = new Node{ std::string(1, ch), s.top };
			s.top = newNode;
		}
		else if (ch == ')' || ch == '}' || ch == ']') {
			if (s.top == nullptr) {
				std::cout << "Unbalanced" << std::endl;
				return;
			}

			if ((ch == ')' && s.top->data == "(") ||
				(ch == '}' && s.top->data == "{") ||
				(ch == ']' && s.top->data == "[")) {
				Node* temp = s.top;
				s.top = s.top->next;
				delete temp;
			}
			else {
				std::cout << "Unbalanced" << std::endl;
				return;
			}
		}
	}

	if (s.top == nullptr) {
		std::cout << "Balanced" << std::endl;
	}
	else {
		std::cout << "Unbalanced" << std::endl;
	}
}


int main() {
	Stack s;
	s.top = nullptr;

	std::string string;

	std::cout << "Enter the math problem" << std::endl;
	std::cin >> string;

	check(s, string);
	
	return 0;
}