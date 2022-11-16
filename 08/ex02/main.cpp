#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);
    std::cout << "5, 17 were pushed to stack" << std::endl;
    std::cout << "Top: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Top one was deleted!" << std::endl;
    std::cout << "Stack size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737); //[...] mstack.push(0);
    std::cout << "3, 5, 737 were pushed to stack!" << std::endl;
    MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "Current *it: " << *it << "\t Current *ite: " << *ite << std::endl;
    std::cout << "While it != ite: " << std::endl;
    while (it != ite)
    {
        std::cout << "Current *it: " << *it << std::endl;
        ++it;
    }
    std::cout << std::endl;
    //std::stack<int> s(mstack);
    return 0;
}