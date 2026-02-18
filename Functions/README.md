# Functions
Reigsters being used during the execution of the program 
<img width="1709" height="212" alt="Screenshot 2026-02-17 193506" src="https://github.com/user-attachments/assets/9a85916b-f787-4fc2-8f38-3f9d73ad469b" />
<img width="1667" height="168" alt="Screenshot 2026-02-17 193520" src="https://github.com/user-attachments/assets/92b6a12c-c615-4e3a-8866-5f5e937e8194" />
<img width="1696" height="141" alt="Screenshot 2026-02-17 193528" src="https://github.com/user-attachments/assets/f64da161-e503-45da-badf-60173ef23867" />
<img width="1713" height="175" alt="Screenshot 2026-02-17 193542" src="https://github.com/user-attachments/assets/6e154cdd-1d30-48be-bc1b-382a368efff1" />

# Memory
Looking at the stack while running the program
1. B is copied onto register eax.
   B = 14 in hex

<img width="1018" height="191" alt="image" src="https://github.com/user-attachments/assets/eebddcaa-e98b-44e5-b325-abaaeb8f4397" />

2. A is copied to register ecx
   A = 0a in hex

1. How many bytes do "a" and "b" occupy in memory?
   We know that each 32 bit integer is 4 bytes, or a dword, (a word is 2 bytes)
   Therefore two integers would occupy 8 bytes, or 8 to the power of 8, which is 64 bits.
2. Identifying the integers:
   Values are represented in hex
   10 = 0x0A
   20 = 14


---


# Data Sizes

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
# Reflection

Dissamsembly:
<img width="570" height="157" alt="image" src="https://github.com/user-attachments/assets/31801169-f44f-404f-a1d0-f03157eea36e" />

New register used:
1. xmm0 -
New size value being used in memory:
1. mmword ptr - 8 bytes

Overall: Each type has their own size value?


<img width="673" height="222" alt="image" src="https://github.com/user-attachments/assets/4843e44e-b18f-4631-8748-bacc29da2bbe" />

Memory stack: 
<img width="1015" height="199" alt="image" src="https://github.com/user-attachments/assets/7592ab75-bdc9-4db2-971a-38b99f5c9162" />







