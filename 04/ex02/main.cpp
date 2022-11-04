#include "Cat.hpp"
#include "Dog.hpp"
#define COUNT_ANIMALS 4

int main() {
	Animal	*arrayAnimals[COUNT_ANIMALS];

	for (int i = 0; i < COUNT_ANIMALS; ++i) {
		if (i < COUNT_ANIMALS / 2) {
			arrayAnimals[i] = new Dog();
		}
		else {
			arrayAnimals[i] = new Cat();
		}
	}
	//
	for (int i = 0; i < COUNT_ANIMALS; ++i) {
		delete arrayAnimals[i];
	}
}