#!/usr/bin/python3
for y in reversed(range(97, 123)):
    print("{:c}".format(y if (y % 2 == 0) else (y - 32)), end='')
