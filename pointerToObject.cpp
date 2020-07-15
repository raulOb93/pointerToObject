// pointerToObject.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include <iostream>

class rectangle {
	//properties are private by default
	float base;
	float height;

public:
	float area() {
		return base * height;
	}
	float perimeter() {
		return (base + height) * 2;
	}
	//Mutators
	void setBase(float b) {
		if (b >= 0)
			base = b;
		else
			base = 0;
	}
	void setHeight(float h) {
		if (h >= 0)
			height = h;
		else
			height = 0;
	}
	//Accessors
	float getBase(){
		return base;
	}
	float getHeight() {
		return height;
	}
};

int main(){      
	
	rectangle rec1;
	rectangle* p;
	p = &rec1;
	p->setBase(3.5);
	p->setHeight(5.5);
	std::cout << p->getBase() << std::endl;
	std::cout << p->getHeight() << std::endl;
	std::cout << "The area is: ", std::cout << p->area();
	/*
	rectangle rec1, rec2;
	rec1.base = 5.5;
	rec1.height = 6.8;
	std::cout << rec1.area()<<std::endl;

	// pointer to an object 
	//rectangle on Stack: A pointer is used to access the object  
	rectangle r2;
	rectangle *p;
	p = &r2;
	r2.base = 8.98;
	p -> height = 10;
	std::cout<< p->area()<<std::endl;
	

	//object on Heap: A pointer is used to access object on heap.
	rectangle* q;
	q = new rectangle;
	q->height = 7.5;
	q->base = 9;
	std::cout << q->perimeter(); 
	*/
}


