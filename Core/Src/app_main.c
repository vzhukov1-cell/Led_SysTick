#include "app_main.h"
#include "stm32g4xx_hal.h"
#include "main.h"

//static uint32_t systick_counter = 0;
static uint16_t temp_counter;
void app_main(void)
{
  while(1)
  {

  }
}

void HAL_SYSTICK_Callback(void)
{
  static uint16_t systick_counter = 0;
  systick_counter++;
  temp_counter = systick_counter;

  if (systick_counter >= TIME)
  {
    systick_counter = 0;
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
  }
}
