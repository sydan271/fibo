def sibidi(n, a):
    F = [0, 1]
    for i in range(2, n + 1):
        F.append(a * F[-1] + F[-2])
    return str(F[n])[:5]

while True:
    try:
        line = input()
        if not line.strip():
            continue
        n, a = map(int, line.split())
        print(sibidi(n, a))
    except EOFError:
        break
