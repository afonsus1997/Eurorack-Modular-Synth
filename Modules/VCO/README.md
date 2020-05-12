# VCO

Full DDS VCO module



### Main features

* Inputs
  * CV 1V/octave
  * FM in
  * Sync in
  * PWM in
* Output
  * Dual audio output with selectable waveforms
  * Sync out



#### Main components

* Microcontroller
  * STM32F103RCT6 
* ADC
  * MCP3204
    * 12bit
    * 100ksps/4 channels
* DAC
  * DAC8551
    * 200ksps
    * 16bit
    * 1 channel
  * PCM1781DBQR
    * 192khz
    * 24bit
    * 2channel
    * 