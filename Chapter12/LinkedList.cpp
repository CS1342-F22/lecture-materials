//
// Created by Erik Gabrielsen on 11/9/22.
//

#include "LinkedList.h"

LinkedList::LinkedList()
{
    head = nullptr;
    tail = nullptr;
}

void LinkedList::append(int value)
{
    // 1. Create the Node
    Node *newNode = new Node();
    newNode->value = value;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void LinkedList::display() const
{
    // 1.
    Node *temp = head;
    while (temp != nullptr)
    {
        std::cout << temp->value << " ";

        temp = temp->next;
    }
}

void LinkedList::remove()
{
    if (head != nullptr)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        head->prev = nullptr;
    }
}

void LinkedList::reverseDisplay() const
{
    Node *temp = tail;
    while (temp != nullptr)
    {
        std::cout << temp->value << " ";
        temp = temp->prev;
    }
}
