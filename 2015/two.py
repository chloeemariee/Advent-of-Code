# Advent of Code 2015 day 01 
# PART TWO 

# puzzle file name = input01.txt
# now without "enumerate" using my old If and While loop

# Set the stage
floor = 0 
position = 1

# Open the file 
with open ("input01.txt") as fo: 
    directions = fo.read()

# Start the count
while floor > -1 : 
    if directions [position-1] == "(" : #[position-1] to start at 0th place
        floor += 1
        position += 1
    elif directions [position-1] == ")" :
        floor -= 1
        position += 1

# Time to find out how many flights of stairs Santa had to take
# making sure to subtract 1 to counter the original [position-1]
print("It took you long enough.", position-1)
