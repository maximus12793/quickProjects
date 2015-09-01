# Factorial exercise

This exercise is simple.  You are to write a C program which accepts
an integer argument on the command line and prints the factorial of
that integer to the screen.  If not enough arguments are supplied, the
program should fail and print an error.  If more than one argument is
supplied, the extra arguments should be ignored.

Once you've finished writing your program, this is how it should look
like to run your program:

    $ ./factorial 5
    120
    $ ./factorial
    Error: please supply an integer on the command line.
    $ ./factorial 7 100
    5040

1. Make a file called `factorial.c` in this directory and open the
   file in your favorite text editor (Emacs and Vim are two good
   examples -- others also exist).  Write your C program in the file.
   There are many resources on the internet which will help you to
   write this simple C program.

2. Then make a file called `Makefile` in this directory too.  Write
   your makefile so that if someone types `make` in this directory,
   your program will be properly compiled and saved as a file called
   `factorial`.  When someone types `make clean`, the compiled
   executable and any intermediate compilation products should be
   removed.  You can find tutorials on writing Makefiles online.

3. Test your makefile and your code by running `make`.  Check that the
   `factorial` executable was created correctly.  Check that `make
   clean` correctly cleans up the directory.

4. Test your program by running it in the way described earlier.  Are
   the factorials it computes correct?  What happens when you give it
   too many or too few arguments?  Also, if it prints an error, what
   exit code does it return?  How can you check this?
