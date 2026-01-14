#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include <sdkconfig.h>


#define greenLED_PIN    5         
#define redLED_PIN      6      
#define ignitionButton  7
#define driveSeatBelt   15
#define passengerSeatBelt   16
#define driveSeatSense  1
#define passengerSeatSense 2
#define Alarm 37

void app_main(void) {

    gpio_reset_pin(greenLED_PIN);
    gpio_reset_pin(redLED_PIN);
    gpio_reset_pin(ignitionButton);
    gpio_reset_pin(driveSeatBelt);
    gpio_reset_pin(passengerSeatBelt);
    gpio_reset_pin(driveSeatSense);
    gpio_reset_pin(passengerSeatSense);
    gpio_reset_pin(Alarm);

    gpio_set_direction(greenLED_PIN, GPIO_MODE_OUTPUT);
    gpio_set_direction(redLED_PIN, GPIO_MODE_OUTPUT);
    gpio_set_direction(ignitionButton, GPIO_MODE_INPUT);
    gpio_set_direction(driveSeatBelt, GPIO_MODE_INPUT);
    gpio_set_direction(passengerSeatBelt, GPIO_MODE_INPUT);
    gpio_set_direction(driveSeatSense, GPIO_MODE_INPUT);
    gpio_set_direction(passengerSeatSense, GPIO_MODE_INPUT);
    gpio_set_direction(Alarm, GPIO_MODE_OUTPUT);
}
