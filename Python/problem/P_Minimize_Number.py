n = int(input())
arr = list(map(int, input().strip().split()))

maximum_operation = 0

all_even = True

while all_even:
    for item in arr:
        if(item % 2 != 0):
            all_even = False
            break

    if all_even == False:
        break

    for value in range(n):
        arr[value] = arr[value] // 2

    maximum_operation +=1

print(maximum_operation)    
