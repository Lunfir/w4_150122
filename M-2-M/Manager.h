#pragma once
#include <iostream>
#include <vector>
#include <unordered_map>

class Manager
{
public:
    static Manager& getInstance();

    void addArticleToFavourites(int inUserId, int inArticleId);

    const std::vector<int>& getFavourites(int inUserId) const;

    const std::vector<int>& getUsers(int inArticleId) const;

private:
    std::unordered_map<int, std::vector<int>> favouriteArticles; // usersToArticles
    std::unordered_map<int, std::vector<int>> usersForArticle;// articlesToUsers
};
