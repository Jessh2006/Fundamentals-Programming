#include <stdio.h>

int main() {
   int num;
   
   printf("\n=== Sentinel-Controlled Loops ===\n");
  
    // Example 1: WHILE loop - stop when -1 is entered
 
    printf("Enter numbers (-5 to stop):\n");
    scanf("%d", &num);
    while (num != -1) {
        printf("You entered: %d\n", num);
        scanf("%d", &num);
    }

    // Example 2: DO-WHILE loop - stop when 0 is entered
    int val;
    printf("Enter numbers (1 to stop):\n");
    do {
        scanf("%d", &val);
        if (val != 0) {
            printf("Value: %d\n", val);
        }
    } while (val != 0);

    // Example 3: FOR loop with break (sentinel -999 to stop)
    int x;
    printf("Enter numbers (-1000 to stop):\n");
    for (;;) {
        scanf("%d", &x);
        if (x == -999) break;
        printf("You entered: %d\n", x);
    }

    // Example 4: WHILE loop - calculate sum until negative number
    int sum2 = 0, y;
    printf("Enter positive numbers (negative to stop):\n");
    scanf("%d", &y);
    while (y >= 0) {
        sum2 += y;
        scanf("%d", &y);
    }
    printf("Total sum = %d\n", sum2);

    // Example 5: DO-WHILE loop - read characters until 'q'
    char ch;
    printf("Enter characters (q to quit):\n");
    do {
        scanf(" %c", &ch);
        if (ch != 'q') {
            printf("You typed: %c\n", ch);
        }
    } while (ch != 'q');

    
    return 0;
}
