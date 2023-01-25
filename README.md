# Two-s-2-s-Complement-Calculator
              This C program is designed to convert a given number from decimal to a complement 2.

The program first converts the decimal number to binary using the binary() function. Then, it checks if the number is positive or negative, and based on that it does the following:

If the number is positive, the program prints the binary representation of the number (the value signée) and assigns the value signée to both complement a 1 and complement a 2.

If the number is negative, the program calculates the complement a 1 and complement a 2 of the value signée using two functions complement1() and complement2().

The program uses several arrays and pointers to store and pass the values between different functions and the main function. The program also uses the pow() function from math.h library to calculate the power of 2.
