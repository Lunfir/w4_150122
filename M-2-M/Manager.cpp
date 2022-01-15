#include "Manager.h"

Manager& Manager::getInstance()
{
    static Manager manager;
    
    return manager;
}

void Manager::addArticleToFavourites(int inUserId, int inArticleId)
{
    favouriteArticles[inUserId].push_back(inArticleId);
    usersForArticle[inArticleId].push_back(inUserId);
}

const std::vector<int>& Manager::getFavourites(int inUserId) const
{
    return favouriteArticles.at(inUserId);
}

const std::vector<int>& Manager::getUsers(int inArticleId) const
{
    return usersForArticle.at(inArticleId);
}