#include "DSPmain.h"


int32_t RampIntegratorState0 = 0;
int32_t RampIntegratorState1 = 0;

uint8_t currentWave0 = 0;
uint8_t currentWave1 = 0;

// void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
// {
//     // if (htim->Instance == TIM6) {
        
//     // }
// }

int32_t NCO0(uint8_t wave, uint16_t freq){
    uint32_t delta_i;


    delta_i = (pow(2,32)*freq)/SAMPLING_FREQ;

    RampIntegratorState0 = RampIntegratorState0 + delta_i;

    switch (wave)
    {
    case sine:
        return sineProcessor(RampIntegratorState0);
        break;
    
    default:
        break;
    }

}

uint32_t sineProcessor(int16_t integratorState){
    int32_t preSine;
    uint32_t sineOut;
    preSine = RampIntegratorState0 >> SINE_SHIFT;
    preSine &= SINE_SHIFT_MASK;

    preSine = SineWave[preSine];
    if(integratorState<0)
        preSine = -preSine;
    
    sineOut = preSine + INT32_OFFSET;
    sineOut >> 8; //conversion to dac 24bit

    return sineOut;
}