// Initialize the value with the type declaration
// int age = 12;
// float height = 3.4, weight = 54.33;

// A variable should be defined before we use it, this will throw an error
// float b = a + 23, a = 22;

// We can declare variables together
// And assign same value to all
// int a, b, c, d;
// a = b = c = d = 10;

// This will NOT work!
// int a = b = c = d = 10

// Integer mode arithmetic
// All the operands are integers in this one
// int i;
// i = i + 12;

// Real mode arithmetic
// All operands are real
// float pi, radius, area;
// pi = 3.124;
// radius = 12.44;
// area = pi * radius * radius;

// Mixed mode arithmetic
// Multiple type of operands in the statement
// int a, b;
// float c, d;
// d = a + b + c;


// # include <stdio.h>
// int main()
// {
//     char x = 'a', y = 'b';
//     int z;
//     z = x + y;
//     printf("%d", z);
//     return 0;
// }


// pow() function is used to raise a number to a power
// pow(number, power); it should be imported from math.h
// # include <stdio.h>
// # include <math.h>
// int main(){
//     int num = 20, square;
//     square = pow(20, 2);
//     printf("%d", square);
//     return 0;
// }


// Operation between integer and integer

// # include <stdio.h>
// # include <math.h>
// int main()
// {
//     int i = 10;
//     int j = 3;
//     float d = i / j;
//     printf("%f", d); // returns 3.000 because result of i / j is integeer
//     return 0;
// }



// Type conversion in assignments
// int i = 3.5 // this is stored as 3
// float j = 30 // this is stored as 30.00