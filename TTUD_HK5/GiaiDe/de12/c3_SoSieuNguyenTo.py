def isPrime(n):
    if n < 2:
        return False

    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True


def isSuperPrime(n):
    while n > 0:
        if not isPrime(n):
            return False

        # TH: isprime = true
        n //= 10
    return True


def superPrimeNumber(n):
    result = []
    for i in range(2, n + 1):
        if isSuperPrime(i):
            result.append(i)
    return result


if __name__ == "__main__":
    n = 30
    print(f"Cac so sieu nguyen to <= {n}    : {superPrimeNumber(n)}")
