message='good morning' # single line comment
test="this is a test string" # single line comment
my_string = """Good morning usa,\ni know its gonna be a wonderful day!""" # multiple line comment

print(message[0:4]) # prints the substring from index 0 to 4 of the message string
print(test[0:4]) # prints the substring from index 0 to 4 of the test string
print(my_string[0:4]) # prints the substring from index 1 to 5 of the my_string

print(message[5:]) # prints the substring from index 5 to 10 of the message string
print(my_string.lower()) # prints the my_string in lowercase
print(my_string.upper()) # prints the my_string in uppercase]
print(my_string.split()) # prints the my_string as a list of words
print(len(my_string)) # prints the length of the my_string
print(my_string.count('a')) # prints the number of occurrences of 'a' in the my_string
print(my_string.strip()) # prints the my_string with leading and trailing whitespace removed
print(test.replace('test', 'sample')) # prints the test string with 'test' replaced by 'sample'
print(test.title()) # prints the test string with the first letter of each word capitalized
print('abcd'.find('a')) # prints the index of the first occurrence of 'a' in the string 'abcd'