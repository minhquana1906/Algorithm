from collections import deque


def max_in_subarrays(arr, k):
    n = len(arr)
    if n * k == 0:
        return []
    if k == 1:
        return arr

    deq = deque()
    max_numbers = []

    for i in range(n):
        # Remove elements not within the window
        if deq and deq[0] == i - k:
            deq.popleft()

        # Remove elements smaller than the current element
        while deq and arr[deq[-1]] < arr[i]:
            deq.pop()

        deq.append(i)

        # Append the maximum element of the current window
        if i >= k - 1:
            max_numbers.append(arr[deq[0]])

    return max_numbers


# Example usage
arr = [1, 2, 3, 1, 4, 5, 2, 3, 6]
k = 3
print(max_in_subarrays(arr, k))  # Output: [3, 3, 4, 5, 5, 5, 6]
