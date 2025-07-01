def is_prefix(str1, str2):
    # Kiểm tra str1 có phải là tiền tố của str2
    if len(str1) > len(str2):
        return False
    return str2[: len(str1)] == str1


def check_strings():
    # Đọc input
    n = int(input())
    strings = []
    for _ in range(n):
        s = input().strip()
        strings.append(s)

    # Kiểm tra từng cặp chuỗi
    for i in range(n):
        for j in range(n):
            if i != j and is_prefix(strings[i], strings[j]):
                return f"BAD SET\n{strings[j]}"

    return "GOOD SET"


# In kết quả
print(check_strings())
