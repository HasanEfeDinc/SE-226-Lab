#Q1
def common_elements(list1, list2):
    print([element for element in list1 if element in list2])
    return [element for element in list1 if element in list2]
#Q2
def find_palindromes(strings):
    palindromes = []
    for string in strings:
        if string == string[::-1]:
            palindromes.append(string)
    print(palindromes)
    return palindromes
#Q3
def sieve_of_eratosthenes(input_list):
    input_list = sorted(list(set(input_list)))
    if input_list[0] < 2:
        input_list = [num for num in input_list if num >= 2]

    prime_list = []
    while input_list:
        prime = input_list[0]
        prime_list.append(prime)
        input_list = [num for num in input_list if num % prime != 0]

    print(prime_list)
    return prime_list

#Q4
def anagrams(word, word_list):
    word = sorted(word.lower().replace(" ", ""))
    anagram_list = []

    for element in word_list:
        data = sorted(element.lower().replace(" ", ""))
        if word == data:
            anagram_list.append(element)
    print(anagram_list)
    return anagram_list






