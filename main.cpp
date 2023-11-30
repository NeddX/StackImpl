#include "Stack.hpp"

int main()
{
    stl::Stack<int> a = { 5, 1, 6 };
    auto f = a;
    a.Push(10);
    a.Pop();
    a.Size();
    a.MaxSize();
    a.Capacity();
    a.Data();
    std::cout << f << std::endl;
}
