# Embedded-Systems-Lab0
Assignment provided by Embedded Systems (ECGR 3101)
This project was performed using a board EK-TM4C123GXL and Code Composer Studio


Objective
This project has several learning objectives.  First, it ensures that everyone in the class has the correct board, access to the necessary tools, and ability to download a simple program. Second, it introduces a very simplistic way introducing a delaythat requires some experimentation to get the timing right. Third, modern microcontrollers usually come with a library of support functions designed specifically for the family of devices. To use these functions, a student has to learn how to read the documentation and use an Application Programming Interface (API) to operate the peripherals.  Finally, a do-forever loop (also known as a super-loop or infinite loop) is ubiquitous in embedded systems and it is required here.

Procedure
From Resource Explorer, (View -> Resource Explorer) search for information about our board EK-TM4C123GXL.
Using the resulting tree (inside the Explorer panel), find the example “blinky”, and click on “blinky”.

Using the icons in the upper right corner, use the “Import to IDE” get a local copy of the project. Then use the “Install” icon to create a project that you can edit.

Optional: Depending on your confidence, you may want to compile and test blinky on your board. When shipped, your board has the project pre-loaded — you can reload it by selecting the “qs-rgb” in the Examples list.

Take note of what TivaWare API functions that blinky uses but you will want to write your code from scratch. Specifically,
In addition to main(), you will create two new functions: blink() and delay().

Use main() to set up the clock rate and enable GPIO port associated red and blue LEDs.

Use blink() that takes three arguments: the first specifies the color, the blink rate, and the last is how many times to blink the color.

Use delay() to write a do-nothing loop that simply consumes time.

Organize your code to accomplish the following: (a) blink the blue LED five times (1s on, 1s off) for a total of 10s, (b) blink the red LED ten times (0.5s on, 0.5s off), repeat (a)-(b) until the power is removed.

You can estimate how many loop iterations are needed inside of delay() to wait the appropriate specified amount of time. However, you might have to use some experimentation to get the correct delay. (NOTE: Do not use a timer peripheral or interrupts for this lab!)

Test your code, by compiling with the “hammer icon” and then downloading it with the “bug icon.

Criteria
(a) blink the blue LED five times (1s on, 1s off) for a total of 10s

(b) blink the red LED ten times (0.5s on, 0.5s off), 

(a)-(b) until the power is removed.
