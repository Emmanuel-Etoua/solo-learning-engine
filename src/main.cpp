#include <iostream>
#include "Player.h"

int main() {

    Player player("Hunter");

    std::cout << "Player created." << std::endl;
    std::cout << "Name : " << player.name << std::endl;
    std::cout << "Level : " << player.level << std::endl;
    std::cout << "XP : " << player.experience << std::endl;

    return 0;
}