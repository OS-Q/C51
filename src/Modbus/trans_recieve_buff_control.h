/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __TANS_RECEIEVE_BUFF_CONTROL_H
#define __TANS_RECEIEVE_BUFF_CONTROL_H
  /* Includes ------------------------------------------------------------------*/
//�������йص�ͷ�ļ�
#include "bsp_board.h"
#include "main.h"
/* USER CODE BEGIN Includes */
//modbus���������ʹ�õ���ͷ�ļ�

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

/* USER CODE BEGIN Private defines */
#define CTL485_RX HAL_GPIO_WritePin(CTL485_GPIO_Port,CTL485_Pin,GPIO_PIN_SET)
#define CTL485_TX HAL_GPIO_WritePin(CTL485_GPIO_Port,CTL485_Pin,GPIO_PIN_RESET)
/* USER CODE END Private defines */

uint8_t Modbus_Master_RB_Initialize(void);
uint8_t Modbus_Master_Rece_Flush(void);
uint8_t Modbus_Master_Rece_Available(void);
uint8_t Modbus_Master_GetByte(uint8_t  *getbyte);
uint8_t Modbus_Master_Rece_Handler(void);
uint8_t Modbus_Master_Read(void);
uint8_t Modbus_Master_Write(uint8_t *buf,uint8_t length);
uint32_t Modbus_Master_Millis(void);
#endif 
/********END OF FILE****/
