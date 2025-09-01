#include<stdio.h>
int main() {
    int maths, physics, chemistry, english, computerscience;
    int total;
    float percentage;

   
    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &maths, &physics, &chemistry, &english, &computerscience);

   
    total = maths + physics + chemistry + english + computerscience;
    percentage = total / 5.0;

    if(percentage >= 90) {
        printf("Grade: A+\n");
    }
    else if (percentage >= 80) {
        printf("Grade: A\n");
    }
    else if (percentage >= 70) {
        printf("Grade: B\n");
    }
    else if (percentage >= 60) {
        printf("Grade: C\n");
    }
    else if (percentage >= 50) {
        printf("Grade: D\n");
    }
    else if (percentage >= 40) {
        printf("Grade: E\n");
    }
    else {
        printf("Fail\n");
    }

   
    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}

    
    
