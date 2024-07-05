// Here are 50 programming exercises that combine for loops and if statements in C language, ranging from beginner to advanced levels. These exercises are designed to help you think critically and improve your programming skills.
// Beginner Level (1-10)
//===============================
// 1.Print Even Numbers: Write a program that prints all even numbers from 1 to 100 using a for loop and an if statement.

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
// 2. Sum of Positive Numbers: Write a program that calculates the sum of all positive numbers in an array using a for loop and an if statement.

#include <stdio.h >
int main()
{
    int numbers[] = {-1, 2, 3, -4, 5, 6};
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] > 0)
        {
            sum += numbers[i];
        }
    }
    printf("Sum: %d\n", sum);
    return 0;
}
// 3. Find the Maximum: Write a program that finds the maximum value in an array using a for loop and an if statement.

#include <stdio.h>

int main()
{
    int numbers[] = {12, 45, 7, 23, 56, 89};
    int max_num = numbers[0];
    for (int i = 1; i < 6; i++)
    {
        if (numbers[i] > max_num)
        {
            max_num = numbers[i];
        }
    }
    printf("Maximum: %d\n", max_num);
    return 0;
}
// 4.	Check for Vowels: Write a program that checks if a given string contains any vowels using a for loop and an if statement.

#include <stdio.h>

int main()
{
    char string[] = "hello";
    char vowels[] = "aeiou";
    int found = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        for (int j = 0; vowels[j] != '\0'; j++)
        {
            if (string[i] == vowels[j])
            {
                found = 1;
                break;
            }
        }
        if (found)
        {
            break;
        }
    }
    if (found)
    {
        printf("String contains a vowel\n");
    }
    else
    {
        printf("String does not contain a vowel\n");
    }
    return 0;
}
//5.	Reverse a String: Write a program that reverses a given string using a for loop and an if statement.

#include <stdio.h>

int main()
{
    4 char string[] = "hello";
    5 char reversed_string[6];
    6 int i, j;
    7 for (i = 0; string[i] != '\0'; i++)
    {
        8;
        9
    }
    10 i--;
    11 for (j = 0; i >= 0; i--, j++)
    {
12        if (string[i]!= ') {
13            reversed_string[j] = string[i];
14
    }
    15
}
16 reversed_string[j] = '\0';
17 printf("Reversed string: %s\n", reversed_string);
18 return 0;
19
}
6.	Count the Occurrences: Write a program that counts the occurrences of a given character in a string using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 char string[] = "hello";
    5 char char_to_find = 'l';
    6 int count = 0;
    7 for (int i = 0; string[i] != '\0'; i++)
    {
        8 if (string[i] == char_to_find)
        {
             count++;
            10
        }
        11
    }
    12 printf("Count: %d\n", count);
    13 return 0;
    14
}
7.	Find the First Duplicate: Write a program that finds the first duplicate in an array using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 int numbers[] = {1, 2, 3, 4, 2, 5};
    5 int found = 0;
    6 for (int i = 0; i < 6; i++)
    {
        7 for (int j = i + 1; j < 6; j++)
        {
            8 if (numbers[i] == numbers[j])
            {
                9 found = 1;
10                printf("First duplicate: %d\n",
Answer with Web Search
Continue
 
50 program for loop and if mixed program on thinking based and begginer to advance
 
Here are 50 programming exercises that combine for loops and if statements, ranging from beginner to advanced levels. These exercises are designed to help you think critically and improve your programming skills.
Beginner Level (1-10)
1.	Print Even Numbers: Write a program that prints all even numbers from 1 to 100 using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main() {
                    4 for (int i = 1; i <= 100; i++)
                    {
                        5 if (i % 2 == 0)
                        {
                            6 printf("%d ", i);
                            7
                        }
                        8
                    }
                    9 return 0;
                    10}
2.	Sum of Positive Numbers: Write a program that calculates the sum of all positive numbers in an array using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main() {
                    4 int numbers[] = {-1, 2, 3, -4, 5, 6};
                    5 int sum = 0;
                    6 for (int i = 0; i < 6; i++)
                    {
                        7 if (numbers[i] > 0)
                        {
                            8 sum += numbers[i];
                            9
                        }
                        10
                    }
                    11 printf("Sum: %d\n", sum);
                    12 return 0;
                    13}
3.	Find the Maximum: Write a program that finds the maximum value in an array using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main() {
                    4 int numbers[] = {12, 45, 7, 23, 56, 89};
                    5 int max_num = numbers[0];
                    6 for (int i = 1; i < 6; i++)
                    {
                        7 if (numbers[i] > max_num)
                        {
                            8 max_num = numbers[i];
                            9
                        }
                        10
                    }
                    11 printf("Maximum: %d\n", max_num);
                    12 return 0;
                    13}
4.	Check for Vowels: Write a program that checks if a given string contains any vowels using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main() {
                    4 char string[] = "hello";
                    5 char vowels[] = "aeiou";
                    6 int found = 0;
                    7 for (int i = 0; string[i] != '\0'; i++)
                    {
                        8 for (int j = 0; vowels[j] != '\0'; j++)
                        {
                            9 if (string[i] == vowels[j])
                            {
                                10 found = 1;
                                11 break;
                                12
                            }
                            13
                        }
                        14 if (found)
                        {
                            15 break;
                            16
                        }
                        17
                    }
                    18 if (found)
                    {
                        19 printf("String contains a vowel\n");
                        20
                    }
                    else
                    {
                        21 printf("String does not contain a vowel\n");
                        22
                    }
                    23 return 0;
                    24}
5.	Reverse a String: Write a program that reverses a given string using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main() {
                    4 char string[] = "hello";
                    5 char reversed_string[6];
                    6 int i, j;
                    7 for (i = 0; string[i] != '\0'; i++)
                    {
                        8;
                        9
                    }
                    10 i--;
                    11 for (j = 0; i >= 0; i--, j++)
                    {
12        if (string[i]!= ') {
13            reversed_string[j] = string[i];
14
                    }
                    15    }
16    reversed_string[j] = '\0';
17    printf("Reversed string: %s\n", reversed_string);
18    return 0;
19
            }
6.	Count the Occurrences: Write a program that counts the occurrences of a given character in a string using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 char string[] = "hello";
    5 char char_to_find = 'l';
    6 int count = 0;
    7 for (int i = 0; string[i] != '\0'; i++)
    {
        8 if (string[i] == char_to_find)
        {
            9 count++;
            10
        }
        11
    }
    12 printf("Count: %d\n", count);
    13 return 0;
    14
}
7.	Find the First Duplicate: Write a program that finds the first duplicate in an array using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 int numbers[] = {1, 2, 3, 4, 2, 5};
    5 int found = 0;
    6 for (int i = 0; i < 6; i++)
    {
        7 for (int j = i + 1; j < 6; j++)
        {
            8 if (numbers[i] == numbers[j])
            {
                9 found = 1;
                10 printf("First duplicate: %d\n", numbers[i]);
                11 break;
                12
            }
            13
        }
        14 if (found)
        {
            15 break;
            16
        }
        17
    }
    18 return 0;
    19
}
8.	Check for Consecutive Numbers: Write a program that checks if a list contains consecutive numbers using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 int numbers[] = {1, 2, 3, 4, 5};
    5 int consecutive = 1;
    6 for (int i = 0; i < 5 - 1; i++)
    {
        7 if (numbers[i] + 1 != numbers[i + 1])
        {
            8 consecutive = 0;
            9 break;
            10
        }
        11
    }
    12 if (consecutive)
    {
        13 printf("List contains consecutive numbers\n");
        14
    }
    else
    {
        15 printf("List does not contain consecutive numbers\n");
        16
    }
    17 return 0;
    18
}
9.	Find the Middle Element: Write a program that finds the middle element of an array using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 int numbers[] = {1, 2, 3, 4, 5};
    5 int middle_index = 5 / 2;
    6 for (int i = 0; i < 5; i++)
    {
        7 if (i == middle_index)
        {
            8 printf("Middle element: %d\n", numbers[i]);
            9 break;
            10
        }
        11
    }
    12 return 0;
    13
}
10.	Check for Palindrome: Write a program that checks if a given string is a palindrome using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 char string[] = "madam";
    5 char reversed_string[6];
    6 int i, j;
    7 for (i = 0; string[i] != '\0'; i++)
    {
        8;
        9
    }
    10 i--;
    11 for (j = 0; i >= 0; i--, j++)
    {
12        if (string[i]!= ') {
13            reversed_string[j] = string[i];
14
    }
    15
}
16 reversed_string[j] = '\0';
17 if (strcmp(string, reversed_string) == 0)
{
    18 printf("String is a palindrome\n");
    19
}
else
{
    20 printf("String is not a palindrome\n");
    21
}
22 return 0;
23
        }
Intermediate Level (11-20)
11.	Find the Second Largest: Write a program that finds the second largest number in an array using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 int numbers[] = {12, 45, 7, 23, 56, 89};
    5 int max_num = numbers[0];
    6 int second_max_num = numbers[0];
    7 for (int i = 1; i < 6; i++)
    {
        8 if (numbers[i] > max_num)
        {
            9 second_max_num = max_num;
            10 max_num = numbers[i];
            11
        }
        else if (numbers[i] > second_max_num && numbers[i] != max_num)
        {
            12 second_max_num = numbers[i];
            13
        }
        14
    }
    15 printf("Second largest: %d\n", second_max_num);
    16 return 0;
    17
}
12.	Check for Anagrams: Write a program that checks if two strings are anagrams of each other using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 char string1[] = "listen";
    5 char string2[] = "silent";
    6 int found = 0;
    7 for (int i = 0; string1[i] != '\0'; i++)
    {
        8 found = 0;
        9 for (int j = 0; string2[j] != '\0'; j++)
        {
            10 if (string1[i] == string2[j])
            {
                11 found = 1;
                12 break;
                13
            }
            14
        }
        15 if (!found)
        {
            16 break;
            17
        }
        18
    }
    19 if (found)
    {
        20 printf("Strings are anagrams\n");
        21
    }
    else
    {
        22 printf("Strings are not anagrams\n");
        23
    }
    24 return 0;
    25
}
13.	Find the First Non-Repeating Character: Write a program that finds the first non-repeating character in a string using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 char string[] = "hello";
    5 int count[256] = {0};
    6 for (int i = 0; string[i] != '\0'; i++)
    {
        7 count[string[i]]++;
        8
    }
    9 for (int i = 0; string[i] != '\0'; i++)
    {
        10 if (count[string[i]] == 1)
        {
            11 printf("First non-repeating character: %c\n", string[i]);
            12 break;
            13
        }
        14
    }
    15 return 0;
    16
}
14.	Check for Prime Numbers: Write a program that checks if a given number is prime using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 int num = 23;
    5 int is_prime = 1;
    6 for (int i = 2; i * i <= num; i++)
    {
        7 if (num % i == 0)
        {
            8 is_prime = 0;
            9 break;
            10
        }
        11
    }
    12 if (is_prime)
    {
        13 printf("Number is prime\n");
        14
    }
    else
    {
        15 printf("Number is not prime\n");
        16
    }
    17 return 0;
    18
}
15.	Find the Maximum Difference: Write a program that finds the maximum difference between two elements in an array using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 int numbers[] = {12, 45, 7, 23, 56, 89};
    5 int max_diff = numbers[1] - numbers[0];
    6 for (int i = 0; i < 6 - 1; i++)
    {
        7 for (int j = i + 1; j < 6; j++)
        {
            8 if (numbers[j] - numbers[i] > max_diff)
            {
                9 max_diff = numbers[j] - numbers[i];
                10
            }
            11
        }
        12
    }
    13 printf("Maximum difference: %d\n", max_diff);
    14 return 0;
    15
}
Advanced Level (21-30)
21.	Find the Longest Substring: Write a program that finds the longest substring without repeating characters using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 char string[] = "hello";
    5 int max_length = 0;
    6 int start = 0;
    7 int end = 0;
    8 int char_index[256] = {-1};
    9 for (int i = 0; string[i] != '\0'; i++)
    {
        10 if (char_index[string[i]] >= start)
        {
            11 start = char_index[string[i]] + 1;
            12
        }
        13 char_index[string[i]] = i;
        14 if (i - start + 1 > max_length)
        {
            15 max_length = i - start + 1;
            16 end = i;
            17
        }
        18
    }
    19 printf("Longest substring: %.*s\n", max_length, string + start);
    20 return 0;
    21
}
22.	Check for Circular Linked List: Write a program that checks if a linked list is circular using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3struct Node
{
    4 int data;
    5 struct Node *next;
    6
};
7 8int main()
{
    9 struct Node *head = NULL;
    10 // create a circular linked list
        11 int is_circular = 0;
    12 struct Node *slow = head;
    13 struct Node *fast = head;
    14 while (fast != NULL && fast->next != NULL)
    {
        15 slow = slow->next;
        16 fast = fast->next->next;
        17 if (slow == fast)
        {
            18 is_circular = 1;
            19 break;
            20
        }
        21
    }
    22 if (is_circular)
    {
        23 printf("Linked list is circular\n");
        24
    }
    else
    {
        25 printf("Linked list is not circular\n");
        26
    }
    27 return 0;
    28
}
23.	Find the Median of Two Sorted Arrays: Write a program that finds the median of two sorted arrays using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 int arr1[] = {1, 3, 5, 7};
    5 int arr2[] = {2, 4, 6, 8};
    6 int merged[8];
    7 int i = 0, j = 0, k = 0;
    8 while (i < 4 && j < 4)
    {
        9 if (arr1[i] < arr2[j])
        {
            10 merged[k++] = arr1[i++];
            11
        }
        else
        {
            12 merged[k++] = arr2[j++];
            13
        }
        14
    }
    15 while (i < 4)
    {
        16 merged[k++] = arr1[i++];
        17
    }
    18 while (j < 4)
    {
        19 merged[k++] = arr2[j++];
        20
    }
    21 int median;
    22 if (k % 2 == 0)
    {
        23 median = (merged[k / 2 - 1] + merged[k / 2]) / 2;
        24
    }
    else
    {
        25 median = merged[k / 2];
        26
    }
    27 printf("Median: %d\n", median);
    28 return 0;
    29
}
24.	Check for Balanced Parentheses: Write a program thatchecks if a given string has balanced parentheses using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 char string[] = "((()))";
    5 int count = 0;
    6 for (int i = 0; string[i] != '\0'; i++)
    {
        7 if (string[i] == '(')
        {
            8 count++;
            9
        }
        else if (string[i] == ')')
        {
            10 count--;
            11 if (count < 0)
            {
                12 break;
                13
            }
            14
        }
        15
    }
    16 if (count == 0)
    {
        17 printf("Balanced\n");
        18
    }
    else
    {
        19 printf("Unbalanced\n");
        20
    }
    21 return 0;
    22
}
25.	Find the Kth Smallest Element: Write a program that finds the kth smallest element in an array using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 int numbers[] = {12, 45, 7, 23, 56, 89};
    5 int k = 3;
    6 for (int i = 0; i < k - 1; i++)
    {
        7 int max_index = 0;
        8 for (int j = 1; j < 6; j++)
        {
            9 if (numbers[j] > numbers[max_index])
            {
                10 max_index = j;
                11
            }
            12
        }
        13 int temp = numbers[max_index];
        14 for (int j = max_index; j > 0; j--)
        {
            15 numbers[j] = numbers[j - 1];
            16
        }
        17 numbers[0] = temp;
        18
    }
    19 printf("Kth smallest element: %d\n", numbers[k - 1]);
    20 return 0;
    21
}
Expert Level (31-40)
31.	Find the Longest Common Subsequence: Write a program that finds the longest common subsequence of two strings using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 char string1[] = "ABCBDAB";
    5 char string2[] = "BDCABA";
    6 int dp[10][10];
    7 for (int i = 0; i < 7; i++)
    {
        8 for (int j = 0; j < 6; j++)
        {
            9 if (i == 0 || j == 0)
            {
                10 dp[i][j] = 0;
                11
            }
            else if (string1[i - 1] == string2[j - 1])
            {
                12 dp[i][j] = dp[i - 1][j - 1] + 1;
                13
            }
            else
            {
                14 dp[i][j] = (dp[i - 1][j] > dp[i][j - 1]) ? dp[i - 1][j] : dp[i][j - 1];
                15
            }
            16
        }
        17
    }
    18 printf("Length of longest common subsequence: %d\n", dp[6][5]);
    19 return 0;
    20
}
32.	Find the Shortest Path: Write a program that finds the shortest path between two nodes in a graph using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3#define MAX_NODES 10
4
5int main()
{
    6 int graph[MAX_NODES][MAX_NODES] = {
        7 {0, 10, 0, 5, 0},
        8 {10, 0, 1, 2, 0},
        9 {0, 1, 0, 0, 5},
        10 {5, 2, 0, 0, 20},
        11 {0, 0, 5, 20, 0} 12};
    13 int visited[MAX_NODES] = {0};
    14 int distance[MAX_NODES] = {0};
    15 int source = 0;
    16 int destination = 4;
    17 for (int i = 1; i < MAX_NODES; i++)
    {
        18 distance[i] = INT_MAX;
        19
    }
    20 distance[source] = 0;
    21 for (int i = 0; i < MAX_NODES - 1; i++)
    {
        22 int min_distance = INT_MAX;
        23 int u = -1;
        24 for (int j = 0; j < MAX_NODES; j++)
        {
            25 if (!visited[j] && distance[j] < min_distance)
            {
                26 min_distance = distance[j];
                27 u = j;
                28
            }
            29
        }
        30 visited[u] = 1;
        31 for (int v = 0; v < MAX_NODES; v++)
        {
            32 if (!visited[v] && graph[u][v] != 0 && distance[u] + graph[u][v] < distance[v])
            {
                33 distance[v] = distance[u] + graph[u][v];
                34
            }
            35
        }
        36
    }
    37 printf("Shortest path: %d\n", distance[destination]);
    38 return 0;
    39
}
33.	Find the Longest Increasing Subsequence: Write a program that finds the longest increasing subsequence in an array using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 int numbers[] = {10, 22, 9, 33, 21, 50, 41, 60, 80};
    5 int n = 9;
    6 int dp[n];
    7 for (int i = 0; i < n; i++)
    {
        8 dp[i] = 1;
        9
    }
    10 for (int i = 1; i < n; i++)
    {
        11 for (int j = 0; j < i; j++)
        {
            12 if (numbers[i] > numbers[j] && dp[i] < dp[j] + 1)
            {
                13 dp[i] = dp[j] + 1;
                14
            }
            15
        }
        16
    }
    17 int max_length = 0;
    18 for (int i = 0; i < n; i++)
    {
        19 if (max_length < dp[i])
        {
            20 max_length = dp[i];
            21
        }
        22
    }
    23 printf("Length of longest increasing subsequence: %d\n", max_length);
    24 return 0;
    25
}
34.	Find the Longest Palindrome Substring: Write a program that finds the longest palindrome substring in a string using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 char string[] = "babad";
    5 int n = strlen(string);
    6 int max_length = 0;
    7 int start = 0;
    8 for (int i = 0; i < n; i++)
    {
        9 for (int j = i; j < n; j++)
        {
            10 int flag = 1;
            11 for (int k = 0; k < (j - i + 1) / 2; k++)
            {
                12 if (string[i + k] != string[j - k])
                {
                    13 flag = 0;
                    14 break;
                    15
                }
                16
            }
            17 if (flag && (j - i + 1) > max_length)
            {
                18 max_length = j - i + 1;
                19 start = i;
                20
            }
            21
        }
        22
    }
    23 printf("Longest palindrome substring: %.*s\n", max_length, string + start);
    24 return 0;
    25
}
35.	Find the Kth Largest Element: Write a program that finds the kth largest element in an array using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 int numbers[] = {12, 45, 7, 23, 56, 89};
    5 int k = 3;
    6 for (int i = 0; i < k - 1; i++)
    {
        7 int max_index = 0;
        8 for (int j = 1; j < 6; j++)
        {
            9 if (numbers[j] > numbers[max_index])
            {
                10 max_index = j;
                11
            }
            12
        }
        13 int temp = numbers[max_index];
        14 for (int j = max_index; j > 0; j--)
        {
            15 numbers[j] = numbers[j - 1];
            16
        }
        17 numbers[0] = temp;
        18
    }
    19 printf("Kth largest element: %d\n", numbers[k - 1]);
    20 return 0;
    21
}
Master Level (41-50)
41.	Find the Minimum Window Substring: Write a program that finds the minimum window substring that contains all characters of another string using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 char string1[] = "ADOBECODEBANC";
    5 char string2[] = "ABC";
    6 int n = strlen(string1);
    7 int m = strlen(string2);
    8 int dp[256] = {0};
    9 for (int i = 0; i < m; i++)
    {
        10 dp[string2[i]]++;
        11
    }
    12 int required = m;
    13 int formed = 0;
    14 int window_counts[256] = {0};
    15 int min_window = INT_MAX;
    16 int min_window_start = 0;
    17 int min_window_end = 0;
    18 int window_start = 0;
    19 for (int window_end = 0; window_end < n; window_end++)
    {
        20 char character = string1[window_end];
        21 window_counts[character]++;
        22 if (dp[character] > 0 && window_counts[character] == dp[character])
        {
            23 formed++;
            24
        }
        25 while (window_start <= window_end && formed == required)
        {
            26 character = string1[window_start];
            27 if (window_end - window_start + 1 < min_window)
            {
                28 min_window = window_end - window_start + 1;
                29 min_window_start = window_start;
                30 min_window_end = window_end;
                31
            }
            32 window_counts[character]--;
            33 if (dp[character] > 0 && window_counts[character] < dp[character])
            {
                34 formed--;
                35
            }
            36 window_start++;
            37
        }
        38
    }
    39 printf("Minimum window substring: %.*s\n", min_window, string1 + min_window_start);
    40 return 0;
    41
}
42.	Find the Maximum Sum Subarray: Write a program that finds the maximum sum subarray in an array using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 int numbers[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    5 int n = 9;
    6 int max_sum = INT_MIN;
    7 int current_sum = 0;
    8 for (int i = 0; i < n; i++)
    {
        9 current_sum += numbers[i];
        10 if (current_sum > max_sum)
        {
            11 max_sum = current_sum;
            12
        }
        13 if (current_sum < 0)
        {
            14 current_sum = 0;
            15
        }
        16
    }
    17 printf("Maximum sum subarray: %d\n", max_sum);
    18 return 0;
    19
}
43.	Find the Longest Common Prefix: Write a program that finds the longest common prefix in an array of strings using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 char strings[][10] = {"flower", "flow", "flight"};
    5 int n = 3;
    6 int prefix_length = 0;
    7 for (int i = 0; i < 10; i++)
    {
        8 char c = strings[0][i];
        9 for (int j = 1; j < n; j++)
        {
            10 if (strings[j][i] != c)
            {
                11 break;
                12
            }
            13
        }
        14 if (c != '\0')
        {
            15 prefix_length++;
            16
        }
        else
        {
            17 break;
            18
        }
        19
    }
    20 printf("Longest common prefix: %.*s\n", prefix_length, strings[0]);
    21 return 0;
    22
}
44.	Find the Minimum Cost Flow: Write a program that finds the minimum cost flow in a flow network using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 int graph[5][5] = {
        5 {0, 10, 0, 5, 0},
        6 {10, 0, 1, 2, 0},
        7 {0, 1, 0, 0, 5},
        8 {5, 2, 0, 0, 20},
        9 {0, 0, 5, 20, 0} 10};
    11 int source = 0;
    12 int sink = 4;
    13 int max_flow = 0;
    14 int parent[5];
    15 int visited[5] = {0};
    16 int min_cost = INT_MAX;
    17 while (1)
    {
        18 for (int i = 0; i < 5; i++)
        {
            19 parent[i] = -1;
            20
        }
        21 int flow = INT_MAX;
        22 int current_node = source;
        23 while (current_node != sink)
        {
            24 if (flow == 0)
            {
                25 break;
                26
            }
            27 visited[current_node] = 1;
            28 int next_node = -1;
            29 for (int i = 0; i < 5; i++)
            {
                30 if (graph[current_node][i] != 0 && !visited[i])
                {
                    31 if (next_node == -1 || graph[current_node][next_node] > graph[current_node][i])
                    {
                        32 next_node = i;
                        33
                    }
                    34
                }
                35
            }
            36 if (next_node == -1)
            {
                37 int u = current_node;
                38 current_node = parent[u];
                39 flow = graph[u][parent[u]];
                40
            }
            else
            {
                41 parent[next_node] = current_node;
                42 flow = graph[current_node][next_node];
                43 current_node = next_node;
                44
            }
            45
        }
        46 if (flow == 0)
        {
            47 break;
            48
        }
        49 max_flow += flow;
        50 int cost = 0;
        51 int u = sink;
        52 while (u != source)
        {
            53 int v = parent[u];
            54 cost += graph[v][u];
            55 graph[v][u] -= flow;
            56 graph[u][v] += flow;
            57 u = v;
            58
        }
        59 if (cost < min_cost)
        {
            60 min_cost = cost;
            61
        }
        62
    }
    63 printf("Maximum flow: %d\n", max_flow);
    64 printf("Minimum cost: %d\n", min_cost);
    65 return 0;
    66
}
45.	Find the Shortest Path in a Matrix: Write a program that finds the shortest path in a matrix using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3#define MAX_NODES 10
4
5int main()
{
    6 int matrix[MAX_NODES][MAX_NODES] = {
        7 {0, 10, 0, 5, 0},
        8 {10, 0, 1, 2, 0},
        9 {0, 1, 0, 0, 5},
        10 {5, 2, 0, 0, 20},
        11 {0, 0, 5, 20, 0} 12};
    13 int visited[MAX_NODES] = {0};
    14 int distance[MAX_NODES] = {0};
    15 int source = 0;
    16 int destination = 4;
    17 for (int i = 1; i < MAX_NODES; i++)
    {
        18 distance[i] = INT_MAX;
        19
    }
    20 distance[source] = 0;
    21 for (int i = 0; i < MAX_NODES - 1; i++)
    {
        22 int min_distance = INT_MAX;
        23 int u = -1;
        24 for (int j = 0; j < MAX_NODES; j++)
        {
            25 if (!visited[j] && distance[j] < min_distance)
            {
                26 min_distance = distance[j];
                27 u = j;
                28
            }
            29
        }
        30 visited[u] = 1;
        31 for (int v = 0; v < MAX_NODES; v++)
        {
            32 if (!visited[v] && matrix[u][v] != 0 && distance[u] + matrix[u][v] < distance[v])
            {
                33 distance[v] = distance[u] + matrix[u][v];
                34
            }
            35
        }
        36
    }
    37 printf("Shortest path: %d\n", distance[destination]);
    38 return 0;
    39
}
46.	Find the Longest Repeated Substring: Write a program that finds the longest repeated substring in a string using a for loop and an ifstatement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 char string[] statement .5```c 6 #include < stdio.h >
        7 8int main()
    {
        9 char string[] = "banana";
        10 int n = strlen(string);
        11 int dp[n][n];
        12 int max_length = 0;
        13 int start = 0;
        14 for (int i = 0; i < n; i++)
        {
            15 for (int j = 0; j < n; j++)
            {
16            if (i == 0 || = "banana";
17    int n = strlen(string);
18    int dp[n][n];
19    int max_length = 0;
20    int start = 0;
21    for (int i = 0; i < n; i++) {
                            22 for (int j = 0; j < n; j++)
                            {
                                23 if (i == 0 || j == 0)
                                {
                                    24 dp[i][j] = 0;
                                    25
                                }
                                else if (string[i] == string[j] && i != j)
                                {
26                dp[i][j] = dp[i - 1][j - 1] +  j == 0)
{
    27 dp[i][j] = 0;
    28
}
else if (string[i] == string[j] && i != j)
{
    29 dp[i][j] = dp[i - 1][j - 1] + 1;
    30 1;
    31 if (dp[i][j] > max_length)
    {
        32 max_length = dp[i][j];
        33 start = i - max_length + if (dp[i][j] > max_length)
        {
            34 max_length = dp[i][j];
            35 start = i - max_length + 1;
            36
        }
        37
    }
    else
    {
        38 dp[i][j] = 0;
        39
    }
    40
}
41
                                }
                                42 printf("Longest repeated substring: %.*s\n", max_length, string + start);
                                43 return 0;
                                44
                            }
                            47. Find the Longest Chain of Pairs : Write a program that finds the longest chain1; }
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }
    printf("Longest repeated substring: %.*s\n", max_length, string + start);
    return 0;
}
Open In EditorEditCopy code
147. **Find the Longest Chain of Pairs**: Write a program that finds the longest chain of pairs in an array of pairs using a `for` loop and an `if` statement.
2```c
3#include <stdio.h>
4
5struct Pair
{
    6 int first;
    7 int second;
    8
};
9 10int compare(const void *a, const void *b)
{
11    struct Pair* p1 of pairs in an array of pairs using a `for` loop and an `if` statement.
12```c
13#include <stdio.h>
14
15struct Pair
{
    16 int first;
    17 int second;
    18
};
19 20int compare(const void *a, const void *b)
{
    21 struct Pair *p1 = (struct Pair *)a;
    22 struct Pair *p2 = (struct Pair *)b;
    23 if (p1->first < p2->first)
    {
        24 return -1;
        25
    }
    else if (p1->first > p2->first)
    {
        26 return 1;
        27
    }
    else
    {
28        if (p1->second < = (struct Pair*) a;
29    struct Pair* p2 = (struct Pair*) b;
30    if (p1->first < p2->first) {
                        31 return -1;
                        32    } else if (p1->first > p2->first) {
                        33 return 1;
                        34    } else {
                        35 if (p1->second < p2->second)
                        {
                            36 return -1;
                            37
                        }
                        else if (p1->second > p2->second)
                        {
                            38 return 1;
                            39
                        }
                        else
                        {
                            40 return 0;
                            41
                        }
                        42    }
43
    }
44
45int main() {
46    struct Pair pairs[] = {{5, 24}, {15, 25}, {27, 40}, {5 p2->second) {
47            return -1;
48
}
else if (p1->second > p2->second)
{
    49 return 1;
    50
}
else
{
    51 return 0;
    52
}
53
}
54
    }
    55 56int main()
    {
        57 struct Pair pairs[] = {{5, 24}, {15, 25}, {27, 40}, {50, 90}, {7, 18}, {20, 30}, {35, 45}, {8, 19}, {28, 42}, {46, 50}};
        58 int n = sizeof0, 90
    }
    , {7, 18}, {20, 30}, {35, 45}, {8, 19}, {21, 31}, { 36, 46 }
};
59    int n = sizeof(pairs) / sizeof(pairs[0(pairs) / sizeof(pairs[0]);
60    qsort(pairs, n, sizeof(pairs[0]), compare);
61    int dp[n];
62    for (int i = 0; i < n; i++) {
    63 dp[i] = 1;
    64    }
65    for (int i = 1; i < n; i++) {
    66 for (int j = 0; j < i; j++)
    {
        67 if (pairs[i]);
        68 qsort(pairs, n, sizeof(pairs[0]), compare);
        69 int dp[n];
        70 for (int i = 0; i < n; i++)
        {
            71 dp[i] = 1;
            72
        }
        73 for (int i = 1; i < n; i++)
        {
            74 for (int j = 0; j < i; j++)
            {
75            if (p].first > pairs[j].second && dp[i] < dp[j] + 1)
{
    76 dp[i] = dp[j] + 1;
    77
}
78
            }
            79
        }
        80 int max_length = 0;
        81 for (int i = 0; i < n; i++)
        {
            82 if (max_length < dp[i])
            {
                83 max_length = dp[i];
84       airs[i].first > pairs[j].second && dp[i] < dp[j] + 1)
{
    85 dp[i] = dp[j] + 1;
    86
}
87
            }
            88
        }
        89 int max_length = 0;
        90 for (int i = 0; i < n; i++)
        {
            91 if (max_length < dp[i])
            {
                92 max_length = dp[i];
                93
            }
            94
        }
95    printf(" }
96
    }
    97 printf("Longest chain of pairs: %d\n", max_length);
    98 return 0;
    99}
48.	Find the Maximum Sum of Subarrays of Size K: Write a program that finds the maximum sum of subarrays of size k in anLongest chain of pairs: %d\n", max_length); return 0; }
Open In EditorEditCopy code
148. **Find the Maximum Sum of Subarrays of Size K**: Write a program that finds the maximum sum of subarrays of size k in an array using a `for` loop and an `if` statement.
2```c
3#include <stdio.h>
4
5int main() {
    6 int numbers[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    7 int k = 3;
8    int n = sizeof(num array using a `for` loop and an `if` statement.
9```c
10#include <stdio.h>
11
12int main() {
        13 int numbers[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
        14 int k = 3;
        15 int n = sizeof(numbers) / sizeof(numbers[0]);
        16 int window_sum = 0;
        17 for (int i = 0; i < k; i++)
        {
18        window_sum += numbers[ibers) / sizeof(numbers[0]);
19    int window_sum = 0;
20    for (int i = 0; i < k; i++) {
                21 window_sum += numbers[i];
                22    }
23    int max_sum = window_sum;
24    for (int i = k; i < n; i++) {
                25 window_sum += numbers[i] - numbers[i - k];
                26 if (window_sum > max_sum)
                {
                    27 max_sum = window_sum;
                    28
                }
                29    }
30    printf("Maximum sum of subarrays of size k: %d\n", max_sum);
31    return 0;
32
        }
49.	Find the Maximum Sum of Non-Adjacent Elements: Write a program that finds the maximum sum of non-adjacent elements in an array using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 int numbers[] = {5, 1, 1, 5};
    5 int n = sizeof(numbers) / sizeof(numbers[0]);
    6 int dp[n];
    7 dp[0] = numbers[0];
    8 dp[1] = (numbers[0] > numbers[1]) ? numbers[0] : numbers[1];
    9 for (int i = 2; i < n; i++)
    {
        10 dp[i] = (dp[i - 1] > dp[i - 2] + numbers[i]) ? dp[i - 1] : dp[i - 2] + numbers[i];
        11
    }
    12 printf("Maximum sum of non-adjacent elements: %d\n", dp[n - 1]);
    13 return 0;
    14
}
50.	Find the Maximum Sum of Increasing Subsequence: Write a program that finds the maximum sum of an increasing subsequence in an array using a for loop and an if statement.
c
Open In EditorEditCopy code
1#include <stdio.h>
2
3int main()
{
    4 int numbers[] = {10, 22, 9, 33, 21, 50, 41, 60, 80};
    5 int n = sizeof(numbers) / sizeof(numbers[0]);
    6 int dp[n];
    7 dp[0] = numbers[0];
    8 int max_sum = dp[0];
    9 for (int i = 1; i < n; i++)
    {
        10 dp[i] = numbers[i];
        11 for (int j = 0; j < i; j++)
        {
            12 if (numbers[i] > numbers[j] && dp[i] < dp[j] + numbers[i])
            {
                13 dp[i] = dp[j] + numbers[i];
                14
            }
            15
        }
        16 if (dp[i] > max_sum)
        {
            17 max_sum = dp[i];
            18
        }
        19
    }
    20 printf("Maximum sum of increasing subsequence: %d\n", max_sum);
    21 return 0;
    22
}
These are just a few examples of programming exercises that combine for loops and if statements. There are many more exercises that you can try to improve your programming skills. Remember to always think critically and try to come up with your own solutions before looking at the answers. Happy coding!
