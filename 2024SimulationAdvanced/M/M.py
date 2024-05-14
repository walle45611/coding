while True:
    N = int(input())
    if N == -1:
        break
    male_bees = 0
    total_bees = 1
    for _ in range(N):
        new_male_bees = total_bees
        new_total_bees = male_bees + 1 + total_bees
        male_bees = new_male_bees
        total_bees = new_total_bees
    print(male_bees, total_bees)

