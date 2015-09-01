# Linked List program

This exercise is more advanced and will help you become familiar with
some aspects of C which you may not know about if you are coming from
Java.  These include pointers, structs, unions, and malloc/free.

In this directory you will find some code is already written for you.
In particular, you will see the following files:

- `Makefile` tells the compiler how to build your project.  It will
  first compile your `linkedlist.c` creating a `linkedlist.o` file.

- `linkedlist.c` is a file that implements various functions related
  to linked lists.  These linked lists contain nodes that store either
  a floating point value or a string pointer.

- `linkedlist.h` is a header file that can be imported into other C
  files to allow them to use the linked list functions and structures
  implemented in `linkedlist.c`.

  Header files (`.h`) are usually used to declare the interface that
  their companion code file (`.c`) implements.

- `main.c` contains a main entry point for a runnable program.

## Build the project

Try building the project by typing `make` in this directory.  Since a
makefile is provided to you, this should automatically compile the two
C files and produce an executable.

## Run the executable

Type `./linkedlist` into the terminal to execute the newly build
executable.

Notice the period and slash that precede the filename.  This is
because the file you just compiled, `linkedlist`, is not in the
system's `$PATH` variable, which normally contains the list of folders
which, when you enter a command, is searched in order to find the
program you asked for.  By typing `./`, we specify that we want to
execute the `linkedlist` program that exists in the current directory
(which is what `.` means).  If we omitted the `./`, the shell would
look for `linkedlist` in various standard places in the system such as
`/usr/bin` or `/usr/local/bin`, etc., and not find it.

## Play with the LinkedList example

What this program does is to allow the user to enter either a float or
a string, and that value will be added to a linked list that can later
be traversed to display the elements inside of it.

## Run Valgrind on linkedlist

*Valgrind* (note the
[pronunciation](http://valgrind.org/docs/manual/faq.html#faq.pronounce))
is a tool that can, among various other things, check your program for
memory leaks, which is when a program reserves memory for some purpose
but forgets to release it when it is done with it.  Run the following
command in this directory:

    $ valgrind ./linkedlist

Play around with the linked list and exit the program.  Then Valgrind
will print a message about a leak it noticed.  How many bytes were
lost as memory leaks?  Does it depend on the number of elements you
added to the linked list when playing with it?

## Add a function that removes all the elements from the list

In `linkedlist.c`, write a function called `ll_delete_list` that
deletes everything from a linked list, making sure to properly clean
up the memory that the linked list was using.  (Don't forget to follow
the standard practice of declaring the function in the `.h` file and
implementing it in the `.c` file.)

Hint: look up the C library function called `free`.  You can do this
by typing `man 3 free` on the command line.  `man` stands for "read
the manual", and `3` stands for "Section 3", which is traditionally
for C library functions.  (You can learn more about the organization
of the manual on Linux by typing `man man`, which looks up the manual
page about the manual itself!)

Next, change the `main.c` program so that it properly deletes the
linked list when the user indicates that she wants to exit the
program.

Try testing the linked list program with Valgrind again.  (Don't
forget to recompile first with `make`, of course.)  Does Valgrind
still complain about a memory leak after you exit the program?
