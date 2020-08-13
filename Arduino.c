#include <Arduino.h>

/* Define a digital input pin configuration */
const gpio_pin_config_t PinInputConfig =
{
  kGPIO_DigitalInput, 0
};
/* Define a digital output pin configuration */
const gpio_pin_config_t PinOutputConfig =
{
  kGPIO_DigitalOutput,  0
};

void pinMode(int iPin, int iMode)
{
	if (iMode == ARDUINO_OUTPUT)
		GPIO_PinInit(GPIO, 1, iPin, &PinOutputConfig);
	else
		GPIO_PinInit(GPIO, 1, iPin, &PinInputConfig);
}

void digitalWrite(int pin, int value)
{

} /* digitalWrite() */
int digitalRead(int pin)
{
	return 0;
} /* digitalRead() */

void delayMicroseconds(long iDelay)
{
	long i;

    for (i = 0; i < iDelay*7; i++)
	{
        __NOP();
	}

} /* delayMicroseconds() */
void delay(long iDelay)
{
	delayMicroseconds(iDelay * 1000L);
} /* delay() */

long millis(void)
{
	return 0;
}
long micros(void)
{
	return 0;
}

