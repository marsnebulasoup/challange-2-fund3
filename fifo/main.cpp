/*********************
Name: Kevin Bryniak
Assignment: Challenge 2: Question 2
A implementation of a queue.
**********************/

#include "main.h"

int main(int argc, char **argv)
{
  srand(time(NULL));

  int failureCount = 0;

  cout << "---TESTS HAVE BEGUN----------------\n"
       << endl;

  for (int _ = 0; _ <= TEST_COUNT; _++)
  {
    int size = rand() % MAX_QUEUE_SIZE;
    cout << "Queue size is " << size << endl;

    Queue queue;

    // Empty tests
    cout << endl
         << "Running empty queue tests..." << endl;
    Data *data = new Data;

    ASSERT_PASSED(queue.isEmpty(), "queue is initially empty.");

    ASSERT_PASSED(!queue.peek(*data), "queue peek failed because queue is empty.");
    ASSERT_DATA_IS_EMPTY(data);

    delete data;
    data = new Data;

    ASSERT_PASSED(!queue.pull(*data), "queue pull failed because queue is empty.");
    ASSERT_DATA_IS_EMPTY(data);

    delete data;
    data = NULL;

    Data **randomData = new Data *[size]; // random size
    cout << "Displaying test data (" << size << " entries)" << endl;
    for (int i = 0; i < size; i++)
    {
      randomData[i] = new Data;
      rand_int(&randomData[i]->id);
      rand_string(&randomData[i]->data);

      cout << randomData[i]->id << " | " << randomData[i]->data << endl;
    }

    cout << "Filling queue..." << endl;
    for (int i = 0; i < size; i++)
    {
      Data *currentData = randomData[i];
      if (currentData->id <= 0 || currentData->data.length() <= 0) // Invalid data, attempt to push it
      {
        ASSERT_PASSED(!queue.push(currentData->id, currentData->data), "pushing random invalid data into the queue succeeded.");
      }
      else // Valid data, push it
      {
        ASSERT_PASSED(queue.push(currentData->id, currentData->data), "pushing random valid data into the non-full queue.");
        ASSERT_PASSED(!queue.isEmpty(), "checking if the queue is not empty");
      }

      queue.dumpQueue();
    }

    cout << "Emptying queue..." << endl;
    for (int i = 0; i < size; i++)
    {
      Data *currentData = randomData[i];
      Data *tempData = new Data;
      if (currentData->id <= 0 || currentData->data.length() <= 0) // Invalid data, should not be in queue
      {
        queue.peek(*tempData);
        ASSERT_UNEQUAL_DATA(tempData, currentData, "peeking invalid data should not have been found");

        delete tempData;
      }
      else // Valid data, get it
      {
        ASSERT_PASSED(queue.peek(*tempData), "peeking data should have succeeded");
        ASSERT_EQUAL_DATA(tempData, currentData, "peeked data should have been equal to current data");

        delete tempData;
        tempData = new Data;

        ASSERT_PASSED(queue.pull(*tempData), "pulling data should have succeeded");
        ASSERT_EQUAL_DATA(tempData, currentData, "pulled data should have been equal to current data");
      }

      queue.dumpQueue();
    }

    cout << "\nDumping final queue:" << endl;
    queue.dumpQueue();
  }

  cout << "---TESTS HAVE ENDED----------------\n"
       << endl;
  cout << "Tests completed with " << failureCount << " failure(s)." << endl;

  return 0;
}