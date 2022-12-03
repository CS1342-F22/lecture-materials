//
// Created by Erik Gabrielsen on 11/9/22.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

#include <iostream>

struct Node
{
    int value;
    Node *next;
    Node *prev;
};

class LinkedList
{
public:
    LinkedList();

    void append(int value);
    void remove();
    void display() const;
    void reverseDisplay() const;

private:
    Node *head;
    Node *tail;
};

#endif // LINKEDLIST_LINKEDLIST_H
