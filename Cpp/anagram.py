'''\
Python3 program for implementation of checking string is anagram or not
using set function.
'''

def check(s1, s2):

	# Asserting length of string
	assert len(s1) == len(s2), 'The strings are not of same length'
	
	# Implementation of set function
	if set(s1.lower()) == set(s2.lower()):
	print("The strings are anagrams.")
	else:
	print("The strings aren't anagrams.")
	
	# one liner for above implementation
	# print('The strings are anagrams.') if set(s1.lower()) == set(s2.lower()) else print('The strings aren\'t anagrams.')
	


#Driver code
if __name__ == '__main__':
	word1, word2 = 'listen', 'silent'
	check(word1, word2)