# C++ exercises
1. Place directory under version control with git
 * git init
 * git add
 * git commit
2. hello.cpp
 * Compile and run original version
 * Introduce various errors and observe compiler messages
 * (optional) restore original working version using git restore
3. basic_types.cpp
 * Check results of original code
 * What do you expect for a, b and c?
 * How are true and false values printed?
 * Define an int variable similar to dutch. What value does it have?
 * Define a float variable similar to dutch, using (1.f/7.f).
 * Does it print any differently? What do you get if you subtract one from the
   other?
 * (optional) add and commit the changes to basic_types.cpp to your git
   repository.
4. expressions.cpp
 * Look at the code and decide what values are printed
 * Run the code and check your answers
 * Add some code to test the difference between pre and post-increment or
   decrement operators.
5. arrays.cpp
 * Look at the example code. What results do you expect for sections 1 and 2?
 * Compile and run the code, with and without some arguments on the command
   line.  Do you understand the results.
 * Add some code for the 4th section.
6. scope.cpp
 * This code has several errors. Fix them so that the code works and produces a
   useful result.
 * Modify the code to get tempf via the command line argument.
 * What happens if you call tempf with an int argument instead of a double.
 * What happens if you type in nonsense?  How might you deal with that?
 * Write an overloaded version of tempf which takes an int argument instead of a
   double and behaves slightly differently. Have it return a value that is
   rounded to the closest whole number.  Does it matter if the return type is
   int or double in this case?
 * The overloaded function is arguably confusing and may lead to mistakes.
   Modify the code to place this function in a new namespace, e.g round::
   Also change the input argument back to a double, while still keeping the
   rounding behaviour.  Modify main as needed to call both versions and text the
   behaviour.
