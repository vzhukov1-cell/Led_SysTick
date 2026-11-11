#include "app_main.h"
#include "stm32g4xx_hal.h"
#include "main.h"

static uint32_t systick_counter = 0;

void app_main(void)
{
  while(1)
  {

  }
}

void HAL_SYSTICK_Callback(void)
{
  systick_counter++;

  if (systick_counter >= TIME)
  {
    systick_counter = 0;
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
  }
}
