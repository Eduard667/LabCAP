# Functions
Reigsters being used during the execution of the program 
<img width="1709" height="212" alt="Screenshot 2026-02-17 193506" src="https://github.com/user-attachments/assets/9a85916b-f787-4fc2-8f38-3f9d73ad469b" />
<img width="1667" height="168" alt="Screenshot 2026-02-17 193520" src="https://github.com/user-attachments/assets/92b6a12c-c615-4e3a-8866-5f5e937e8194" />
<img width="1696" height="141" alt="Screenshot 2026-02-17 193528" src="https://github.com/user-attachments/assets/f64da161-e503-45da-badf-60173ef23867" />
<img width="1713" height="175" alt="Screenshot 2026-02-17 193542" src="https://github.com/user-attachments/assets/6e154cdd-1d30-48be-bc1b-382a368efff1" />

# Memory
Looking at the stack while running the program
<img width="1739" height="176" alt="Screenshot 2026-02-17 200042" src="https://github.com/user-attachments/assets/b8241266-6f31-4173-b716-ef08feec7df8" />
<img width="1881" height="327" alt="Screenshot 2026-02-17 200021" src="https://github.com/user-attachments/assets/39aec9ec-9b2f-4622-b3da-338fb13f72ae" />

Original Stack: (Cant see any values in red, so will need to continue on school computers)
<img width="1523" height="703" alt="image" src="https://github.com/user-attachments/assets/bbc3b8c9-9722-4fd1-8eeb-42d8f2a7dd8b" />

Stack after one instruction executed: (Cant see any values in red, so will need to continue on school computers)
<img width="1538" height="738" alt="image" src="https://github.com/user-attachments/assets/ff6f080c-92cd-4f14-a258-8510460ae1ff" />


---



# Data Sizes - Updated code: 
0x0018FE15  cc cc cc cc cc cc cc cc cc cc cc cc cc  ÌÌÌÌÌÌÌÌÌÌÌÌÌ
0x0018FE22  cc cc cc cc cc cc cc cc cc cc cc cc cc  ÌÌÌÌÌÌÌÌÌÌÌÌÌ
0x0018FE2F  cc 0a 00 00 00 14 00 00 00 00 00 00 00  Ì............
0x0018FE3C  00 00 00 00 00 e0 fd 7e cc cc cc cc cc  .....àý~ÌÌÌÌÌ
0x0018FE49  cc cc cc cc cc cc cc cc cc cc cc cc cc  ÌÌÌÌÌÌÌÌÌÌÌÌÌ
0x0018FE56  cc cc cc cc cc cc cc cc cc cc cc cc cc  ÌÌÌÌÌÌÌÌÌÌÌÌÌ 

1. How many bytes do "a" and "b" occupy in memory?
   We know that each 32 bit integer is 4 bytes, or a dword, (a word is 2 bytes)
   Therefore two integers would occupy 8 bytes, or 8 to the power of 8, which is 64 bits.
2. Identifying the integers:
   Values are represented in hex
   10 = 0x0A
   20 = 14

## Updated code:
```cpp
#include <iostream>
using namespace std;

int mymax(int a, int b) {
    return (a > b) ? a : b;
}

// New function with 3 different parameter types
void showValues(int x, double y, char z) {
    cout << "x (int)    = " << x << endl;
    cout << "y (double) = " << y << endl;
    cout << "z (char)   = " << z << endl;
}

int main() {
    int a = 10;
    int b = 20;

    int max = mymax(a, b);

    cout << "a = " << a << ", b = " << b << endl;
    cout << "max = " << max << endl;

    // Call new function
    showValues(42, 3.14, 'A');

    return 0;
}
```
# Reflection - need to improve

With the code changed: here is what I noticed:
char is promoted to int before pushing.
double takes 8 bytes on the stack.
The caller cleans up the stack after the call (add esp, N)

