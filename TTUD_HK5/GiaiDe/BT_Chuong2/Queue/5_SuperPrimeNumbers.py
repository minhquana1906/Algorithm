def is_prime(num):
    """Kiểm tra xem một số có phải là số nguyên tố hay không."""
    if num <= 1:
        return False
    if num == 2:
        return True
    if num % 2 == 0:
        return False
    for i in range(3, int(num**0.5) + 1, 2):
        if num % i == 0:
            return False
    return True


def is_super_prime(num):
    """Kiểm tra xem một số có phải là số siêu nguyên tố hay không."""
    while num > 0:
        if not is_prime(num):
            return False
        num //= 10
    return True


def super_prime_numbers(n):
    """Tìm tất cả các số siêu nguyên tố nhỏ hơn hoặc bằng n."""
    result = []
    for num in range(2, n + 1):
        if is_super_prime(num):
            result.append(num)
    return result


# Ví dụ với n = 30
n = int(input("Nhập n: "))
print(super_prime_numbers(n))
