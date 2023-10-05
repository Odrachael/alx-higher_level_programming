#!/usr/bin/python3

if __name__ == "__main__":
    """Print the addition of all arguments."""
    import sys

    add_args = 0
    for i in range(len(sys.argv) - 1):
        add_args += int(sys.argv[i + 1])
    print("{}".format(add_args))
