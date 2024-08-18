#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    // Animalクラスは抽象クラスのためインスタンス化できません
    // const Animal* animal = new Animal(); // エラーになります

    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;

    return 0;
}
