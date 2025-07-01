def merge_products(A, B):
    # Create set of products in kho A
    products_A = set(A)

    # Check each product in kho B
    result = []
    for product in B:
        if product not in products_A:
            result.append(True)
            # Add to set A since we'll import it
            products_A.add(product)
        else:
            result.append(False)

    return result


# Test cases
def test_merge_products():
    # Test case 1
    A = ["Banana", "Banana", "Apple"]
    B = ["Orange", "Apple", "Banana", "Watermelon"]
    print(f"Test 1: {merge_products(A, B)}")  # [True, False, False, True]

    # Test case 2
    A = ["Apple", "Orange"]
    B = ["Banana", "Mango", "Apple"]
    print(f"Test 2: {merge_products(A, B)}")  # [True, True, False]


test_merge_products()
