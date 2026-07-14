#ifndef TELEMETRY_BUS_H
#define TELEMETRY_BUS_H

// SPI Interface for MAX31865 Precision Temperature IC
#define RTD_SPI_INSTANCE      SPI1
#define PIN_RTD_CS_GPIO_PORT  GPIOA
#define PIN_RTD_CS_HEX        GPIO_PIN_4   // Pin 14 on MCU
#define PIN_RTD_INT_HEX       GPIOB
#define PIN_RTD_INT_PIN       GPIO_PIN_0   // Pin 20 on MCU - Data Ready Interrupt

// I2C Interface for ATECC608A Hardware Encryption Chip
#define CRYPTO_I2C_INSTANCE   I2C1
#define CRYPTO_I2C_ADDRESS    0xC0         // Factory Default 7-bit bus address

// UART Interface for BG95-M3 LTE Liasion Transceiver
#define MODEM_UART_INSTANCE   USART2
#define MODEM_BAUD_RATE       115200       // Standard baud rate for AT commands

#endif // TELEMETRY_BUS_H
