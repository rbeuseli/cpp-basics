# C++ exercises
1. Place directory under version control with git
 * git init
 * git add
 * git commit

2. hello.cpp
 * Compile and run original version.
 * Introduce various errors and observe compiler messages.
 * (optional) Restore original working version using git restore.

3. basic_types.cpp
 * Check results of original code
 * What do you expect for a, b and c?
 * How are true and false values printed?
 * Define an int variable similar to dutch. What value does it have?
 * Define a float variable similar to dutch, using (1.f/7.f).
 * Does it print any differently? What do you get if you subtract one from the
   other?
 * (optional) Add and commit the changes to basic_types.cpp to your git
   repository.

4. expressions.cpp
 * Look at the code and decide what values should be printed.
 * Run the code and check your answers.
 * Add some code to test the difference between pre and post-increment or
   decrement operators.

5. arrays.cpp
 * Look at the example code. What results do you expect for sections 1 and 2?
 * Compile and run the code, with and without some arguments on the command
   line.  Do you understand the results?
 * Add and test some code for the 4th section.

6. scope.cpp
 * This code has several errors. Fix them so that the code works and produces a
   useful result.
 * Modify the code to get tempf via the command line argument.
 * What happens if you call tempf with an int argument instead of a double?
 * What happens if you type in nonsense?  How might you deal with that?
 * Write an overloaded version of tempf which takes an int argument instead of a
   double and behaves slightly differently. Have it return a value that is
   rounded to the closest whole number.  Does it matter if the return type is
   int or double in this case?
 * The overloaded function is arguably confusing and may lead to mistakes.
   Modify the code to place this function in a new namespace, e.g RND::
   Also change the input argument back to a double, while still keeping the
   rounding behaviour.  Modify main as needed to call both versions and test the
   behaviour.

7. sort.cpp
 * Write a program to sort an array of 100 doubles into ascending order.  Use at
   least one function (in addition to main) to perform the actual sorting.  Pass
   the array to be sorted as an argument.  Specify the name of the file of
   numbers to be sorted via a command line argument.  Use the file numbers.txt
   as input. Print out the numbers, several to a line, in a reasonable format.
   What is 5th largest number in the set?  Print it out.
   Print out the number of element swaps your method takes.
