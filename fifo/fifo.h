/*********************
Name: Kevin Bryniak
Assignment: Challenge 2: Question 2
A implementation of a queue.
**********************/

#ifndef FIFO_H
#define FIFO_H

#include "data.h"
#include <string>
#include <iostream> // DEBUG ONLY

using std::cout; // DEBUG ONLY
using std::endl; // DEBUG ONLY
using std::string;

#define MIN_SIZE 2
#define DEFAULT_SIZE 10

class Queue
{
private:
  Node *top;
  Node *head;

public:
  Queue();
  ~Queue();

  bool isEmpty();
  bool push(int, string &);
  bool pull(Data &);
  bool peek(Data &);

  // DEBUG ONLY
  void dumpQueue();
};

#endif // FIFO_H
