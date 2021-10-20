import time
import keyboard
#if error 'pip install keyboard'

counter=0

print("Counter If Press Keyboard")
print("Press [W]   : To Counter Increment")
print("Press [S]   : To Counter Decrement")
print("Press [ESC] : To EXIT")
print("Start App...")

while True:
	if(keyboard.is_pressed('w')):
		counter=counter+1
		print(counter)
	if(keyboard.is_pressed('s')):
		counter=counter-1
		print(counter)
	if(keyboard.is_pressed('esc')):
		break
	time.sleep(0.2)
