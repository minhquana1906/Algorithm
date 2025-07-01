import random
import string


def find_password_pso(target, n_particles=30, max_iter=1000):
    chars = string.ascii_lowercase + string.digits + " "
    char_to_pos = {c: i for i, c in enumerate(chars)}
    pos_to_char = {i: c for i, c in enumerate(chars)}
    dim = len(target)

    # Initialize particles
    particles = []
    for _ in range(n_particles):
        pos = [random.randint(0, len(chars) - 1) for _ in range(dim)]
        vel = [random.uniform(-1, 1) for _ in range(dim)]
        particles.append(
            {"pos": pos, "vel": vel, "best_pos": pos.copy(), "best_score": 0}
        )

    global_best_pos = particles[0]["pos"]
    global_best_score = 0

    # PSO parameters
    w = 0.5  # inertia
    c1 = 2.0  # cognitive (personal best)
    c2 = 2.0  # social (global best)

    for iter in range(max_iter):
        for p in particles:
            # Convert position to password
            password = "".join(pos_to_char[round(x) % len(chars)] for x in p["pos"])

            # Calculate fitness
            score = sum(1 for i in range(dim) if password[i] == target[i])

            # Update personal best
            if score > p["best_score"]:
                p["best_score"] = score
                p["best_pos"] = p["pos"].copy()

            # Update global best
            if score > global_best_score:
                global_best_score = score
                global_best_pos = p["pos"].copy()

            # Found solution
            if score == dim:
                return password, iter

            # Update velocity and position
            for i in range(dim):
                r1, r2 = random.random(), random.random()
                p["vel"][i] = (
                    w * p["vel"][i]
                    + c1 * r1 * (p["best_pos"][i] - p["pos"][i])
                    + c2 * r2 * (global_best_pos[i] - p["pos"][i])
                )
                p["pos"][i] += p["vel"][i]

        if iter % 100 == 0:
            best_password = "".join(
                pos_to_char[round(x) % len(chars)] for x in global_best_pos
            )
            print(f"Iteration {iter}: Best = {best_password}")

    return None, max_iter


# Test
target = "hoilamgi"
password, iter = find_password_pso(target)
print(f"\nFound '{password}' in iteration {iter}")
