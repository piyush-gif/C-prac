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

//#include<iostream>
//
//struct Node {
//	std::string data;
//	Node* next;
//};
//
//struct Stack {
//	Node* top;
//};
//
//void check(Stack& s, std::string& str) {
//	for (char ch : str) {
//		if (ch == '(' || ch == '{' || ch == '[') {
//			Node* newNode = new Node{ std::string(1, ch), s.top };
//			s.top = newNode;
//		}
//		else if (ch == ')' || ch == '}' || ch == ']') {
//			if (s.top == nullptr) {
//				std::cout << "Unbalanced" << std::endl;
//				return;
//			}
//
//			if ((ch == ')' && s.top->data == "(") ||
//				(ch == '}' && s.top->data == "{") ||
//				(ch == ']' && s.top->data == "[")) {
//				Node* temp = s.top;
//				s.top = s.top->next;
//				delete temp;
//			}
//			else {
//				std::cout << "Unbalanced" << std::endl;
//				return;
//			}
//		}
//	}
//
//	if (s.top == nullptr) {
//		std::cout << "Balanced" << std::endl;
//	}
//	else {
//		std::cout << "Unbalanced" << std::endl;
//	}
//}
//
//
//int main() {
//	Stack s;
//	s.top = nullptr;
//
//	std::string string;
//
//	std::cout << "Enter the math problem" << std::endl;
//	std::cin >> string;
//
//	check(s, string);
//	
//	return 0;
//}


// infix , prefix and postfix

// A + B =  infix
// + AB = prefix
// AB + = postfix


//5 6 2 + * 12 4 / -

//#include <iostream>
//#include <sstream>  
//#include <string>
//#include <cctype>   
//using namespace std;
//
//struct Node {
//    int data;
//    Node* next;
//};
//
//struct Stack {
//    Node* top;
//    Stack() : top(nullptr) {}
//
//    void push(int value) {
//        Node* newNode = new Node{ value, top };
//        top = newNode;
//    }
//
//    int pop() {
//        if (top == nullptr) {
//            cout << "Stack underflow\n";
//            exit(1);
//        }
//        int val = top->data;
//        Node* temp = top;
//        top = top->next;
//        delete temp;
//        return val;
//    }
//
//    bool isEmpty() {
//        return top == nullptr;
//    }
//
//    int peek() {
//        return top ? top->data : -1;
//    }
//};
//
//void calcu(string expr, Stack& s) {
//    stringstream ss(expr);
//    string token;
//
//    while (ss >> token) {
//        if (isdigit(token[0])) {
//            s.push(stoi(token));
//        }
//        else {
//            int b = s.pop();
//            int a = s.pop();
//            int result = 0;
//
//            switch (token[0]) {
//            case '+': result = a + b; break;
//            case '-': result = a - b; break;
//            case '*': result = a * b; break;
//            case '/': result = a / b; break;
//            default: cout << "Unknown operator: " << token << endl; return;
//            }
//            s.push(result);
//        }
//    }
//
//    cout << "Result: " << s.pop() << endl;
//}
//
//int main() {
//    Stack s;
//    string calc = "5 6 2 + * 12 4 / -";
//    calcu(calc, s);
//    return 0;
//}



// Queue
//#include<iostream>
//
//
//struct Node {
//	int data;
//	Node* next;
//};
//
//void add(Node*& head, int num) {
//	Node* newNode = new Node{ num , nullptr };
//	
//	if (head == nullptr) {
//		head = newNode;
//		return;
//	}
//	Node* temp = head;
//
//	while (temp->next != nullptr) {
//		temp = temp->next;
//	}
//
//	temp->next = newNode;
//}
//
//void pop(Node*& head) {
//	
//	if (head == nullptr) return;
//	Node* temp = head;
//
//	head = head->next;
//	std::cout << "deleted " << temp->data << std::endl;
//	delete temp;
//	
//}
//
//int main() {
//	Node* head = new Node{ 1, nullptr };
//	head->next = new Node{ 2, nullptr };
//	head->next->next = new Node{ 3, nullptr };
//	
//	add(head, 5);
//	Node* temp = head;    
//	while (temp != nullptr) {
//		std::cout << temp->data << std::endl;
//		temp = temp->next;
//	}
//	std::cout << "------------";
//	pop(head);
//	temp = head;
//
//	
//	
//	return 0;
//}

