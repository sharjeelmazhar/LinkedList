#include "LinkedList.h"

LinkedList::LinkedList() : head(nullptr) {}

void LinkedList::append(int value)
{
    std::shared_ptr<Node> newNode = std::make_shared<Node>(value);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    else
    {
        std::shared_ptr<Node> temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void LinkedList::append_after_a_number(int number)
{
    std::shared_ptr<Node> temp = head;

    while (temp != nullptr && temp->data != number)
    {
        temp = temp->next;
    }

    if (temp == nullptr)
    {
        return;
    }

    std::shared_ptr<Node> newNode = std::make_shared<Node>(number + 1);
    newNode->next = temp->next;
    temp->next = newNode;
}

void LinkedList::display()
{
    std::shared_ptr<Node> temp = head;
    while (temp != nullptr)
    {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "nullptr" << std::endl;
}

void LinkedList::remove(int value)
{
    if (head == nullptr) // If the list is empty, do nothing
        return;

    // Special case for the head node
    if (head->data == value)
    {
        head = head->next; // Remove the head node by moving head to the next node
        return;
    }

    std::shared_ptr<Node> temp = head;
    std::shared_ptr<Node> prev = nullptr;

    // Traverse the list to find the node to be deleted
    while (temp != nullptr && temp->data != value)
    {
        prev = temp;
        temp = temp->next;
    }

    // If the value was not found, do nothing
    if (temp == nullptr)
        return;

    // Unlink the node from the list
    prev->next = temp->next;
}
