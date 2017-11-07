import sys


def main():
    print("hello")
    print(fib(4))

    a = BankAccount
    a.deposit(a, 500)
    a.get_balance()


class BankAccount:
    def __init__(self):
        self._balance = 0

    def withdraw(self, amount):
        self._balance -= amount

    def deposit(self, amount):
        self._balance += amount

    def get_balance(self):
        return self._balance


def fib(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fib(n - 1) + fib(n - 2)


if __name__ == '__main__':
    sys.exit(main())
