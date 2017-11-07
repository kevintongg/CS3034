import sys


def convert_f_to_c(c):
    return c * (9.0 / 5.0) + 32


def temperature_conversion(minimum, maximum):
    while True:
        print("Please input a valid minimum temperature value between "
              + str(minimum) + "C° and " + str(maximum) + "C°:")
        min_temp = input()
        print("Please input a valid maximum temperature value between "
              + str(minimum) + "C° and " + str(maximum) + "C°:")
        max_temp = input()
        try:
            min_temp = int(min_temp)
            max_temp = int(max_temp)
        except ValueError:
            print("Please input a valid temperature value between "
                  + str(minimum) + "C° and " + str(maximum) + "C°!")
            continue
        if (float(minimum) <= float(min_temp) <= float(maximum)) \
                | (float(minimum) <= float(max_temp) <= float(maximum)):
            break
        else:
            print("Invalid range!")

    print("  C°        F°")
    for i in range(min_temp, max_temp + 1):
        f = float(convert_f_to_c(i))
        print("{:.2f}".format(i) + "C° => " + "{:.2f}".format(f) + "F°")


def main():
    temperature_conversion(-273.00, 5000.00)


if __name__ == '__main__':
    sys.exit(main())
