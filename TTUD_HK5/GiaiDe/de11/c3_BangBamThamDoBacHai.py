def hash_func(value):
    return value % 10


def quadratic_probe(hash_val, i, size):
    return (hash_val + i * i) % size


def print_table(table):
    for i, item in enumerate(table):
        print(f"{i}: {item}")

    print("=" * 50)


def insert(value, table):
    hash_val = hash_func(value)
    print(f"Hash({value}) = {hash_val}")

    print(f"Try to insert {value} into hash table [{hash_val}].")
    if table[hash_val] is None:
        table[hash_val] = value
        print(f"Inserted {value} into hash table[{hash_val}].")
    else:
        print(f"Collision happened in {hash_val}.")
        i = 1
        while i < len(table):
            new_pos = quadratic_probe(hash_val, i, len(table))
            print(f"Try to insert {value} into hash table [{new_pos}] (i = {i}).")
            if table[new_pos] is None:
                table[new_pos] = value
                print(f"Inserted {value} in {new_pos}.")
                break
            i += 1

        if i == len(table):
            print("Hash table is full.")

    print_table(table)


if __name__ == "__main__":
    table = [None] * 10
    values = [4371, 1323, 6173, 4199, 4344, 9679, 1989]

    for val in values:
        insert(val, table)
