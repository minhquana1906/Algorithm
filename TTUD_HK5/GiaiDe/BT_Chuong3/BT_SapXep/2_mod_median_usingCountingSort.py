def counting_sort(arr):
    # khoi tao max va mang dem
    max_val = max(arr)
    counter_arr = [0] * (max_val + 1)

    # dem tan suat cac phan tu trong mang
    for val in arr:
        counter_arr[val] += 1

    output = []
    for i in range(len(counter_arr)):
        output.extend([i] * counter_arr[i])  # them nhieu ptu cung luc: [1,1,1]

    return counter_arr, output


def find_mode(counter_arr):
    max_freq = 0
    output = 0

    for num, freq in enumerate(counter_arr):
        if freq > max_freq:
            max_freq = freq
            output = num

    return output, max_freq


def find_median(sorted_arr):
    if len(sorted_arr) % 2 != 0:
        return sorted_arr[len(sorted_arr) // 2]
    return (sorted_arr[len(sorted_arr) // 2] + sorted_arr[len(sorted_arr) // 2 - 1]) / 2
