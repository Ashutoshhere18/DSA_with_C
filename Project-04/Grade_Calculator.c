#include <stdio.h>

void main(){
    int score;
    char grade;

    printf("Enter Your Score:");
    scanf("%d",&score);

    grade = (score >= 90 && score <= 100) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            (score >= 50) ? 'E' :
            (score >= 0 && score < 50) ? 'F' : 'X';

    printf("Grade: %c\n", grade);
     

    switch(grade){
        case 'A':
            printf("Excellent work ");
            break;
        case 'B':
            printf("Well done");
            break;
        case 'C':
            printf("Good Job");
            break;
        case 'D':
            printf("You passed , but you could do better");
            break;
        case 'E':
            printf("Needs improvement ");
            break;
        case 'F':
            printf("Failed. Better luck next time ");
            break;
        default:
            printf("Invalid grade entered!");
    };

    // Eligibilty test
     switch (grade) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
            printf("\nCongratulations! You are eligible for the next level.");
            break;
        case 'F':
            printf("\nPlease try again next time !");
            break;
};
}