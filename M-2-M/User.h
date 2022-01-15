#pragma once
#include <iostream>
#include <vector>

class User
{
public:
    static int globalId;

    User();
    ~User();

    const std::vector<int>& getFavourites() const;
    int getId() const;

    void addFavourite(int inArticleId);

    void print() const;

private:
    int id;
};
