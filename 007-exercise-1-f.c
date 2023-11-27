// A : Farenheit to Degrees

// # include <stdio.h>
// int main()
// {
//     float fahrenheit, celsius;
//     printf("Enter temprature in degrees Fahrenheit : ");
//     scanf("%f", &fahrenheit);
//     celsius = (fahrenheit - 32) * 5 / 9;
//     printf("\n");
//     printf("Temprature in Celsius is %f", celsius);
//     return 0;
// }



// B : Area of Rectangle and Circumfrence of Circle

// # include <stdio.h>
// int main()
// {
//     float length, breadth, radius, area_rect, perimeter_rect, area_cir, circumference_circ;
//     printf("\n");
//     printf("Enter the length and breadth of Rectange: ");
//     scanf("%f %f", &length, &breadth);
//     printf("\n");
//     area_rect = length * breadth;
//     perimeter_rect = (length + breadth) * 2;
//     printf("Area of Rectangle = %f\n", area_rect);
//     printf("Perimeter of Rectangle = %f\n", perimeter_rect);
//     printf("\n");
//     printf("Enter the radius of circle : ");
//     scanf("%f", &radius);
//     area_cir = 3.141592 * radius * radius;
//     printf("\n");
//     circumference_circ = 2 * radius * 3.141592;
//     printf("Area of Circle = %f\n", area_cir);
//     printf("Circumference of Circle = %f\n", circumference_circ);
//     return 0;
// }



// C : Paper size calculator

// # include <stdio.h>
// int main()
// {
//     int a0l, a0b, a1l, a1b, a2l, a2b;
//     printf("\n");
//     a0l = 1189;
//     a0b = 841;
//     printf("A0: %d %d", a0l, a0b);
//     printf("\n");
//     a1l = a0b;
//     a1b = (a0l / 2);
//     printf("A1: %d %d", a1l, a1b);
//     printf("\n");
//     a2l = a1b;
//     a2b = (a1l / 2);
//     printf("A2: %d %d", a2l, a2b);
// }