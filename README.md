# Lab 0 -- Getting to know Linux and C programming

This lab is not worth any points and has no due date.  It exists for
the purpose of helping you familiarize yourself with the basic
development environment that we will be using for this class.  It will
also help you get your feet wet in terms of using the C programming
language.

## Install Linux

Having a familiarity to the GNU/Linux is vital for the Computer
Science program.  This course, for many, might be the first exposure
to this OS.  I will assume later in the course that you understand how
to open and edit a file, compile a C program, create and change into
directories, list and remove files.

To that end, it is a requirement that you have a Computer Science
department Unix account.  The department's machines use Ubuntu Linux,
which you may use for your work in this course.

Ideally, however, we would like you learn to take control of your own
Linux development environment, by installing your own Linux
environment on a computer that belongs to you.  If you have a computer
running OS X or Windows, the easiest way to do this is to create a
*virtual machine* (VM) that runs inside your real machine, and play
with Linux on the VM.

But if you cannot do this for whatever reason, then feel free to use
the department's lab machines.

## Setting up Linux in a VM (Virtual Machine)

You will no doubt have plenty of questions while going through this
process, if you are new to Linux, or even if you are just new to
virtual machines.  We will be happy to help you with this at office
hours.

### Install VirtualBox

VirtualBox allows you to run an instance of a Linux install inside of
a virtual machine.  The advantages of this approach is that you do not
have to partition your hard drive and allocate space for a new
operating system installation.

VirtualBox can be obtained from http://www.virtualbox.org/ .

### Download a Linux Distribution as an ISO

People get very passionate about their Linux distributions.  If you
have an opinion here, go ahead and use the distribution of your choice
(Debian, Ubuntu, ArchLinux, Fedora, Slackware, etc), making sure to
choose the 64-bit version.

If you are unsure, we recommend Debian Stable, which can be downloaded
[here](https://www.debian.org/releases/stable/).

### Create a new virtual machine

Create a new virtual machine in the VirtualBox program, with the
following settings (tweak appropriately if you didn't choose Debian
Stable):

- Name: Debian
- Type: Linux
- Version: Debian (64-bit)
- Memory Size: 2048 MB (or whatever you can afford out of the total
  memory capacity of your computer -- I have 16GB of RAM so I can
  afford to give my virtual machine half of that, or 8GB)

Create a virtual hard drive, of type *dynamic*, preferably at least
20GB large.  This is a file on your hard drive which will contain the
data for the virtual hard drive that the VM will use.

If you wish, you can choose *fixed* instead, which will make your VM a
bit faster, but will use up the full 20GB on your real hard disk
immediately, whereas the dynamic type will start as a small file and
grow as necessary.

### Install Linux on the virtual machine

In the settings page for your new VM, find the virtual CD drive and
"insert" the installation ISO you downloaded earlier.  Start up the
VM, booting from the virtual CD drive, and you should see the
installer come up on the virtual screen.  Follow the instructions to
install your Linux distribution.

### Install the guest additions

Mount the Guest Additions CD (there is a special menu item in the
VirtualBox application for this), and follow the instructions to
install the VirtualBox Guest Additions into your Linux distribution.
This will likely improve the performance of your VM dramatically since
it can use GPU acceleration and CPU optimizations.

### Install important development packages

For this course, you will need several packages, such as GCC (a C
compiler), gdb (a C debugger), various libraries, and other tools.
Here is a command you can use on various versions of Debian, and will
probably also work on Ubuntu:

    $ sudo apt-get install build-essential gcc-multilib gdb gcc valgrind tcl8.5-dev tk8.5-dev flex git

This will install pretty much everything you'll need for this class, I
think.  If we end up needing you to install something else later,
we'll let you know.  All the above things are installed on the CS lab
machines, so if you chose not to set up a VM, that should be fine too.

Note: don't actually type the `$` symbol -- normally when you see
instructions for doing something on linux or unix and there's some
line that starts with a `$`, it just means to type that line on the
command line, because most people's systems are set up so that the
command line prompt has a `$` when it's waiting for input from you.
Sometimes you may also see `>` instead of `$` at the beginning of a
line -- same idea, don't type the `<`.

## Download the lab assignment

First, you'll need to obtain this repository (the repository
containing these instructions you are now reading, along with the code
required to do this lab assignment.)  To do this you will use `git`, a
distributed version control system.

Create an empty folder somewhere in your Linux system, go to it (with
`cd`), and run the following command:

    $ git clone https://github.com/kini/cs429-lab0 ./

Then all the files you need for this lab will be downloaded into the
directory.  If I make further changes to this lab in the future and
you wish to update your local copy, you can use the following command:

    $ git pull

Git is an important tool that you will likely be relying on in many of
your future CS classes, so it's important to learn how to use it at
some point, though we won't make extensive use of it in this class.
For more information on git, check out the online book,
[Pro Git](https://git-scm.com/book/).  I recommend you start out with
[this overview](http://gitolite.com/gcs.html), though.

## Do the lab problems

There are two C programming exercises for this lab -- one is to write
a simple factorial program, and the other involves a program dealing
with linked lists.  You'll find the instructions for each in their
respective subfolders, `factorial` and `linkedlist`.  If you're
viewing this README on github, you can click these two links:
[one](factorial/README.md) [two](linkedlist/README.md).

## Submit your solutions

First, go to the directory one level above the directory into which
you cloned this repository.  Then run the following command to create
a "tarball" (assuming the repository directory is called
`linkedlist`):

    $ tar czf linkedlist.tar.gz linkedlist/

This will create a file called `linkedlist.tar.gz` which is a single
compressed file containing all the files from the repository.  You
should be able to upload this file to Canvas.
