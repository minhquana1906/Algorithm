import random


def equation(x, y, z, q):
    return 3 * x + 2 * y + z + q


def fitness(x, y, z, q):
    return abs(equation(x, y, z, q) - 34)


def initialize_swarm(swarm_size, gene_pool):
    swarm = []
    for _ in range(swarm_size):
        particle = [random.choice(gene_pool) for _ in range(4)]
        velocity = [random.uniform(-1, 1) for _ in range(4)]
        swarm.append((particle, velocity))
    return swarm


def update_velocity(particle, velocity, p_best, g_best, w, c1, c2):
    new_velocity = []
    for i in range(len(particle)):
        r1 = random.random()
        r2 = random.random()
        best_practicle = c1 * r1 * (p_best[i] - particle[i])
        best_global = c2 * r2 * (g_best[i] - particle[i])
        new_velocity.append(w * velocity[i] + best_practicle + best_global)
    return new_velocity


def update_position(particle, velocity, gene_pool):
    new_position = []
    for i in range(len(particle)):
        new_pos = particle[i] + velocity[i]
        new_pos = max(min(new_pos, max(gene_pool)), min(gene_pool))
        new_position.append(int(new_pos))
    return new_position


def pso(gene_pool, swarm_size=10, max_iter=100, w=0.7, c1=1.5, c2=1.5):
    swarm = initialize_swarm(swarm_size, gene_pool)
    p_best = [particle for particle, _ in swarm]
    g_best = min(p_best, key=lambda p: fitness(*p))

    for t in range(max_iter):
        for i, (particle, velocity) in enumerate(swarm):
            current_fitness = fitness(*particle)
            if current_fitness < fitness(*p_best[i]):
                p_best[i] = particle
            if current_fitness < fitness(*g_best):
                g_best = particle

        for i, (particle, velocity) in enumerate(swarm):
            velocity = update_velocity(particle, velocity, p_best[i], g_best, w, c1, c2)
            particle = update_position(particle, velocity, gene_pool)
            swarm[i] = (particle, velocity)

        if fitness(*g_best) == 0:
            break

    return g_best


gene_pool = list(range(1, 20))

solution = pso(gene_pool)
print("x, y, z, q:", solution)
print("Equation result:", equation(*solution))
