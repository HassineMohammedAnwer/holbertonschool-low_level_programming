#!/usr/bin/python3
"""island perimeter"""


def island_perimeter(grid):
    """   return island's perimeter described in grid     """

    per = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[0])):
            if grid[i][j] == 1:
                per = per + 4
                if i >= 1 and grid[i - 1][j] == 1:
                    per = per - 2
                if j >= 1 and grid[i][j - 1] == 1:
                    per = per - 2
    return (per)
