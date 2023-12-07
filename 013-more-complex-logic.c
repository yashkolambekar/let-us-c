#include <stdio.h>

//
// int main()
// {
//     int num;
//     printf("\n");
//     printf("Enter 0 or 1: ");
//     scanf("%d", &num);
//     if (!num)
//     {
//         printf("The number entered was 0");
//     }
//     else{
//         printf("1 entered");
//     }
//         printf("\n");
// }

// Leap year checker usin && and ||
// int main(){
//     int year;
//     printf("\n");
//     printf("Enter your year: ");
//     scanf("%d", &year);
//     if(year % 4 == 0 && year % 100 != 0 || year % 100 == 0 && year % 400 == 0){
//         printf("It is a leap year");
//     }else{
//         printf("Not!");
//     }
//     printf("\n");
// }

// Character checker
// int main(){
//     char character;
//     printf("\n");
//     printf("Enter your character: ");
//     scanf("%c", &character);
//     if(character >= 65 && character <= 90){
//         printf("Upper case character");
//     }
//     else if(character >= 97 && character <= 122){
//         printf("Lower case character");
//     }
//     else if(character >= 48 && character <= 57){
//         printf("Number");
//     }
//     else{
//         printf("Special symbols");
//     }
//     printf("\n");
// }

// Triangle validity checker
// int main()
// {
//     int s1, s2, s3;
//     printf("Enter s1, s2, s3: ");
//     scanf("%d %d %d", &s1, &s2, &s3);
//     if (s1 > s2 && s1 > s3 && s1 < (s2 + s3))
//     {
//         printf("Valid triangle");
//     }
//     else if (s2 > s1 && s2 > s3 && s2 < (s1 + s3))
//     {
//         printf("Valid triangle");
//     }
//     else if (s3 > s2 && s3 > s1 && s3 < (s2 + s1))
//     {
//         printf("Valid triangle");
//     }
//     else
//     {
//         printf("Invalid triangle");
//     }
// }

// RGB TO CMYK
// int main(){
//     float r, g, b;
//     float c, m, y, k, w;
//     printf("\n");
//     printf("Enter RGB values: ");
//     scanf("%f %f %f", &r, &g, &b);
//     if(r/255 > g/255 && r/255 > b/255){
//         w = r/255;
//     }else if(g/255 > r/255 && g/255 > b/255){
//         w = g/255;
//     }else{
//         w = b/255;
//     }
//     c = (w - r / 255) / w;
//     m = (w - g / 255) / w;
//     y = (w - b / 255) / w;
//     k = 1 - w;
//     printf("CMYK: %f %f %f %f", c, m, y, k);
//     printf("\n");
//     return 0;
// }