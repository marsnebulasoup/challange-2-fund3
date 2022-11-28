/*********************
Name: Kevin Bryniak
Assignment: Challenge 2: Question 2
A implementation of a queue.
**********************/

#include "fifo.h"

Queue::Queue()
{
  head = NULL;
  top = head;
}

Queue::~Queue()
{
  if (head)
  {
    Node *previous = head;
    Node *current = head;
    while (current->next)
    {
      previous = current;
      current = current->next;
      delete previous;
    }
    delete current;
    head = NULL;
  }
}

bool Queue::isEmpty()
{
  return top == NULL;
}

bool Queue::push(int id, string &information)
{
  bool wasPushed = false;
  if (id > 0 && information.length() > 0)
  {
    Node *newTop = new Node;
    newTop->data = Data{id, information};
    newTop->next = NULL;

    if (head)
    {
      // newTop->next = top;
      // top = newTop;
      top->next = newTop;
      top = newTop;
    }
    else
    {
      head = top = newTop;
    }
    wasPushed = true;
  }
  return wasPushed;
}

bool Queue::pull(Data &to)
{
  bool peekSuccessful = peek(to);
  if (peekSuccessful)
  {
    Node *oldHead = head;
    if (top == head)
    {
      top = NULL;
    }
    head = head->next;
    delete oldHead;
  }
  return peekSuccessful;
}

bool Queue::peek(Data &to)
{
  bool isEmpty = this->isEmpty();

  to.id = isEmpty ? -1 : head->data.id;
  to.data = isEmpty ? "" : head->data.data;

  return !isEmpty;
}

void Queue::dumpQueue() // DEBUG ONLY
{
  Node *current = head;
  cout << "\n-- Begin Queue --" << endl;
  while (current)
  {
    cout << current->data.id << " | " << current->data.data << endl;
    current = current->next;
  }
  cout << "-- End Queue --\n"
       << endl;
}