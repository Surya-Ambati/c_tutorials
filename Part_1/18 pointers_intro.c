#include<stdio.h>

/*
Key Reasons:
1)  Dynamic size at runtime You don't always know how much memory you need at compile time.
2) Stack memory disappears when a function returns. Heap memory doesn't.
3) Sharing data across the program Multiple functions can access the 
    same heap memory if they all hold a pointer to it — no copying needed.
4) Instead of copying large structures. Pointers pass only memory address, which is efficient.

*/

int main(){

  int abc = 15;
  printf("address of abc variable - %p\n",&abc);

  int *pi = &abc;
  printf("address in pi - %p\n", pi);
  printf("value inside reference-abc - dereference %d\n", *pi);
  printf("address of pi - %p\n", &pi);

//value update
    *pi = 25;
    printf("updated value of abc - %d\n", abc);

}











/*
                Memory (RAM)

 Address
 209  |----------------|
 208  |----------------|
 207  |----------------|
 206  |----------------|
 205  |----------------|     
 204  |----------------|     
 203  |----------------|     
 202  |----------------|     
 201  |----------------|

 Each block = 1 byte
 int a = 4 bytes (typical system or based on compiler)
*/





/*
Memory Layout Example

Suppose:
    int a = 10;

Address      Content
--------------------------------
1004   | byte 4 of a |
1003   | byte 3 of a |
1002   | byte 2 of a |
1001   | byte 1 of a |
--------------------------------

Total size of int = 4 bytes
Each memory cell = 1 byte
*/




/*
Example:

int a = 25;
int *p = &a;

Memory Layout

Address      Value
-----------------------
1001x        | 25    |   <-- a
1005x        |1001x (address, not a value) |   <-- p (stores address of a)

a  = value 25
p  = address of a (1000)
*p = value at address (25)
*/
