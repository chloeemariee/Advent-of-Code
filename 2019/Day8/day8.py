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

