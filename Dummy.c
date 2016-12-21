#include <stdio.h> // <--- The standard io header file. You use this file by using the pre-processor directive #include.
int main() // <--- In this case, main() is now an integer function. This means it returns a integer value to the OS
{
    puts("I am no longer a dummy!"); // <--- Puts is a function that sends text to the stdout (standard output) device.
                                     //      You may see a warining in your IDE, because puts() needs to be defined somewhere
                                     //      The definition for puts() is held in the standard io header file.
    return 10;
}