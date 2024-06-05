#pragma once
#include <memory>

class Node
{
public:
    int data;
    std::shared_ptr<Node> next;

    Node(int data);
};
