user_string = input()

balance = 0
total_count = 0
balanced_string = ""
balanced_strings = []
for char in user_string:
    if char == 'R':
        balance +=1
    elif char == 'L':
        balance -=1
    
    balanced_string += char
    
    if balance == 0 :
        total_count +=1
        balanced_strings.append(balanced_string)
        balanced_string = ""
    
print(total_count)
for split_string in balanced_strings:
    print(split_string)