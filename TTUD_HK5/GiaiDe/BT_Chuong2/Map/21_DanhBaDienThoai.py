def count_prefix(contacts, names):
    result = []

    for name in names:
        # Count contacts starting with current name
        count = sum(1 for contact in contacts if contact.startswith(name))
        result.append(count)

    return result


# Test cases
def test_count_prefix():
    # Test case 1
    contacts = ["Codelearn", "Codewar"]
    names = ["Code", "Codel", "io"]
    result = count_prefix(contacts, names)
    print(f"Test 1: {result}")  # [2, 1, 0]

    # Test case 2
    contacts = ["John Doe", "John Smith", "Jane Doe"]
    names = ["John", "Jane", "Joe"]
    result = count_prefix(contacts, names)
    print(f"Test 2: {result}")  # [2, 1, 0]


test_count_prefix()
