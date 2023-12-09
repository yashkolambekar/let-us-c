#include <stdio.h>
#include <math.h>

// int main(){
//     int i;
//     i = 1;
//     switch(i)
//     {
//         case 1:
//             printf("Case 1");
//             break;
//         case 2:
//             printf("Case 2");
//             break;
//         case 3:
//             printf("Case 3");
//             break;
//         default:
//             printf("Nothing matched");
//     }
// }

// int main()
// {
//     int i;
//     for (i = 1; i <= 10; i++)
//     {
//         if (i == 8)
//         {
//             goto special;
//         }
//         else
//         {
//             printf("%d\n", i);
//         }
//     }
//     special:
//         printf("Special case\n");
//     return 0;
// }

// int main()
// {
//     int choice, number, answer, i;
//     while (1)
//     {
//         printf("\n");
//         printf("Choose an option\n");
//         printf("1. Factorial\n2. Prime or not\n3. Odd or even\n4. Exit\n");
//         scanf("%d", &choice);
//         printf("\n");
//         switch (choice)
//         {
//         case 1:
//             printf("Enter your number: ");
//             scanf("%d", &number);
//             answer = 1;
//             for (i = 1; i <= number; i++)
//             {
//                 answer = answer * i;
//             }
//             printf("Factorial value = %d", answer);
//             break;
//         case 2:
//             printf("Enter your number: ");
//             scanf("%d", &number);
//             for (i = 2; i < number; i++)
//             {
//                 if (number % i == 0)
//                 {
//                     printf("Not a prime number!");
//                     goto endloop;
//                 }
//             }
//             printf("Yes, a prime number");
//             endloop:
//                 break;
//         case 3:
//             printf("Enter your number: ");
//             scanf("%d", &number);
//             if (number % 2 == 0)
//             {
//                 printf("Even number");
//             }
//             else
//             {
//                 printf("Odd number");
//             }
//             break;
//         case 4:
//             printf("Program exited");
//             goto end;
//         }
//         printf("\n");
//     }
//     end:
//         printf("\n");
// }