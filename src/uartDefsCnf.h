/*
 * uartDefsCfg.h
 *
 *  Created on: Jun 25, 2021
 *      Author: AlexeiAROBS
 */

#ifndef AX_UARTDEFSCFG_H_
#define AX_UARTDEFSCFG_H_

#include "lpuart1.h"

typedef enum
{
	uart_instance = INST_LPUART1,
}uart_instanceDefType;

typedef struct
{
	lpuart_state_t * uartStatePtr;
	const lpuart_user_config_t * uartUserConfig;

}uart_congigDefType;

typedef uint32_t uart_baudRateDefType;
typedef uint8_t uart_dataDefType;
typedef uart_callback_t uart_callbackDefType;




#endif /* AX_UARTDEFSCFG_H_ */
