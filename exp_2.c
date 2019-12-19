/*the distance between two cities(in km) is input through the keyboard. Write a program to convert and print the distance in meters, feet, inches and centimeters*/

#include<stdio.h>
#include<conio.h>
int main()
{
    float km,m,feet,inches,cm;
    printf("distance between two cities=");
    scanf("%f",&km);
    m=km/1000;
    cm=km/100000;
    inches=km/39370.0787;
    feet=km/3280.83989;
    printf("distance in km=%f\n",km);
    printf("distance in m=%f\n",m);
    printf("distance in inches=%f\n",inches);
    printf("distance in feet=%f\n",feet);
    return 0;
}

