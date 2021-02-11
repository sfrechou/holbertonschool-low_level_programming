#!/usr/bin/python3
"""Island Perimeter"""

def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    per = 0
    for row in range(0, len(grid)):
        for cell in range(0, len(grid[row])):
            if grid[row][cell] == 1:
                if grid[row - 1][cell] != 1:
                    per += 1
                if row >= (len(grid) - 1):
                    per += 1
                elif grid[row + 1][cell] != 1:
                    per += 1
                if grid[row][cell - 1] != 1:
                    per += 1
                if cell >= (len(grid) - 1):
                    per += 1
                elif grid[row][cell + 1] != 1:
                    per += 1
    return per
