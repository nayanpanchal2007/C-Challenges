// Create a program to Based on a student's score, categorize as "High", "Moderate", or "Low" using the ternary operator (e.g., High for scores > 80, Moderate for 50-80, Low for < 50).
#include<stdio.h>
int main()
{
    int score;
    printf("Enter the score: ");
    scanf("%d", &score);
    (score >= 0 && score <= 100) ? (score > 80) ? printf("Score is High.") : (score >= 50 && score <= 80) ? printf("Score is Moderate.") : printf("Score is Low.") : printf("Invalid score.");
    return 0;
}