# Advent of Code 2019 Day 8
# Space Image Format

# 25 x 6 = size of image

# Open File
with open("input.txt", "r") as fo:
  line = fo.readline()

pixels =  [int(i) for i in open('input.txt', 'r').read().strip()] # more efficient file IO https://www.reddit.com/r/adventofcode/comments/e7pkmt/2019_day_8_solutions/fa8hr35/
