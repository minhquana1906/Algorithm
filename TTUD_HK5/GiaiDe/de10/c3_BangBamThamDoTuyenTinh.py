def hash_func(x):
    return x % 10


def print_table(table):
    print("Current table:")
    for i, item in enumerate(table):
        print(f"{i}: {item}")
    print("-" * 30)


def insert(value, table):
    index = hash_func(value)
    print(f"Inserting {value} at {index}")

    if table[index] == None:
        table[index] = value
        print(f"Inserted {value} at {index}")
    else:
        print(f"Collision at {index}")
        i = (index + 1) % len(table)
        while i != index:
            if table[i] is None:
                table[i] = value
                print(f"Inserted {value} at {i}")
                break
            print(f"Collision at {i}")
            i = (i + 1) % len(table)
        if i == index:
            print("Table is full")

    print_table(table)


hash_table = [None] * 10

values = [4371, 1323, 6173, 4199, 4399, 4344, 9679, 1989]

for value in values:
    insert(value, hash_table)
