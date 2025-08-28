// Program for checking if student has passed or failed in exam.

#include<stdio.h>

int main() {

    printf("Maximum marks in each subject : ");     //asking max Marks
    int a;
    scanf("%d", &a);

    int s1, s2, s3;     // initiallising variables to store marks of diffrent subjects

    printf("Marks in 1st Subject:");
    scanf("%d", &s1);

    printf("Marks in 2nd Subject:");
    scanf("%d", &s2);

    printf("Marks in 3rd Subject:");
    scanf("%d", &s3);

    int t= s1+s2+s3;
    
    // condition for passing is atleast 33 percent marks in each subject and 40 percent aggregate marks.
    if (s1>=(0.33*a) && s2>=(0.33*a) && s3>=(0.33*a) && t>=(0.4*3*a) && s1, s2, s3<a )
    {
        printf("Congratulations, You passed the exam!");
    }

    else if (s1>a || s2>a || s3>a)
    {
        printf("Invalid Input of Marks Obtained!");
    }

    else {
        printf("You have failed the exam!");
    }


    return 0;
}