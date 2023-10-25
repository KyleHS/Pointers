#include <iostream>
using namespace std;

int main() {

	//3 variables created
	int x;
	int y;
	int z;

	//user inputs

	std::cout << "Enter integer for x: ";
	std::cin >> x;  //user input 1

	int* point1 = new int(x); //pointer 1 to dynamic

	std::cout << "Enter integer for y: ";
	std::cin >> y; //user input 2

	int* point2 = new int(y); //pointer 2 to dynamic

	std::cout << "Enter integer for z: ";
	std::cin >> z; //user input 3

	int* point3 = new int(z); //pointer 3 to dynamic

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~"<<endl; //spacing

    //Variable values printed out
	std::cout << "Variable Values: "<<endl;
	std::cout << "Value of x: "<<x<<endl<<"Value of y: "<<y<<endl<<"Value of z: "<<z<<endl;

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~"<<endl; //spacing

	//Pointer values printed out
	std::cout << "Pointer Values: "<<endl;
	std::cout << "Value of point1: "<<point1<<endl<<"Value of point2: "<<point2<<endl<<"Value of point3: "<<point3<<endl;

	//freeing memory
	delete point1;
	delete point2;
	delete point3;

	return 0;
}
