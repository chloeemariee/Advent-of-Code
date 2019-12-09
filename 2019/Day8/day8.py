import sys
import itertools

# Advent of Code 2019 Day 8
# Space Image Format

# Open and strip file

all_layers =  [int(i) for i in open('input.txt', 'r').read().strip()] # more efficient file IO https://www.reddit.com/r/adventofcode/comments/e7pkmt/2019_day_8_solutions/fa8hr35/

# Define variables
# how to define variables these https://paste.ofcode.org/MYzf7jtL5nBpw8DJFzmqVv
image_size = 25*6   # = 150
pixels = len(all_layers)
number_of_layers = int(pixels/image_size)
pixels_per_layer = int(pixels/number_of_layers)

# Do they work?
print(pixels)           # = 15000
print(number_of_layers) # = 100
print(pixels_per_layer) # = 150

# Find the right layer
# how to https://www.reddit.com/r/adventofcode/comments/e7pkmt/2019_day_8_solutions/fa6re9v/

def count_pixels(num, layer):
    return len([px for px in itertools.chain(*layer) if px == num])
def count_zeroes(layer):
    return count_pixels (0, layer)

def key_layer ():
    pixels_per_layer
    the_layer = min(pixels_per_layer, key=count_zeroes)
    ones = count_num(1, the_layer)
    twos = count_num(2, the_layer)
    return ones * twos

print(f"final answer:", key_layer)
