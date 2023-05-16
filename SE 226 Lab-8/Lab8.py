#Q1
from abc import ABC, abstractmethod
from collections import Counter



class abstract_class(ABC):
    adress = "weirdWords.txt"
    def __init__(self, adress):
        self.adress = adress

    @abstractmethod
    def calculateFreqs(self):
        pass

#Q2-#Q3
class ListCount(abstract_class):
    def calculateFreqs(self):

        with open(self.adress, 'r') as file:
            characters = list(file.read())
        frequencies = Counter(characters)
        result = []
        for char, freq in frequencies.items():
            result.append(char)
            result.append(freq)

        print(result)


class DictCount(abstract_class):
    def calculateFreqs(self):
        freqs = {}
        with open(self.adress, 'r') as file:
            for line in file:
                for char in line:
                    if char.isalpha():
                        char = char.lower()
                        if char in freqs:
                            freqs[char] += 1
                        else:
                            freqs[char] = 1
        print(freqs)
#Q4
list_counter = ListCount("weirdWords.txt")
list_counter.calculateFreqs()

dict_counter = DictCount("weirdWords.txt")
dict_counter.calculateFreqs()
