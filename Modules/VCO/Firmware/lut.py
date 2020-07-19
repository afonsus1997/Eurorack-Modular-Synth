from math import pi, sin
import pyperclip



#  y(m)=round(32767 * sin((pi/32)*m)  ; m=0,...31

number_of_samples = 128
nbits = 32


nbits_for_fixed_point = ((2**nbits)/2)-1

def computeValueSine(m):
    return round(nbits_for_fixed_point*sin((pi/number_of_samples)*m))

def computeValueCV(voltage):
    return 440 / 2 ** 2.75 * 2 ** (voltage * 0.001)

def createLUTSine():
    out="int32_t SineWaveTable[]={"

    for i in range(number_of_samples):
        out += str(computeValueSine(i)) + ", "

    out = out[:-2] + "};" 
    print(out + '\n')
    pyperclip.copy(out)
    print("LUT decalration copied to clipboard!")

def createLUTCV():
    out="int32_t CVTable[]={"

    for i in range(4096):
        out += str(round(computeValueCV(i))) + ", "

    out = out[:-2] + "};" 
    print(out + '\n')
    pyperclip.copy(out)
    print("LUT decalration copied to clipboard!")

createLUTSine()
createLUTCV()
