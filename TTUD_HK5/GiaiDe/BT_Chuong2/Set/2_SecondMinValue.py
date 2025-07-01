def func(arr):
    arr = set(arr)
    if len(arr) <= 1:
        return "NO"
    lst = list(arr)
    return lst[1]


# arr = [1, 4, 3, 2, 1]
arr = [1, 1, 1, 1, 1]

print(f"output: {func(arr)}")
