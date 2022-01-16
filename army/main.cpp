#include <iostream>

#include "Soldier.h"
#include "Werewolf.h"

int main(int argc, char const *argv[])
{
    Soldier soldier("Soldier", 100, 15);
    Werewolf werewolf("Werewolf", 80, 10);

    soldier.print();
    werewolf.print();
    
    return 0;
}