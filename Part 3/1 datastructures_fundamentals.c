/*

1) What is Data?

Data means raw values or facts that a computer can store and process.
Data can be: Numbers, Characters, Symbols, Words.


2) Why We Need to Organize Data ?

If data is not organized properly:

a) It becomes difficult to use
b) Searching becomes slow
c) Managing data becomes hard

So we need a systematic way to organize data. Then data becomes meaningful, it becomes information.
This is where Data Structures come in.

3) What is a Data Structure?

A Data Structure is a way to organize and store data so it can be used efficiently.
Efficiency means: Less time, Less memory

Suppose you want to store 100 numbers. ex: int a1, a2, a3, a4, a5 ...
With data structure (ex: array - int numbers[100]) all numbers stored in one strcutre and its easy to manage.

Real Life examples: Images (pixe is a tiny colored dot and it has some color value)
it store using 2D array. 

Ex2: Browser history uses Stack structure. 

Advantages of Data Structures: 
1️⃣ Efficiency: Good data structure = faster + less memory
2️⃣ Reusability: Same data structure can be reused in many programs.
3️⃣ Abstraction: User doesn’t need to know internal details.


4) Why Companies Care About Data Structures

Data structures help in:

✔ Fast searching
✔ Efficient memory usage
✔ Handling large data
✔ Building complex applications

5) What is a Data Type?

A Data Type tells the computer two things:

1️⃣ What kind of values it can store
2️⃣ What operations can be performed on those values

So we can say:

Data Type = Values + Allowed Operations

Ex: primitive data types (inbult - int, float, char)
user defined data types (struct, union, enum)

6) What is an Abstract Data Type (ADT)?
An Abstract Data Type (ADT) defines:

a) What operations can be done or what we can do
b) But not how those operations are implemented


7) Client Program vs Implementation

There are two programs involved.

1️⃣ Client Program
This is the program that uses the data structure.
2️⃣ Implementation Program
This program contains the actual code.

Advantage of ADT
Big advantage: Implementation can change

Example: Suppose stack was implemented using array.
Later developer changes it to linked list. client program still works and Nothing changes for the user.

8) Connection: ADT vs Data Structure

From your previous concept:

* ADT (Abstract Data Type) = What to do
* Data Structure = How to do it

Data Structure is used to implement ADT

ADT → Blueprint
Data Structure → Implementation

Full Flow (Big Picture)
Data → Organized using Data Structure → Implements ADT → Used by Program

9) Which Data Structure to Use?
You can implement same ADT in multiple ways.

Example:
Stack → Array OR Linked List

So which one is better?
Answer: Depends on requirements

| Requirement                     | Best Choice |
| ------------------------------- | ----------- |
| Need speed                      | Array       |
| Need flexibility (dynamic size) | Linked List |

-------------------------------------------------------------------------------------------



*/