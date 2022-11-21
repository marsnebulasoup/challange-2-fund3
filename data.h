/*********************
Name: Kevin Bryniak
Assignment: Challenge 2: Question 1
A implementation of a hash table.
**********************/

#ifndef DATA_H
#define DATA_H

#include "string"
using std::string;

struct Data
{
  int id;
  string data;
};

struct Node
{
  Data data;
  Node *next;
};

#endif /* DATA_H */
