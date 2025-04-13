#include "Zombie.hpp"

int main(void)
{
	Zombie	*heap_zombie = newZombie("Heap Zombie");
	heap_zombie->announce();
	delete	heap_zombie;
	randomChump("StackZombie");
	return (0);
}