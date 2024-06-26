Conditional Statement/Loop/Array
30+ Program in C language
Here are 30 example programs demonstrating the use of if-else and nested if-else conditional statements in C, ranging from beginner to advanced levels. These examples cover various common scenarios, helping you understand how conditional statements are used in real-world programming.
Beginner Level
1.	Check if a number is positive or negative

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is negative.\n");
    }

    return 0;
}

2.	Check if a number is even or odd


#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}



3.	Find the largest of two numbers

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("The larger number is %d.\n", num1);
    } else {
        printf("The larger number is %d.\n", num2);
    }

    return 0;
}

4.	Check if a character is a vowel or consonant

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("The character is a vowel.\n");
    } else {
        printf("The character is a consonant.\n");
    }

    return 0;
}

5.	Check if a year is a leap year

#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("The year is a leap year.\n");
            } else {
                printf("The year is not a leap year.\n");
            }
        } else {
            printf("The year is a leap year.\n");
        }
    } else {
        printf("The year is not a leap year.\n");
    }

    return 0;
}

6.	Check if a number is a multiple of both 3 and 5

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("The number is a multiple of both 3 and 5.\n");
    } else {
        printf("The number is not a multiple of both 3 and 5.\n");
    }

    return 0;
}

7.	Check if a number is within a specific range

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 1 && num <= 100) {
        printf("The number is within the range 1-100.\n");
    } else {
        printf("The number is outside the range 1-100.\n");
    }

    return 0;
}


8.	Determine the type of triangle

#include <stdio.h>

int main() {
    int side1, side2, side3;
    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3) {
        printf("The triangle is equilateral.\n");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("The triangle is isosceles.\n");
    } else {
        printf("The triangle is scalene.\n");
    }

    return 0;
}

9.	Find the smallest of three numbers

#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 <= num2 && num1 <= num3) {
        printf("The smallest number is %d.\n", num1);
    } else if (num2 <= num1 && num2 <= num3) {
        printf("The smallest number is %d.\n", num2);
    } else {
        printf("The smallest number is %d.\n", num3);
    }

    return 0;
}

10.	Check if a character is an alphabet, digit, or special character

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isalpha(ch)) {
        printf("The character is an alphabet.\n");
    } else if (isdigit(ch)) {
        printf("The character is a digit.\n");
    } else {
        printf("The character is a special character.\n");
    }

    return 0;
}

Intermediate Level
11.	Check if a number is prime

#include <stdio.h>
#include <stdbool.h>

int main() {
    int num, i;
    bool isPrime = true;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = false;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        printf("The number is prime.\n");
    } else {
        printf("The number is not prime.\n");
    }

    return 0;
}

12.	Check if a string is a palindrome

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int len, i, j;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);
    for (i = 0, j = len - 1; i < len; i++, j--) {
        rev[i] = str[j];
    }
    rev[i] = '\0';

    if (strcmp(str, rev) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

13.	Find the grade of a student based on marks

#include <stdio.h>

int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Grade: A\n");
    } else if (marks >= 80) {
        printf("Grade: B\n");
    } else if (marks >= 70) {
        printf("Grade: C\n");
    } else if (marks >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}

14.	Check if a person is eligible to vote

#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}

15.	Check if a number is a palindrome

#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder, originalNum;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}

16.	Check if a number is Armstrong

#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (result == num) {
        printf("The number is an Armstrong number.\n");
    } else {
        printf("The number is not an Armstrong number.\n");
    }

    return 0;
}

17.	Check if a year is a century year

#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 100 == 0) {
        printf("The year is a century year.\n");
    } else {
        printf("The year is not a century year.\n");
    }

    return 0;
}

18.	Calculate the roots of a quadratic equation

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("root1 = %.2lf\nroot2 = %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and same.\n");
        printf("root1 = root2 = %.2lf\n", root1);
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("root1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("root2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}

19.	Determine the type of quadrilateral

#include <stdio.h>

int main() {
    int side1, side2, side3, side4;
    printf("Enter the four sides of a quadrilateral: ");
    scanf("%d %d %d %d", &side1, &side2, &side3, &side4);

    if (side1 == side2 && side2 == side3 && side3 == side4) {
        printf("The quadrilateral is a square.\n");
    } else if (side1 == side3 && side2 == side4) {
        printf("The quadrilateral is a rectangle.\n");
    } else {
        printf("The quadrilateral is neither a square nor a rectangle.\n");
    }

    return 0;
}

20.	Check if a number is perfect

#include <stdio.h>

int main() {
    int num, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("The number is perfect.\n");
    } else {
        printf("The number is not perfect.\n");
    }

    return 0;
}

Advanced Level
21.	Menu-driven program to perform basic arithmetic operations

#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;

    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    if (choice == 1) {
        result = num1 + num2;
        printf("Result: %.2lf\n", result);
    } else if (choice == 2) {
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
    } else if (choice == 3) {
        result = num1 * num2;
        printf("Result: %.2lf\n", result);
    } else if (choice == 4) {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2lf\n", result);
        } else {
            printf("Error! Division by zero.\n");
        }
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}




22.	Calculate electricity bill

#include <stdio.h>

int main() {
    int units;
    double bill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 0.50;
    } else if (units <= 200) {
        bill = 100 * 0.50 + (units - 100) * 0.75;
    } else if (units <= 300) {
        bill = 100 * 0.50 + 100 * 0.75 + (units - 200) * 1.20;
    } else {
        bill = 100 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 300) * 1.50;
    }

    printf("Total electricity bill: $%.2lf\n", bill);

    return 0;
}

23.	Find the maximum of four numbers

#include <stdio.h>

int main() {
    int num1, num2, num3, num4, max;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if (num1 > num2) {
        if (num1 > num3) {
            if (num1 > num4) {
                max = num1;
            } else {
                max = num4;
            }
        } else {
            if (num3 > num4) {
                max = num3;
            } else {
                max = num4;
            }
        }
    } else {
        if (num2 > num3) {
            if (num2 > num4) {
                max = num2;
            } else {
                max = num4;
            }
        } else {
            if (num3 > num4) {
                max = num3;
            } else {
                max = num4;
            }
        }
    }

    printf("The maximum number is %d.\n", max);

    return 0;
}

24.	Check if three sides form a valid triangle

#include <stdio.h>

int main() {
    int side1, side2, side3;
    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        printf("The sides form a valid triangle.\n");
    } else {
        printf("The sides do not form a valid triangle.\n");
    }

    return 0;
}

25.	Check if a number is a strong number

#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num, originalNum, remainder, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += factorial(remainder);
        originalNum /= 10;
    }

    if (sum == num) {
        printf("The number is a strong number.\n");
    } else {
        printf("The number is not a strong number.\n");
    }

    return 0;
}

26.	Check if three points form a straight line

#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    printf("Enter the coordinates of three points (x1 y1 x2 y2 x3 y3): ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)) {
        printf("The points form a straight line.\n");
    } else {
        printf("The points do not form a straight line.\n");
    }

    return 0;
}

27.	Check if a matrix is an identity matrix

#include <stdio.h>

int main() {
    int n, i, j, isIdentity = 1;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j && matrix[i][j] != 1) {
                isIdentity = 0;
                break;
            } else if (i != j && matrix[i][j] != 0) {
                isIdentity = 0;
                break;
            }
        }
    }

    if (isIdentity) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}

28.	Check if a number is a perfect square

#include <stdio.h>
#include <math.h>

int main() {
    int num;
    double sqrtNum;

    printf("Enter an integer: ");
    scanf("%d", &num);

    sqrtNum = sqrt(num);
    if (sqrtNum == (int)sqrtNum) {
        printf("The number is a perfect square.\n");
    } else {
        printf("The number is not a perfect square.\n");
    }

    return 0;
}

29.	Determine the quadrant of a point
#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the coordinates of a point (x y): ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0) {
        printf("The point is in the first quadrant.\n");
    } else if (x < 0 && y > 0) {
        printf("The point is in the second quadrant.\n");
    } else if (x < 0 && y < 0) {
        printf("The point is in the third quadrant.\n");
    } else if (x > 0 && y < 0) {
        printf("The point is in the fourth quadrant.\n");
    } else if (x == 0 && y != 0) {
        printf("The point is on the y-axis.\n");
    } else if (x != 0 && y == 0) {
        printf("The point is on the x-axis.\n");
    } else {
        printf("The point is at the origin.\n");
    }

    return 0;
}
30.	Calculate simple and compound interest

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, simpleInterest, compoundInterest;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter rate of interest: ");
    scanf("%lf", &rate);
    printf("Enter time in years: ");
    scanf("%lf", &time);

    simpleInterest = (principal * rate * time) / 100;
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest: %.2lf\n", simpleInterest);
    printf("Compound Interest: %.2lf\n", compoundInterest);

    return 0;
}

These examples cover a wide range of scenarios and complexities, helping you get comfortable with if-else and nested if-else conditional statements in C.

