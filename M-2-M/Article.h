#pragma once
#include <iostream>
#include <vector>

class Article
{
public:
    Article();
    ~Article();

    const std::vector<int>& getUsers() const;
    int getId() const;

    void print() const;

private:
    int id;
};