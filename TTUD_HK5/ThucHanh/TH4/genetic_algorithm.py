import random
import string

# Mật khẩu đúng
target_password = "hoilamgi"


# Hàm đánh giá độ phù hợp
def fitness(password):
    return sum(1 for a, b in zip(password, target_password) if a == b)


# Hàm tạo một cá thể ngẫu nhiên
def random_password():
    characters = (
        string.ascii_lowercase + string.digits + " "
    )  # Chữ cái, chữ số và khoảng trắng
    return "".join(random.choice(characters) for _ in range(8))


# Hàm lai ghép
def crossover(parent1, parent2):
    crossover_point = random.randint(1, len(parent1) - 1)
    child1 = parent1[:crossover_point] + parent2[crossover_point:]
    child2 = parent2[:crossover_point] + parent1[crossover_point:]
    return child1, child2


# Hàm đột biến
def mutate(password):
    characters = string.ascii_lowercase + string.digits + " "
    password = list(password)
    mutation_point = random.randint(0, len(password) - 1)
    password[mutation_point] = random.choice(characters)
    return "".join(password)


# Thuật toán di truyền
def genetic_algorithm():
    population_size = 100
    generations = 1000
    mutation_rate = 0.01

    # Khởi tạo quần thể
    population = [random_password() for _ in range(population_size)]

    for generation in range(generations):
        population.sort(key=lambda x: fitness(x), reverse=True)
        best = population[0]
        print(
            f"Generation {generation}: Best password guess = {best}, Fitness = {fitness(best)}"
        )

        if fitness(best) == len(target_password):
            return best

        # Chọn lọc và tạo thế hệ mới
        next_generation = population[:10]  # Chọn 10 cá thể tốt nhất
        while len(next_generation) < population_size:
            parent1, parent2 = random.choices(
                population[:50], k=2
            )  # Chọn 2 cá thể ngẫu nhiên trong top 50
            child1, child2 = crossover(parent1, parent2)
            next_generation.append(child1)
            next_generation.append(child2)

        # Đột biến
        population = [
            mutate(password) if random.random() < mutation_rate else password
            for password in next_generation
        ]

    return None  # Không tìm thấy mật khẩu sau nhiều thế hệ


# Chạy thuật toán di truyền
password_found = genetic_algorithm()
print("Password found: ", password_found)
