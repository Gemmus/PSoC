from smbus2 import SMBus, i2c_msg
import time
import sys

write0 = i2c_msg.write(0x48, [0])
write1 = i2c_msg.write(0x48, [1])
write2 = i2c_msg.write(0x48, [2])
write3 = i2c_msg.write(0x48, [3])
read = i2c_msg.read(0x48, 3)

bus = SMBus(1)

if len(sys.argv) == 2:
    command = sys.argv[1]
    if command.startswith('c'):
        channel = int(command[1])
        if 0 == channel:
            b = bus.i2c_rdwr(write0)
        elif 1 == channel:
            b = bus.i2c_rdwr(write1)	
        elif 2 == channel:
            b = bus.i2c_rdwr(write2)
        elif 3 == channel:
            b = bus.i2c_rdwr(write3)
        else:
            print("Invalid channel number.")
    elif command == 'r':
        b = bus.i2c_rdwr(read)
        print("Read value: ")
        for i in read:
            print(hex(i))
    else:
        print("Invalid command.")
else:
    print("Usage: python PSoC_RaspPi.py [c0 | c1 | c2 | c3 | s]")

bus.close()
