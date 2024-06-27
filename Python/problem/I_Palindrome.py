user_value = input()

reversed_user_value = str(int(user_value[::-1]))

if user_value == reversed_user_value:
    print(reversed_user_value,"\n","YES")
else:
    print(reversed_user_value, "\n", "NO")
