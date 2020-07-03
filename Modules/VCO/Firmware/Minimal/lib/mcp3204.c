
#include "mcp3204.h"

void adcInit(){
    HAL_GPIO_WritePin(GPIO_ADC_CS_GPIO_Port, GPIO_ADC_CS_Pin, GPIO_PIN_SET);
}

uint16_t readADC(uint8_t channel){
    uint8_t txBuffer[3];
    uint8_t rxBuffer[3];
    uint16_t result;

    txBuffer[0] = 0x06;
    txBuffer[1] = channel << 6;

    HAL_SPI_TransmitReceive(&hspi1, (uint8_t*)txBuffer, (uint8_t*)rxBuffer, 3, DEFAULT_TIMEOUT);

    result = rxBuffer[ 1 ] & 0x0F;
    result <<= 8;
    result |= rxBuffer[ 2 ];

    return result;

}