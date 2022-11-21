# Challenge 2 for programming fundamentals III

Note: Extra files besides the four specified were included so the program would compile.

**Question 1:** In your homework you had to create a linked list and a hash table using your linked list class. In that solution you used a linked list class within a hash table class. For this task, create a simple hash table that implements separate chaining directly and does NOT use a linked list class. Use the "Hash Table: Separate Chaining" presentation given in class as a guide and implement the case "Separate Chaining Methods: Array of Head Pointers." Use the standard Data and Node structs we have been using in class for Nodes, but you will not need a "previous" pointer. Your linked lists need to only be singly linked and do not need to maintain order (this makes things much simpler).

Specifications:

Use the "Hash Table: Separate Chaining" presentation given in class as a guide, and implement the case "Separate Chaining Methods: Array of HeadPointers."

Use the linked list repos shown in class as a guide. The links to those repos are in your linked list homework instructions.

Your linked lists MUST be singly linked (just always insert to the head or tail) and do not maintain order within each list.

Conform to all the definitions of standard hash table implementing separate chaining where the hash table ADT itself implements the linked list methods (rather than having a linked list class embedded in the hash table).

Implement the addEntry, removeEntry, getEntry, count, and displayTable methods.

Use modulo for your hash function.

Make a complete and properly architected, loosely-coupled class as discussed in lectures and notes, and conforming to all best practices.

Make a main.cpp, main.h to test your hash table.

Make all appropriate, complete, and exhaustive tests to prove your class works.

Turn in only 4 files, main.cpp, main.h, hash.cpp, hash.h.

Your code will be graded no different than any normal homework submission and must conform to all class submission guidelines.

Your code MUST compile with ONLY the files you submit, nothing more nothing less. If your code does not compile at the command line with the standard compile command given in class there will be a significant grade penalty, up to and including a grade of 0.


Submission: When you are ready to submit, place your 4 files in a single zip file, attach it to this question and upload it. Your zip file must contain ONLY those 4 files, no other files, no project or IDE files, no Mac OS files, and no directories including no top level directory). Inclusion of any other files/directories will incur an automatic 5% penalty. Mac people, you cannot use the built in zip utility because it will add extra files you cannot see, but Linux can (you are graded on Linux). Use the command line or a 3rd party zip utility to zip. Double check your zip files before submitting!


**Question 2:** In your coding assignments you had to create a stack (twice). A stack is a LIFO queue (last in, first out). Now create a FIFO "stack" (first in, first out) conforming to all the definitions of a stack except "pop" will pull data from the "bottom," not the "top." In other words, push will still push to the "top" but pull will pull from the "bottom." Similarly, peek will return the value on the "bottom."

Specifications:

Make a complete and properly architected, loosely-coupled "FIFO" class as discussed in lecture and notes, and conforming to all best practices.

Use a linked list to implement the queue, using the same "node" and "data" struct from your coding assignments. You can use a singly or doubly linked list. You are free to use a tail pointer in addition to the head pointer, your choice.

Make all the following methods for your FIFO class (it's up to you to figure out the parameters and return values):

push()

pull()

peek()

isEmpty()

Make a main.cpp/main.h to test your queue.

Make all appropriate, complete, and exhaustive tests to prove your object works.

Turn in only 4 files, main.cpp, main.h, fifo.cpp, fifo.h, no folders, no other files (see below).

Your code will be graded no different than any normal homework submission and must conform to all class submission guidelines.

Your code MUST compile with ONLY the files you submit, nothing more, nothing less. If your code does not compile at the command line with the standard compile command given in class there will be a significant grade penalty, up to and including a grade of 0.

Hint: This is very simple to implement, do not over complicate it. "push" will always add to the tail. "pull" will always pull from the head.

Submission: When you are ready to submit, place your 4 files in a single zip file, attach it to this question and upload it. Your zip file must contain ONLY those 4 files, no other files, no project or IDE files, no Mac OS files, and no directories including no top level directory). Inclusion of any other files/directories will incur an automatic 5% penalty. Mac people, you cannot use the built in zip utility because it will add extra files you cannot see, but Linux can (you are graded on Linux). Use the command line or a 3rd party zip utility to zip. Double check your zip files before submitting!
