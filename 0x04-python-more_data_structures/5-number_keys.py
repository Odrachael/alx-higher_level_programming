#!/usr/bin/python3
def number_keys(a_dictionary):
    num = 0
    list_of_keys = list(a_dictionary.keys())

    for i in list_of_keys:
        num += 1

    return num
