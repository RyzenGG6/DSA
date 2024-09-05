from collections import Counter
import string

doc = """
This is a sample document. This document is for demonstrating word frequency counting.
We need to count each word's occurrence in this document.
"""

words = doc.split()
words = [word.lower().strip(string.punctuation) for word in words]
word_freq = Counter(words)

for word, freq in word_freq.items():
    print(f"{word}: {freq}")
