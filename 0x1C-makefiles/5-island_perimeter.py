#!/usr/bin/python3
"""
Deals with measuring the perimeter of an island.

"""


def island_perimeter(grid):
    """
    Calculates the island perimeter.

    Returns:
        int: perimeter of the island.

    """
    if not grid or not grid[0]:
        return 0

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += 4

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if i < (len(grid)) - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                if j < (len(grid[i])): - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1

    return perimeter
