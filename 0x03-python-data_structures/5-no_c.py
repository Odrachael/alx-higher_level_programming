#!/usr/bin/python3
def no_c(my_string):
    edited_str = ''
    for i in my_string:
        if i != 'c' and i != 'C':
            edited_str += i
    return edited_str
