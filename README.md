# structures_programming_basics/character.c
If the entered character is a small letter (a-z), it displays that it's a small letter.
If the entered character is a capital letter (A-Z), it displays that it's a capital letter.
If the entered character is a digit (0-9), it displays that it's a digit.
If the entered character doesn't fall into any of the above categories, it considers it a special character.
How to Use
Compile the program using a C compiler.
Run the compiled executable.
Enter a single character when prompted.
The program will then display the type of the entered character.
Example
less
Copy code
Enter a symbol:
A
A is a capital letter.
less
Copy code
Enter a symbol:
7
7 is a digit.
Note
The program assumes that the user will only input a single character.






structured_programming_basics/payment.c
The program takes the following inputs:

balance: The initial balance of the debt.
annualInterestRate: The annual interest rate on the debt.
epsilon: The error tolerance for the remaining balance at the end of 12 months.
It then iterates through different monthly payment amounts until it finds the lowest payment that pays off the debt within 12 months. The calculation takes into account the monthly interest rate and simulates 12 months of payments and interest accumulation.

Once the lowest monthly payment is found, it is printed to the console.

How to Use
Compile the program using a C compiler.
Run the compiled executable.
Enter the initial balance and the annual interest rate when prompted.
The program will calculate and display the lowest monthly payment needed to pay off the debt within a year.
Example
yaml
Copy code
Initial balance: $5000.00
Annual interest rate: 18%
Lowest Payment: $470.23
Note
The program assumes that the annual interest rate is given as a decimal (e.g., 0.18 for 18%).
The program may not work correctly if the inputs are not valid (e.g., negative balance or interest rate).
You can customize this README with any additional information or instructions you find relevant.



structured_programming_basics/remainder.c
a: The dividend.
b: The divisor.
It then calculates the remainder when a is divided by b using the formula remainder = a - b * (a / b). The remainder is then displayed on the console.

How to Use
Compile the program using a C compiler.
Run the compiled executable.
Enter the two integers when prompted.
The program will calculate and display the remainder.
Example
yaml
Copy code
Enter the two numbers:
17 5
The remainder is: 2
yaml
Copy code
Enter the two numbers:
10 3
The remainder is: 1
Note
The program assumes that the divisor b is not zero, as division by zero is undefined.
If b is zero, the program may produce unexpected results or encounter a runtime error.



structured_programming_basics/reverse.c
The program takes an integer input from the user and reverses its digits. It follows these steps:

Take an integer input from the user (n).
Using a while loop, extract the last digit of the number using the modulo operator and add it to the rev variable.
Multiply the rev variable by 10 and add the extracted digit to reverse the number.
Remove the last digit from the original number (n) by integer division.
Repeat steps 2-4 until the original number becomes zero.
Display the reversed number (rev) to the user.
How to Use
Compile the program using a C compiler.
Run the compiled executable.
Enter an integer when prompted.
The program will reverse the digits of the entered number and display the result.
Example
yaml
Copy code
Enter an integer:
12345
Reversed number: 54321
yaml
Copy code
Enter an integer:
987654321
Reversed number: 123456789
Note
The program assumes that the entered integer does not contain leading zeros.
Negative numbers are also accepted, and the program will reverse their digits accordingly.


structured_programming_basics/star.c
The program prompts the user to enter the number of rows for the pyramid. It then prints a pyramid pattern using asterisks (*). The pattern is constructed as follows:

For each row i from 1 to the specified number of rows:
Print spaces ( ) to align the pyramid to the center of the screen. The number of spaces decreases as the row number increases.
Print asterisks (*). The number of asterisks in each row is (2 * i) - 1.
How to Use
Compile the program using a C compiler.
Run the compiled executable.
Enter the number of rows for the pyramid when prompted.
The program will print the pyramid pattern to the console.
Example
markdown
Copy code
Enter number of rows: 5
    *
   ***
  *****
 *******
*********
markdown
Copy code
Enter number of rows: 3
  *
 ***
*****
Note
The program assumes that the user will input a positive integer for the number of rows.
The program may not handle extremely large input values gracefully due to memory constraints or display limitations.
structured_programming_basics/sum.c
The program prompts the user to enter a three-digit number. It then calculates the sum of the digits of that number. The program operates as follows:

Prompt the user to enter a three-digit number.
Check if the entered number is indeed a three-digit number (between 100 and 999, inclusive). If not, display an error message and prompt the user again.
Calculate the sum of the digits of the entered number.
Display the sum of the digits to the user.
How to Use
Compile the program using a C compiler.
Run the compiled executable.
Enter a three-digit number when prompted.
The program will calculate and display the sum of the digits of the entered number.
Example
mathematica
Copy code
Enter a three-digit number: 123
Sum of digits: 6
mathematica
Copy code
Enter a three-digit number: 987
Sum of digits: 24
Note
The program assumes that the user will input a valid three-digit number.
Negative numbers and numbers with leading zeros are not considered three-digit numbers.
