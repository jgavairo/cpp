#include "MutantStack.hpp"
#include <list>
int main()
{
    std::cout << "===TESTS WITH MUTANT STACK===" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "===TESTS WITH LIST===" << std::endl;
    std::list<int> listTest;
    listTest.push_back(5);
    listTest.push_back(17);
    std::cout << listTest.back() << std::endl;
    listTest.pop_back();
    std::cout << listTest.size() << std::endl;
    listTest.push_back(3);
    listTest.push_back(5);
    listTest.push_back(737);
    listTest.push_back(0);
    std::list<int>::iterator it2 = listTest.begin();
    std::list<int>::iterator ite2 = listTest.end();
    ++it2;
    --it2;
    while (it2 != ite2)
    {
    std::cout << *it2 << std::endl;
    ++it2;
    }
    std::list<int> s2(listTest);

    return 0;
}