#pragma once
#include <iostream>
#include <memory>
#include "Node.h"

class LinkedList
{
public:
    std::shared_ptr<Node> head;

    LinkedList();
    void append(int value);
    void append_after_a_number(int number);
    void display();
    void remove(int value);
};
