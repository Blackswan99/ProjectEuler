def check_prime(number):
    for j in range(1, number):
        if number % j == 0 and j != 1 and j != number:
            return False

number_to_check = 600851475143
for i in range(1, number_to_check + 1):
    if number_to_check % i == 0:
        if check_prime(i):
            print(f"Prime factor of {number_to_check}: {i}")
