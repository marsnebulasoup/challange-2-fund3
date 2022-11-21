/*********************
Name: Kevin Bryniak
Assignment: Challenge 2: Question 1
A implementation of a hash table.
**********************/

#include "hash.h"

HashTable::HashTable()
{
  count = 0;
  for (int i = 0; i < SIZE; i++)
  {
    table[i] = NULL;
  }
}

int HashTable::hash(int id)
{
  return id % SIZE;
}

bool HashTable::insertEntry(int id, string *data)
{
  bool wasInserted = false;
  if (id > 0 && data && data->length() > 0)
  {
    wasInserted = addNode(&table[hash(id)], id, data);
    count += wasInserted;
  }
  return wasInserted;
}

bool HashTable::removeEntry(int id)
{
  bool wasRemoved = false;
  if (id > 0)
  {
    wasRemoved = deleteNode(&table[hash(id)], id);
    count -= wasRemoved;
  }
  return wasRemoved;
}

bool HashTable::getData(int id, Data *to)
{
  bool wasFound = false;
  if (id > 0)
  {
    wasFound = getNode(table[hash(id)], to, id);
  }
  else
  {
    to->id = -1;
    to->data = "";
  }
  return wasFound;
}

int HashTable::getCount()
{
  return count;
}

void HashTable::printTable()
{
  cout << left << "# -|-- Entry -----------------------------" << endl;
  for (int i = 0; i < SIZE; i++)
  {
    cout << setw(2) << i + 1 << " | ";
    printList(table[i]);
  }
  cout << "------------------------------------------" << endl;
}

bool HashTable::addNode(Node **head, int id, string *data)
{
  bool wasAdded = false;
  if (id > 0 && data->length() > 0)
  {
    Node *current = *head;
    while (current && current->data.id != id)
    {
      current = current->next;
    }
    if (!current)
    {
      Node *newNode = new Node;
      newNode->data = Data{id, *data};
      newNode->next = *head;
      (*head) = newNode;

      wasAdded = true;
    }
  }
  return wasAdded;
}

bool HashTable::deleteNode(Node **head, int id)
{
  bool wasRemoved = false;
  if (id > 0)
  {
    Node *previous = *head;
    Node *current = *head;
    while (current && current->data.id != id)
    {
      previous = current;
      current = current->next;
    }

    if (current && current == *head)
    {
      *head = current->next;
      delete current;
      wasRemoved = true;
    }
    else if (previous && current && current->data.id == id)
    {
      previous->next = current->next;
      delete current;
      wasRemoved = true;
    }
  }
  return wasRemoved;
}

bool HashTable::getNode(Node *head, Data *data, int id)
{
  bool wasFound = false;
  if (id > 0 && data)
  {
    Node *current = head;
    while (current && current->next && current->data.id != id)
    {
      current = current->next;
    }
    if (current && current->data.id == id)
    {
      data->id = current->data.id;
      data->data = current->data.data;
      wasFound = true;
    }
    else
    {
      data->id = -1;
      data->data = "";
    }
  }
  return wasFound;
}

void HashTable::printList(Node *head)
{
  Node *current = head;
  while (current)
  {
    cout << current->data.id << (current->next ? " -> " : "");
    current = current->next;
  }
  cout << endl;
}