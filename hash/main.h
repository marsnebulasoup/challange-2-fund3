/*********************
Name: Kevin Bryniak
Assignment: Challenge 2: Question 1
A implementation of a hash table.
**********************/

#ifndef MAIN_H
#define MAIN_H

#include <iostream> /* cout, endl */
#include <stdlib.h> /* srand, rand */
#include <time.h>   /* time */
#include <string>   /* string */
#include <map>
#include "hash.h"
#include "macros.h"

#define BUFFERSIZE 8
#define MAXID 100
#define BASE 5
#define OFFSET 20

#define RANDOM_TEST_COUNT 100000

using std::cout;
using std::endl;
using std::map;
using std::pair;
using std::string;

enum TestOptions
{
  ADD,
  REMOVE
};

struct TestEntry
{
  bool isInserted;
  int index;
};

#endif /* MAIN_H */

