#!/usr/bin/python3
"""Module to return the perimeter of a an island"""


def island_perimeter(grid):
    """Function that returns the perimeter of an island"""

    perim = 0
    count = 0
    collision = 0
    collision_pts = 0
    index_list = []
    l_length = len(grid[0])

    for i in range(l_length):
        index_list.append(0)
    for i in range(1, len(grid) - 1):
        for j in range(1, len(grid[0]) - 1):
            if grid[i][j] == 1:
                count += 4
                if grid[i][j + 1] == 1:
                    collision += 1
                if index_list[j] == 0:
                    index_list[j] = 1
                else:
                    collision += 1
            else:
                index_list[j] = 0
    collision_pts = collision * 2
    perim = count - collision_pts
    return perim
