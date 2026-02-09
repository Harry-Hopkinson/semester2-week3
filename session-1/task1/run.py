from dis import dis


def multiply(num1, num2):
    return num1 * num2


def for_loop():
    for i in range(3):
        print(i)


def fib(n, prev1, prev2):
    if n < 3:
        return

    fn = prev1 + prev2
    prev2 = prev1
    prev1 = fn

    print(fn, end=" ")
    fib(n - 1, prev1, prev2)


dis(multiply)
dis(for_loop)
dis(fib)
