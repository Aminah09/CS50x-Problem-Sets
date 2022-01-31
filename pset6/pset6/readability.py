from cs50 import get_string

text = get_string("text: ")

letters = sentence = words = 0

for char in text:
    if char.isalpha():
        letters += 1
    if char.isspace():
        words += 1
    if char in ['?', '.', '!']:
        sentence += 1
    
words += 1
l = (letters * 100.0)/words
s = (sentence * 100.0)/words
result = int((0.0588 * l - 0.296 * s - 15.8) + 0.5)
if result < 1:
    print('Before Grade 1')
elif result >= 16:
    print('Grade 16+')
else:
    print(f"Grade {result}")
    