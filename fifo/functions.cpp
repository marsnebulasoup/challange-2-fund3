/*********************
Name: Kevin Bryniak
Assignment: Challenge 2: Question 2
A implementation of a queue.
**********************/

#include "functions.h"

void rand_int(int *integer)
{
  *integer = rand() * (rand() % 2 ? 1 : -1);
}

void rand_string(string *str)
{
  // create size 0 to MAXSTRSIZE-1
  int rnum = rand() % MAXSTRSIZE;

  // make buffer to hold rand string
  char *buffer = new char[rnum + 1];

  // fill buffer with random characters A to Z
  int i = 0;
  for (; i < rnum; i++)
  {
    buffer[i] = (rand() % ('Z' - 'A' + 1)) + 'A';
  }
  buffer[i] = '\0';

  // transfer buffer to passed in string
  *str = buffer;

  // clean up
  delete buffer;
  return;
}
