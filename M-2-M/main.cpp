#include <iostream>
#include "User.h"
#include "Article.h"

int main(int argc, char const *argv[])
{
    User user1, user2, user3;
    Article art1, art2, art3;

    user1.addFavourite(art1.getId());
    user1.addFavourite(art3.getId());

    user2.addFavourite(art1.getId());
    user2.addFavourite(art2.getId());
    user2.addFavourite(art3.getId());

    user3.addFavourite(art3.getId());

    user1.print();
    art3.print();

    return 0;
}