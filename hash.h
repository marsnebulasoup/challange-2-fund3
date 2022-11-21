/*********************
Name: Kevin Bryniak
Assignment: Challenge 2: Question 1
A implementation of a hash table.
**********************/

#ifndef HASH_H
#define HASH_H

#include "data.h"
#include "string"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::left;
using std::setw;
using std::string;

#define SIZE 15

class HashTable
{
private:
  int count;
  Node *table[SIZE];
  int hash(int);

  bool addNode(Node **, int, string *);
  bool deleteNode(Node **, int);
  bool getNode(Node *, Data *, int);
  void printList(Node *);

public:
  HashTable();

  bool insertEntry(int, string *);
  bool removeEntry(int);
  bool getData(int, Data *);
  int getCount();
  void printTable();
};

#endif