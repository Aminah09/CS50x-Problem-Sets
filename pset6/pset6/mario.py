from cs50 import get_int

while True:
    height = get_int("height: ")
    if 1 <= height <= 8:
        break
    
# now height is a valid integer
for row in range(1, height + 1):
    print(' ' * (height - row) + '#' * row)