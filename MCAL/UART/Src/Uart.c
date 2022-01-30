 /**************************************************
 *  File		: Uart.c
 *	Module		: UART
 *	Target		: ATMEGA32
 *	Author		: Abram
 *  Description	:
 *
 ***************************************************/
#include "Uart.h"
u8 UART_TxBuffer[TX_BUFFER_SIZE];
volatile u8 Num;
volatile u8 UART_RxBuffer[RX_BUFFER_SIZE];
volatile u8 UART_RxBuffer_Index = 0;
volatile Boolean Rx_Buffer_Ready = FALSE;

void UART_Init(u16 baudRate)
{
	/* Set baud rate */
	UART_UBRRH_REG = (u8)(baudRate>>8);
	UART_UBRRL_REG = (u8)baudRate;
	/* Enable receiver and transmitter */
	SET_BIT(UART_UCSRB_REG,RXEN_BIT_NO);  /* Enable Receiver*/
	SET_BIT(UART_UCSRB_REG,TXEN_BIT_NO);  /* Enable Transmitter */
	/* Set frame format: 8data, 1stop bit, Even Parity */
	UART_UCSRC_REG |= (1 << URSEL_BIT_NO)|UART_8_BIT_DATA | UART_EVEN_PARITY;
	/*	Enable Rx Complete Interrupt	*/
	SET_BIT(UART_UCSRB_REG,UART_RX_COMPLETE_INTERRUPT_BIT);

}

void UART_TransmitChr(u8 data)
{
	/* Wait for empty transmit buffer */
	while (!(CHK_BIT(UART_UCSRA_REG,UDRE_BIT_NO)))
			;
	/* Put data into buffer, sends the data */
	UART_UDR_REG = data;
}

void UART_TransmitStr(u8 *str)
{
	/* Wait for empty transmit buffer */
	while (*str != '\0')
	{
		UART_TransmitChr(*str);
		str++;
	}
}

u8 UART_ReceiveChr(void)
{
	/* Wait for data to be received */
	while (!(CHK_BIT(UART_UCSRA_REG,RXC_BIT_NO)))
			;
	/* Get and return received data from buffer */
	return UART_UDR_REG;
}

ISR(USART_RXC_vect)
{

	Num=UART_UDR_REG;
	//Rx_Buffer_Ready = TRUE;

}
ISR(USART_UDRE_vect)
{

}
ISR(USART_TXC_vect)
{

}
