#include <stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    gpio_set_direction(2, GPIO_MODE_OUTPUT);
    bool led_state = false;
    while(1)
    {
        gpio_set_level(2,led_state);                 // Pin = 2, Logic level = 1 LED ON
        vTaskDelay(pdMS_TO_TICKS(1000));     // delay 1 second
        led_state = ! led_state;
    }

}
