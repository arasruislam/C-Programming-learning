import pyautogui
from time import sleep

N = int(input())
sleep(5)
K = 1


for i in range(N):
    for j in range(K):
        pyautogui.write("#", interval=0.05)

    pyautogui.press('enter')
    K +=1
