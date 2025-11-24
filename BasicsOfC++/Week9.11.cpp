// classss

#include<iostream>

class Vec2 {
public:
	int x, y;
	Vec2(int a, int b) {
		x = a;
		y = b;
	}

	Vec2 add(Vec2 a) {
		x += a.x;
		y += a.y;
		return *this;
	}
	void print() {
		std::cout << "x : " << x << " y : " << y;
	}

};



int main() {
	Vec2 vec(2, 3);
	Vec2 vec1(3, 4);
	Vec2 vec2(5, 6);
	vec.add(vec1).print();

}