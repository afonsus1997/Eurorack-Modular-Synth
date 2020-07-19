

## Digital Representation

DAC output is 24bit -> 32bit variables are going to be used

int32: -4294967296 to +4294967295

## Ramp Integrator

-4294967296 to +4294967295

Ti/Ts = (2^32)/delta_i

fi = ((delta_i)/(2^32))*fs

delta_i = ((2^32)*fi)/fs



for addressing the wave table:

if wavetable only has half of the wave:

bit0 = sign

bit1:bit(number of wavetable samples+1) = wavetable addressing

bit(number of wavetable samples+2):bit31 = discarded



## CV Volt/Octave

The most popular choice seems to be that 0V is C2 (embraced by Doepfer and Kenton)

```
frequency = 440 / 2 ** 2.75 * 2 ** voltage
```

```
for pitch in range(61):
	voltage = pitch / 12
	frequency = 440 / 2 ** 2.75 * 2 ** voltage
	print(frequency)
```

http://bytenoise.co.uk/CV-gate





## Input sampling

input voltages 0 - 4.096

1st: 4096*0.001 (Q0 * Q15 = Q15) (Qm*Qk = Qm+k+1-n)

​	-> 4096 * 32.768 = 134217.728