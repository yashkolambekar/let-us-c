# include <stdio.h>

int main()
{
    float kilometres, metres, centimetres, feet, inches;
    printf("Enter the distance in KM : ");
    scanf("%f", &kilometres);
    metres = kilometres *1000;
    centimetres = metres * 100;
    feet = metres * 3.28084;
    inches = feet * 12;
    printf("\n");
    printf("Kilometers = %f\n", kilometres);
    printf("Meters = %f\n", metres);
    printf("Centimeters = %f\n", centimetres);
    printf("Feet = %f\n", feet);
    printf("Inches = %f\n", inches);
    return 0;
}