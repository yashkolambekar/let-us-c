// Calculate Total Marks and Percentage from 5 subject marks

# include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5, total;
    float percentage;
    printf("Enter marks of 5 subjects (Space seperated): ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;
    printf("\n");
    printf("Total Marks = %d\n", total);
    printf("Percentage = %f\n", percentage);
    return 0;
}