#include <iostream>
//This is an exercise from a book. Without running the code, 
//                                 can you work out what the following will produce as output?

auto k{ 430u };
auto j{ (k >> 4) & ~(~0u << 3) };

// 1.) The complement of an integer value is equal to -(n+1). 
//     Using the bitwise complement operator on the ~0u will produce -(0+1)= -1. The complement of 0u is -1.
// 2.)   Shifting 3 bits to the left will produce -1000, which is -8 in a decimal representation
// 3.)    Next we use the complement operator on the value inside the parantheses (the value is -8). -(-8+1)= 7. 7 is equal to 111.
// 4.) 430 is equal to 110101110. Shifting 4 bits to the left will produce 000011010 (11010). 
// 5.) Using the bitwise AND operator on the values 11010 and 111 will produce 10. 
// (if corresponding bits are both 1, then the result is 1 bit, otherwise it is 0)
//   . 10 is equal to 2 in decimal. The output will be 2. 
