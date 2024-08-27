#include "Dog.hpp"
#include "Cat.hpp"

// int main( void )
// {
//
// 	const Animal* dog = new Dog();
// 	const Animal* cat = new Cat();

// 	std::cout << std::endl;

// 	delete dog;
// 	delete cat;
// 	system("leaks Animals");
// 	std::cout << std::endl;
// 	std::cout << std::endl;

//
// 	Dog medor;
// 	Cat fifi;

// 	std::cout << std::endl << "creating copies" << std::endl;

//
// 	const Animal	*(animal_array[4]);

// 	std::cout << std::endl;
//
// 	for (int i = 0; i < 2; i++)
// 		animal_array[i] = new Dog();
// 	std::cout << std::endl;

//
// 	for (int i = 2; i < 4; i++)
// 		animal_array[i] = new Cat();
// 	std::cout << std::endl;

// 	for (int i = 0; i < 4; i++)
// 		delete animal_array[i];
// 	std::cout << std::endl;

// 	system("leaks Animals");
// }

int main()
{
	Animal *animal1 = new Dog();
	Animal *animal2 = new Cat();

	animal1->makeSound(); // "Woof!" yazdırır
	animal2->makeSound(); // "Meow!" yazdırır

	delete animal1;
	delete animal2;
	// Animal a;
	return 0;
}
