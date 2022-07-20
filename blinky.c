#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "driverlib/debug.h"
#include "driverlib/gpio.h"
#include "driverlib/sysctl.h"

int
main(void)
{
volatile uint32_t ui32Loop;
int x =0; //This will be my counter for the loop
SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);// Enable the GPIO port that is used for the on-board LED.
while(!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOF))// Check if the peripheral access is enabled.
{
}
// Enable the GPIO pin for the LED (PF3).  Set the direction as output, and
// enable the GPIO pin for digital function.
GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1); // Red LED
GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_2); // Blue LED

while(1) // Loop forever.
{
while (x<5)// The first loop allows the Blue Led to turn on and off 5 times. Once it is equal 5, it will move onto the next loop.
{
GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, GPIO_PIN_2);  // Turn on the LED.
for(ui32Loop = 0; ui32Loop < 1630588; ui32Loop++) //Delay
{
}
GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, 0x0); // Turn off the LED.
for(ui32Loop = 0; ui32Loop < 1630588; ui32Loop++) // Delay
{
}
x = x+1; // Add to counter every time the led turns on and off by 1
}
while (x<15)//The second loops allowed the Red LED to turn on and off 10 times. Once it will equal 15, it will move onto the last loop.
{
GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, GPIO_PIN_1);// Turn on the LED.
for(ui32Loop = 0; ui32Loop < 815294; ui32Loop++) //Delay
{
}
GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, 0x0); // Turn off the LED.
for(ui32Loop = 0; ui32Loop < 815294; ui32Loop++) // Delay
{
}
x = x+1;// Add to counter every time the led turns on and off by 1
}
x=x-15; // The last loop will set the counter back to 0, which will reset the entire loop back to the first loop.
}
}
