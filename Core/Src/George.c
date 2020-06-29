#include "George.h"
#include "main.h"

void Link_LED(void)
{
	while(1)
	{
		int pin_state=HAL_GPIO_ReadPin(B2_GPIO_Port, B2_Pin);
		HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin, !pin_state);
	}
}
