/*
 * camera.h
 *
 *  Created on: 10 cze 2023
 *      Author: RB_PC
 */
#include <esp_system.h>
#include <nvs_flash.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#include "esp_camera.h"
#include "esp_timer.h"
#include "camera_pins.h"
#include "esp_http_server.h"

#ifndef MAIN_CAMERA_H_
#define MAIN_CAMERA_H_

esp_err_t init_camera(void);
esp_err_t jpg_stream_httpd_handler(httpd_req_t *req);


#endif /* MAIN_CAMERA_H_ */
