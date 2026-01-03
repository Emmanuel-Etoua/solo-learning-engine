#ifndef PLAYER_H
#define PLAYER_H

#include <string>

struct Player{
    std::string name;
    int level;
    int experience;

    Player(const std::string playerName)
        : name(playerName), level(1), experience(0) {}
};

#endif