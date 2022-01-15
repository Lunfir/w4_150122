#include "Article.h"
#include "Manager.h"

int generateId()
{
    static int id = 1;
    return id++;
}

Article::Article()
{
    id = generateId();
}

Article::~Article()
{

}

const std::vector<int>& Article::getUsers() const
{
    return Manager::getInstance().getUsers(this->id);
}

int Article::getId() const
{
    return id;
}

void Article::print() const
{
    std::cout << getId() << ": ";

    for (const int userId : getUsers())
    {
        std::cout << userId << ", ";
    }

    std::cout << std::endl;
}
