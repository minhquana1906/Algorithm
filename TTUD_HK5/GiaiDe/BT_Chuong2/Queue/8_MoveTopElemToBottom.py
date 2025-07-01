from collections import deque


def find_first_element(N):
    # Initialize queue
    queue = deque([1, 2, 3, 4, 5])

    # Process N turns
    for turn in range(N - 1):  # N-1 because initial state counts as turn 1
        # Remove first element
        first = queue.popleft()
        # Add it twice at end
        queue.append(first)
        queue.append(first)

    return queue


# Test cases
def test_game():
    # Test first few turns
    for turn in range(1, 10):
        result = find_first_element(turn)
        print(f"Turn {turn}: First element is {result}")


test_game()

# Simplified:
# from collections import deque


# def push_top_to_bot(arr, n):
#     queue = deque()
#     for i in range(len(arr)):
#         queue.append(arr[i])

#     for i in range(n - 1):
#         first = queue.popleft()
#         queue.extend([first] * 2)

#     return queue


# arr = [1, 2, 3, 4, 5]
# n = 2
# print(push_top_to_bot(arr, n))
