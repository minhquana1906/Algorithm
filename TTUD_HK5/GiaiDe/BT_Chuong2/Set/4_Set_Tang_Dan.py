def get_distinct_products(products):
    # Convert to set to remove duplicates and back to sorted list
    return sorted(set(products))


# Test cases
def test_distinct_products():
    # Test case 1
    products1 = ["watermelon", "grapes", "grapes", "apple", "grapes"]
    print(f"Original: {products1}")
    print(f"Distinct: {get_distinct_products(products1)}")

    # Test case 2
    products2 = ["banana", "apple", "banana", "orange", "apple"]
    print(f"\nOriginal: {products2}")
    print(f"Distinct: {get_distinct_products(products2)}")


test_distinct_products()
