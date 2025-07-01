def canCompleteCircle(gas, distance):
    # kiem tra lieu co du xang de di het quang duong khong
    if sum(gas) < sum(distance):
        return -1

    start = 0
    tank = 0

    # thu xuat phat tu cac tram xang
    for i in range(len(gas)):
        print(f"xet {i} [{gas[i]}, {distance[i]}]")
        tank += gas[i] - distance[i]
        print(f"tank: {tank}")

        if tank < 0:
            start = i + 1
            tank = 0

    print()
    return start


if __name__ == "__main__":
    gas = [4, 6, 7, 4]
    distance = [6, 5, 3, 5]

    if canCompleteCircle(gas, distance) == -1:
        print("Khong the di mot vong tron")
    else:
        print(
            f"Xe tai can bat dau tu tram xang thu {canCompleteCircle(gas, distance) + 1}"
        )
