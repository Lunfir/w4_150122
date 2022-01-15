#include "User.h"
#include "Manager.h"

int User::globalId = 0;

User::User()
{
    globalId += 1;
    id = globalId;
}

User::~User()
{

}

const std::vector<int>& User::getFavourites() const 
{
    return Manager::getInstance().getFavourites(this->id);
}

int User::getId() const
{
    return id;
}

void User::addFavourite(int inArticleId)
{
    Manager::getInstance().addArticleToFavourites(this->id, inArticleId);
}

void User::print() const
{
    std::cout << getId() << ": ";

    for (const int articleId : getFavourites())
    {
        std::cout << articleId << ", ";
    }

    std::cout << std::endl;
}
