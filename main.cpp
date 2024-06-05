#include "LinkedList.h"
#include <iostream>
#include <memory>

int main()
{
    // LinkedList *ll;
    std::unique_ptr<LinkedList> ll = std::make_unique<LinkedList>();
    ll->append(1);
    ll->append(2);
    ll->append(4);
    ll->append(5);
    ll->append(6);
    std::cout << "\n\n";
    ll->display();
    ll->append_after_a_number(2);
    std::cout << "\n\n";
    ll->display();
    std::cout << "\n\n";
    ll->remove(3);
    ll->display();
    std::cout << "\n\n";

    return 0;
}
