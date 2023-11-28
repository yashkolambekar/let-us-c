// Problem 2.1
// Triangle area finder

// # include <stdio.h>
// # include <math.h>

// int main()
// {
//     float a, b, c, semiperimeter, area;
//     printf("Enter value of three sides (space seperated) : ");
//     scanf("%f %f %f", &a, &b, &c);
//     semiperimeter = (a + b + c) / 2;
//     area = sqrt(semiperimeter * ((semiperimeter - a) * (semiperimeter - b) * (semiperimeter - c)));
//     printf("\n");
//     printf("%f %f %f", a, b, c);
//     printf("The area of triangle is %f", area);
//     return 0;
// }




// Problem 2.2
// Reverse a five digit int

// # include <stdio.h>
// int main()
// {
//     int num, d5, d4, d3, d2, d1;
//     long int reversed;
//     printf("Enter a 5 digit number: ");
//     scanf("%d", &num);
//     d5 = num % 10;
//     num =  num / 10;
//     d4 = num % 10;
//     num =  num / 10;
//     d3 = num % 10;
//     num =  num / 10;
//     d2 = num % 10;
//     num =  num / 10;
//     d1 = num % 10;
//     num =  num / 10;
//     reversed = d1 + d2 * 10 + d3 * 100 + d4 * 1000 + d5 * 10000;
//     printf("Reversed number = %d", reversed);
//     return 0;
// }




// Problem 2.3
// Lowest currency

// # include <stdio.h>
// int main(){
//     int total, c100, c50, c10, c5, c2, c1;
//     printf("\n");
//     printf("Enter total amount: ");
//     scanf("%d", &total);
//     printf("\n");
//     c100 = (total - (total % 100)) / 100;
//     total = total % 100;
//     c50 = (total - (total % 50)) / 50;
//     total = total % 50;
//     c10 = (total - (total % 10)) / 10;
//     total = total % 10;
//     c5 = (total - (total % 5)) / 5;
//     total = total % 5;
//     c2 = (total - (total % 2)) / 2;
//     total = total % 2;
//     c1 = (total - (total % 1)) / 1;
//     total = total % 1;
//     printf("100 = %d\n", c100);
//     printf("50 = %d\n", c50);
//     printf("10 = %d\n", c10);
//     printf("5 = %d\n", c5);
//     printf("2 = %d\n", c2);
//     printf("1 = %d\n", c1);
//     return 0;
// }




// 