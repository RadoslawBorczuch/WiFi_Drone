/*
 * led.c
 *
 *  Created on: 12 maj 2023
 *      Author: RB_PC
 */

#include <stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

#define TAG "LED"
#define LED_PIN 4

static bool ledIsOn = false;
static bool initialized = false;

static void initialize(void);

static void configure_led(void)
{
    ESP_LOGI(TAG, "Example configured to blink GPIO LED!");
    gpio_reset_pin(LED_PIN);
    /* Set the GPIO as a push/pull output */
    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT);
}

void ledToggle(void)
{
    ESP_LOGI(TAG, "letToogle with current led status = %d", ledIsOn);

    initialize();
    ledIsOn = !ledIsOn;
    gpio_set_level(LED_PIN, ledIsOn);
}

static void initialize(void)
{
    if (initialized == true)
        return;

    initialized = true;

    configure_led();
}
