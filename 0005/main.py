def check_divisibility(upper_value, number_to_check):
    for i in range(1, upper_value+1):
        if number_to_check % i != 0:
            return False
    return True


j = 1
while not check_divisibility(upper_value=20, number_to_check=j):
    j += 1
print(j)
