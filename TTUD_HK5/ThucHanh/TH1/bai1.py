def counting_sort(arr):
    max_val = max(arr)

    counter_arr = [0] * (max_val + 1)

    for num in arr:
        counter_arr[num] += 1

    output = []
    for i in range(len(counter_arr)):
        output.extend([i] * counter_arr[i])

    return counter_arr, output


def find_mode2(counter_arr):
    output = 0
    max_freq = 0
    for num, freq in enumerate(counter_arr):
        if freq > max_freq:
            max_freq = freq
            output = num

    return output, max_freq


def find_median(sorted_arr):
    if len(sorted_arr) % 2 != 0:
        output = sorted_arr[(len(sorted_arr) // 2)]
    else:
        output = (
            sorted_arr[len(sorted_arr) // 2] + sorted_arr[(len(sorted_arr) // 2) - 1]
        ) / 2

    return output


arr = [1, 4, 1, 2, 7, 1, 2, 5, 3, 6]
counter_arr, output = counting_sort(arr)
print("counter array: ", counter_arr)
print("sorted array: ", output)

out, freq = find_mode2(counter_arr)
print(f"mode: {out}, frequency: {freq}")

median = find_median(output)
print(f"median: {median}")
