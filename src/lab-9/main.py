from .university import University


def main():
    university = University()

    university.create_course("English", 101)
    university.list_courses()


if __name__ == '__main__':
    main()
