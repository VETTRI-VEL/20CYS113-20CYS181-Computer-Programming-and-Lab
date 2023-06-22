#include <stdio.h>

struct classroom
{
    int rollnumber;
    float cgpa;
    struct name
    {
        char fname[20];
        char lname[20];
    };
} Cr;

int main()
{
    scanf("%d", &Cr.rollnumber);
    scanf("%f", &Cr.cgpa);
    gets(Cr.fname);
    
    printf("%d\n", Cr.rollnumber);
    printf("%f\n", Cr.cgpa);
    printf("%s\n", Cr.fname);
    
    return 0;
}