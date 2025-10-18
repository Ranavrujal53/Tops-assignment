#include <stdio.h>

 main()
 {
 	/*
 	P = Principal (loan/investment amount)

R = Rate of Interest (per annum)

T = Time (in years)
*/
    float principal, rate, time, si;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Formula: SI = (P × R × T) / 100
    si = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f\n", si);

    return 0;
}

