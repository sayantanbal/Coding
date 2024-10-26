# Count Occurrences of each unique word in a Sentence.

'''
steps ->
1. Take a sentence as input.
2. split the sentence into words using split() method.
3. make a list of unique words.
4. count the occurrences of each unique word in the sentence.
5. print the count of each unique word.

'''


def count_occurrences(sentence):
    words = sentence.split() # we don't need to pass any argument to split() method as it will split the sentence by space by default.
    unique_words = set(words) # set() method will remove the duplicates from the list.
    for word in unique_words:
        print(f'{word} : {words.count(word)}')

if __name__ == '__main__':
    sentence = input('Enter a sentence: ')
    count_occurrences(sentence)