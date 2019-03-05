# partdois
Second part

1. Make a program in C that asks for a value in meters and prints the
corresponding in decimeters, centimeters and millimeters.
2. Make a program in C that prints a table with the table of 1 to 9
3. Make a program that asks for a decimal number and prints the
corresponding in hexa and octal.
4. Do a "C" program that asks for a value in degrees Fahrenheit and
prints the corresponding video in degrees Celsius using the formulas
follow.
  a) Use a double variable to read the value in Fahrenheit and the formula
  C = (f-32.0) * (5.0 / 9.0).
  b) Use an int variable to read the value in Fahrenheit and the formula
  C = (f-32) * (5/9).
5. Make a "C" program that asks for 2 numbers and report:
  a) The sum of the numbers;
  b) The product of the first number by the square of the second;
  c) The square of the first number;
  d) The square root of the sum of squares;
  (e) the sine of the difference of the first number by the second;
  f) The module of the first number.
  
  Grupo II - explorando os comandos de controle de fluxo
1. Faça um programa em "C" que lê dois valores e imprime:
- se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
- se o primeiro valor for menor que o segundo a lista de valores do segundo até o primeiro em ordem decrescente;
- se ambos forem iguais a mensagem "valores iguais".

2. Fazer um programa que imprime a tabela ASCII (código decimal, código hexa, caracter) para os códigos de 0 a 127.
3. Fazer um programa em "C" que lê o preço de um produto e inflaciona esse preço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100. 
OBS: não use o comando "if" ou o operador de condição "?".

Group II - Exploring flow control commands

1. Make a program in "C" that reads two values and prints:
- if the first value is less than the second, the list of values from the first to the second;
- if the first value is less than the second list of values from the second to the first in descending order;
- if both are equal to the message "equal values".
2. Make a program that prints the ASCII table (decimal code, hex code, character) for codes 0 to 127.
3. Make a "C" program that reads the price of a product and inflates that price by 10% if it is less than 100 and by 20% if it is greater than or equal to 100.
NOTE: Do not use the "if" command or the condition operator "?".


Group III 

+1. Make a function that caculates the n-th power of a real variable x: f (x, n) = xn
-2. Do a function that calculates the factorial of a number. Implement a recursive version and a looped version.
-3. Since we can calculate ex by:
ex = 1 + x + x2 / 2! + x3 / 3! + ...
Make a program excerpt in "C" that reads a value for x and calculates the value of ex. The value must be calculated as long as the calculated term is greater than 10E-6.
-4. Exercise: make a program in "C" that requests the total amount spent by the customer of a store, prints the payment options, requests the desired option and
prints the total value of the installments (if any).
1) Option: the view with 10% discount
2) Option: in two times (price tag)
3) Option: 3 to 10 times with 3% interest per month (only for purchases over R $ 100.00).
NOTE: Making a function that prints the options prompts the desired option and returns the chosen option. In the main program, test the chosen option and activate the corresponding function (a function for each option).

Group VI - Vectors

1. Make a program in "C" that reads 10 values and prints the largest and smallest values read.
2. Make a program that reads a set of 10 values and prints them sorted.
3. Make a routine that receives as a parameter a 5-position array containing a student's grades throughout the year and returns the student's average.
4. Make a routine that receives an array of type double and the number of values that should be requested to the user and returns the filled array with the values entered.
5. Make a program in "C" that reads a set of 10 integer values and verifies if any of the values is equal to the average of them.
6. Make a program that reads values for a float array of 5 rows by 3 columns and prints the difference between the mean of the elements of the even columns and the mean of the elements of the odd rows.

Group VII - Strings
1. Make a program in "C" that reads any string of a maximum of 80 characters and prints:
- How many characters does the string have;
- How many characters are punctuation;
- How many characters are numbers;
- How many characters are lowercase.
2. Make a "C" program that reads a string containing words separated by a blank space each and prints them one below the others.
3. Make a program in "C" that reads a string from the keyboard and uses a recursive routine to print the string in a normal way and then back.
4. Make a "C" program that asks the name, address, telephone and age of a person and assembles a string with the following sentence:
"Your name is ... you have ... years, lives on the street ... and your phone is ...."
5. Do a routine that waits for a keyboard string and returns the value 1 if the string entered was "YES" and 0 if the string entered was "NO". The routine should only return something if the string entered is "YES" or "NO".
6. Make a routine that receives a string as a parameter and prints how many words (separated by whitespace) it contains.
7. Implement a routine that does the same thing as the "strcpy" function.
8. Make a program in "C" that requests an integer and spells the same on the screen.
Ex:
124: one, two, four
9. Make a "C" program that reads names of people composed of a first name and a last name separated by a space and print:
- The list of names in alphabetical order of the pre-name;
- The list of names in alphabetical order of surnames;
- The average number of letters per name.
Note:
· The number of names read must be less than or equal to 20;
· A sequence of names is terminated by the word "END" or when the name is read.
10. Write a function that takes a string and a character as a parameter and removes all occurrences of the character from the string.
11. Write a function in "C" that receives a string a character and indexes a position of the string as a parameter and enter the character in the "pushing" position all the others to the side.
12. Do a routine in "C" that receives a string as parameter and returns the address of the first found white character.
13. Make a routine that receives as a parameter a string containing a number and an integer indicating the base on which the number is expressed, returning its value in decimal
Ex: conv2dec ("345", 8) => 229
Group VIII - Passing of parameters and structures
1. Make a function that returns the sum, the difference and the product between two numbers.
2. Make a function in "C" that returns the ratio between two numbers. The function should return by return command value 1 if operation was possible and value 0 if operation was not possible (division by zero, for example). The result of the division must be returned by one parameter by reference.
3. Do a routine in "C" that receives a vector of integers as a parameter where all values ​​except the last one are positive and returns:
- the mean values of the vector;
- the smallest value of the vector (without considering the last one)
- the highest value of the vector
4. Make a function to read and return the value of a student's 3 grades.
5. Build a "C" program that implements an electronic address book. The program should have a menu with the following options:
· Enter a new name in the phonebook.
· Print on the screen the data of one of the registered people (according to request).
· Print the list of names that start with the letter indicated.
· End
Each calendar entry must have the following fields:
char name [30];
char address [100];
char phone [10];
long int CEP;
Note: The calendar must have a capacity of 100 entries.
6. Make a program in "C" which reads a list of 20 products and is priced and stores them in an array of the structure type below. The program shall, in
then sort the vector in alphabetical order of product name and inflate products whose value is less than 100 in 5%. Finally the list of
products / prices should be printed.
NOTE: Use a routine that receives a structure of type PROD with parameter and updates the price, one that reads the data for the PROD structure and another able to print the structure.
typedef struct
{
char name [80];
float price;
} PROD;
7. Build a "C" program that implements an electronic address book. O
program should have a menu with the following options:
1- Enter a name in the phonebook
2- Print on the screen the data of one of the registered people (see
name)
3- Print the list of names starting with the letter

