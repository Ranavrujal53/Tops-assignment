#include <stdio.h>
#include <math.h>

int main() {
    int num, power, rem, sum, ornum, i;
    
    printf("\n armstrong number between the 1 tp 1000\n");

    for(i = 10; i <= 1000; i++) {
        num = i;
        power = 0;
        sum = 0;
        ornum = num;

        while(ornum != 0) {
            power++;
            ornum = ornum / 10;
        }

        ornum = num;
    
        while(ornum != 0) {
            rem = ornum % 10;
            sum += pow(rem, power);
            ornum = ornum / 10;
        }

       
        if(sum == num)
		{
            printf("%d\n", num);
        }
    }

    return 0;
}

