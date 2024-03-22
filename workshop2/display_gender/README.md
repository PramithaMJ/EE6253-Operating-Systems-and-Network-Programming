# Gender Display Program

This program is designed to display the gender of a person based on user input. If the user inputs 'f' or 'F', the program displays "You are a Female". If the user inputs 'm' or 'M', the program displays "You are a Male". Otherwise, if the user input is any other character, the program displays "Invalid input".

## Prerequisites

Before running this program, ensure that you have GCC (GNU Compiler Collection) installed on your Linux system. You can install it using the package manager specific to your Linux distribution. For example, on Debian-based systems like Ubuntu, you can install GCC using the following command:


```sudo apt-get update```

```sudo apt-get install gcc```

bash
Copy code

## Compilation Instructions

To compile the program, navigate to the directory containing the source code (gender_display.c) in your terminal and use the following command:

gcc -o gender_display gender_display.c

bash
Copy code

This command will compile the source code and generate an executable file named `gender_display`.

## Execution Instructions

After successful compilation, you can run the program by executing the generated executable. Use the following command:

./gender_display

css
Copy code

This command will execute the program, prompting you to enter your gender (F or M). Follow the on-screen instructions to input your gender and see the corresponding output.
