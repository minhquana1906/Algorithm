import random
import string


def find_password(target, pop_size=50):
    # Setup
    chars = string.ascii_lowercase + string.digits + " "
    password_len = len(target)

    # Create initial population
    population = [
        "".join(random.choice(chars) for _ in range(password_len))
        for _ in range(pop_size)
    ]

    generation = 0
    while True:
        # Calculate fitness for each password
        fitness = [
            (p, sum(1 for i in range(password_len) if p[i] == target[i]))
            for p in population
        ]
        fitness.sort(key=lambda x: x[1], reverse=True)

        # Check if password found
        if fitness[0][1] == password_len:
            return fitness[0][0], generation

        # Create new population
        new_pop = []
        # Keep best 2 passwords
        new_pop.extend(p[0] for p in fitness[:2])

        # Create children
        while len(new_pop) < pop_size:
            # Select parents from top 50%
            p1, p2 = random.sample([p[0] for p in fitness[: pop_size // 2]], 2)
            # Crossover
            point = random.randint(1, password_len - 1)
            child = p1[:point] + p2[point:]
            # Mutation
            if random.random() < 0.1:  # 10% mutation rate
                pos = random.randint(0, password_len - 1)
                child = child[:pos] + random.choice(chars) + child[pos + 1 :]
            new_pop.append(child)

        population = new_pop
        generation += 1

        if generation % 100 == 0:
            print(f"Generation {generation}: Best match = {fitness[0][0]}")


# Test
target = "hoilamgi"
password, gen = find_password(target)
print(f"\nFound '{password}' in generation {gen}")
