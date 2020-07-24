#include "DSPmain.h"


int32_t RampIntegratorState0 = 0;
int32_t RampIntegratorState1 = 0;

uint8_t currentWave0 = 0;
uint8_t currentWave1 = 0;

int16_t sampleBuffer1[SAMPLEBUFFERSIZE];
int16_t sampleBuffer2[SAMPLEBUFFERSIZE];

uint16_t transferBuffer1[TRANSFERBUFFERSIZE];
uint16_t transferBuffer2[TRANSFERBUFFERSIZE];



// void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
// {
//     // if (htim->Instance == TIM6) {
        
//     // }
// }

extern "C" void HAL_I2S_TxCpltCallback(I2S_HandleTypeDef *hi2s)
{
  // second half finished, filling it up again while first  half is playing
  for (uint8_t i = 0; i < 25; i++)
  {
      
  }
  
}
extern "C" void HAL_I2S_TxHalfCpltCallback(I2S_HandleTypeDef *hi2s)
{
  // first half finished, filling it up again while second half is playing
}

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