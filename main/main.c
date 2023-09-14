/**
 * Application entry point.
 */

#include "nvs_flash.h"
#include "camera.h"
#include "esp_log.h"
#include "esp_ota_ops.h"
#include "wifi_app.h"
static const char *TAG = "esp32-cam";
void app_main(void)
{
	esp_err_t err;
	// Initialize NVS
	esp_err_t ret = nvs_flash_init();
	if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND)
	{
		ESP_ERROR_CHECK(nvs_flash_erase());
		ret = nvs_flash_init();
	}
	ESP_ERROR_CHECK(ret);

	// Start Wifi
	wifi_app_start();


        err = init_camera();
        if (err != ESP_OK)
        {
            printf("err: %s\n", esp_err_to_name(err));
            return;
        }
        ESP_LOGI(TAG, "ESP32 CAM Web Server is up and running\n");


}
