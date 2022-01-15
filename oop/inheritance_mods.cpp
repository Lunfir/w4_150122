#include <iostream>

class Base
{
public:
    void publicMethod() { std::cout << __PRETTY_FUNCTION__ << std::endl; }

protected:
    void protectedMethod() { std::cout << __PRETTY_FUNCTION__ << std::endl; }

private:
    void privateMethod() { std::cout << __PRETTY_FUNCTION__ << std::endl; }
};

class A : protected Base
{
public:
    void test() 
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        Base::protectedMethod();
        Base::publicMethod();
    }

private:
    void privateMethod() { std::cout << __PRETTY_FUNCTION__ << std::endl; }
};

class B : public A
{
public:
    void test() 
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        Base::protectedMethod();
        Base::publicMethod();
    }
};


int main(int argc, char const *argv[])
{
    A a;
    a.test();

    // B b;
    // b.test();
    
    return 0;
}