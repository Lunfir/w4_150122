#include <iostream>
#include <array>

class Iterator
{
public:
    Iterator(std::array<int, 7>* inArray)
    {
        array = inArray;
        currentIndex = 0;
    }

    ~Iterator() = default;

    Iterator begin() const
    {
        return Iterator(array, 0);
    }

    Iterator end() const
    {
        return Iterator(array, array->size());
    }

    Iterator& operator++()
    {
        currentIndex += 1;

        return *this;
    }

    int operator*() const
    {
        return (*array)[currentIndex];
        // return array->operator[](currentIndex);
    }

    bool operator!=(const Iterator& other) const
    {
        return !(*this == other);
    }

    bool operator==(const Iterator& other) const
    {
        return (this->array == other.array) 
            && (this->currentIndex == other.currentIndex);
    }

private:
    Iterator(std::array<int, 7>* inArray, int inIndex)
    {
        array = inArray;
        currentIndex = inIndex;
    }
    
    std::array<int, 7>* array;
    int currentIndex;
};

int main()
{
    std::array<int, 7> array = { 2, 12, 23, 34, 12, 21, 45 };
    Iterator iter(&array);

    for ( ; iter != iter.end(); ++iter)
    {
        std::cout << *iter << std::endl;
    }

    return 0;
}