//
// Created by 18723 on 2024/6/17.
//
#include "indicator_light.h"
#include "stm32f407xx.h"
#include "gpio.h"


void working_light()
{
    HAL_GPIO_WritePin(RED_GPIO_Port, RED_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(BLUE_GPIO_Port, BLUE_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GREEN_GPIO_Port, GREEN_Pin, GPIO_PIN_SET);
}

