/*********************
Name: Kevin Bryniak
Assignment: Challenge 2: Question 2
A implementation of a queue.
**********************/

#ifndef QUEUES_MACROS_H
#define QUEUES_MACROS_H

#define ASSERT_PASSED(expression, message) \
  if (!(expression))                       \
  {                                        \
    cout << "Failed: " << message << endl; \
    failureCount++;                        \
  }

#define ASSERT_DATA_IS_EMPTY(data1) \
  ASSERT_PASSED(data1->id == -1 && data1->data == "", "returned data should be empty.");

#define ASSERT_EQUAL_DATA(data1, data2, message) \
  ASSERT_PASSED(data1->id == data2->id && data1->data == data2->data, message);

#define ASSERT_UNEQUAL_DATA(data1, data2, message) \
  ASSERT_PASSED(data1->id != data2->id || data1->data != data2->data, message);

#endif // QUEUES_MACROS_H