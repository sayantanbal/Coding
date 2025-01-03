# Problem Statement - Write a Python program that takes a sentence and count the frequency of each unique word in the sentence.
from collections import Counter
sentence = 'the quick brown fox jumps over the lazy dog'
words = sentence.split()
print(words)
word_freq = Counter(words)
print(word_freq)
print(type(word_freq))