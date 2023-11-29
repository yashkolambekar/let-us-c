#include <stdio.h>
#include <math.h>

// int main()
// {
//     char ans;
//     printf("Type a or b");
//     scanf("%c", &ans);
//     if (ans == "a")
//         printf("Ans is = a");
//     else
//         printf("Ans is = b");
// }

// 10% discount if quantity more than 1000
// scan price and quanity

// int main(){
//     printf("\n");
//     int quantity, price, total;
//     printf("Enter the price: ");
//     scanf("%d", &price);
//     printf("Enter the quanity: ");
//     scanf("%d", &quantity);
//     total = price * quantity;
//     if (quantity > 1000)
//         total = total - ((total * 10)/100);
//     printf("Your total is %d", total);
//     printf("\n");
// }

// basic sal < 1500, HRA = 10%,  DA = 90%
// basic sal >= 1500, HRA = 500, DA = 98%

// int main()
// {
//     int salary;
//     float hra, da, gross_salary;
//     printf("\n");
//     printf("Enter salary of Employee: ");
//     scanf("%d", &salary);
//     if (salary < 1500){
//         hra = (salary * 10) / 100;
//         da = (salary * 90) / 100;
//     }
//     else {
//         hra = 500;
//         da = (salary * 98) / 100;
//     }
//     gross_salary = salary + hra + da;
//     printf("Gross salary of employee is : %f", gross_salary);
//     printf("\n");
//     return 0;
// }

// Profit or loss detector

// int main()
// {
//     float buying, selling;
//     printf("\n");
//     printf("Enter the buying price: ");
//     scanf("%f", &buying);
//     printf("Enter the selling price: ");
//     scanf("%f", &selling);
//     if (selling > buying){
//         printf("You made a profit of %f", (selling - buying));
//     }
//     if(selling < buying){
//         printf("You inccured a loss of %f", (buying - selling));
//     }
//     if(selling == buying){
//         printf("It was bhaav-to-bhaav trade");
//     }
//     printf("\n");
//     return 0;
// }

// Odd or even detector

// int main()
// {
//     int num;
//     printf("\n");
//     printf("Enter your number : ");
//     scanf("%d", &num);
//     if (num % 2 == 0)
//     {
//         printf("%d is an even number", num);
//     }
//     else
//     {
//         printf("%d is an odd number", num);
//     }
//     printf("\n");
//     return 0;
// }

// int main()
// {
//     int a = 300, b, c;
//     if (a >= 400)
//     {
//         b = 300;
//     }
//     c = 200;
//     printf("%d %d \n", b, c);
//     return 0;
// }

// int main(){
//     char a = "A";
//     int b = "A";
//     if (b == a){
//         printf("Equal");
//     }else{
//         printf("Not equal");
//     }
// }

// Valid triangle

// int main()
// {
//     int a1, a2, a3, total;
//     printf("\n");
//     printf("Enter the measures of 3 angles: ");
//     scanf("%d %d %d", &a1, &a2, &a3);
//     total = a1 + a2 + a3;
//     if (total == 180)
//     {
//         printf("Triangle is valid");
//     }
//     else
//     {
//         printf("Triangle is not valid");
//     }
//     printf("\n");
//     return 0;
// }


