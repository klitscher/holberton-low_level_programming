#!/usr/bin/python3
"""Module to return the perimeter of a an island"""


def island_perimeter(grid):
    """Function that returns the perimeter of an island"""

    perim = 0
    count = 0
    for l in grid:
        for v in l:
            if v == 1:
                count += 1
    if count == 0:
        return 0
    count += 1
    perim = count * 2
    return perim
