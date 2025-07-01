import unidecode


def sort_vietnamese_words(words):
    """
    Sắp xếp danh sách các từ tiếng Việt theo thứ tự bảng chữ cái.

    :param words: Danh sách các từ tiếng Việt
    :return: Danh sách các từ tiếng Việt đã được sắp xếp
    """
    # Sử dụng unidecode để loại bỏ dấu tiếng Việt và sắp xếp
    words_sorted = sorted(words, key=lambda x: unidecode.unidecode(x).lower())
    return words_sorted


# Ví dụ sử dụng
vietnamese_words = ["hoa", "hòa", "hóa", "hoà", "hóa", "hoàn", "hoạnh"]
sorted_words = sort_vietnamese_words(vietnamese_words)

print("Danh sách từ tiếng Việt đã sắp xếp:")
for word in sorted_words:
    print(word)
