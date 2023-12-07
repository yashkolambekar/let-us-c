#include <stdio.h>
#include <math.h>

// STUDENT DIVISON DECIDER
// int main()
// {
//     float m1, m2, m3, m4, m5;
//     float percentage;
//     char div;
//     printf("\n");
//     printf("Enter marks for 5 subjects: ");
//     scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
//     percentage = (((m1 + m2 + m3 + m4 + m5) / 500) * 100);
//     printf("%f", percentage);
//     printf("\n");
//     if (percentage >= 60)
//     {
//         div = 'A';
//     }
//     else if (percentage >= 50 && percentage <= 59)
//     {
//         div = 'B';
//     }
//     else if (percentage >= 40 && percentage <= 49)
//     {
//         div = 'C';
//     }
//     else
//     {
//         div = 'F';
//     }
//     printf("The division of student is %c", div);
//     printf("\n");
//     return 0;
// }



// INSURANCE DECIDER
// int main(){
//     int age, gender, married, insurance;
//     printf("\nEnter age: ");
//     scanf("%d", &age);
//     printf("Enter gender (0 for male, 1 for female): ");
//     scanf("%d", &gender);
//     printf("Enter martial status in binary: ");
//     scanf("%d", &married);
//     if(married == 1)
//     {
//         insurance = 1;
//     }
//     else
//     {
//         if(gender == 0 && age > 30)
//         {
//             insurance = 1;
//         }
//         else if (gender == 1 && age > 25)
//         {
//             insurance = 1;
//         }
//     }
//     if(insurance == 1)
//     {
//         printf("You are insured!");
//     }
//     else
//     {
//         printf("DANGER!");
//     }
// }


// int main(){
//     int num;
//     printf("Enter your number here: ");
//     scanf("%d", &num);
//     printf("Square = %d", (int)pow(num, 2));
// }