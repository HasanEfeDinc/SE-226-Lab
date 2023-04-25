#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//----------------------------------------------------------------------
//Q1
vector<int> common_elements(const vector<int> list1, const vector<int> list2) {
    vector<int> result;
    for (const int element : list1) {
        if (find(list2.begin(), list2.end(), element) != list2.end()) {
            result.push_back(element);
        }
    }
    return result;
}
//----------------------------------------------------------------------
//Q2
bool is_palindrome(const string s) {
    return equal(s.begin(), s.end(), s.rbegin());
}

vector<string> find_palindromes(const vector<string> strings) {
    vector<string> palindromes;
    for (const string string : strings) {
        if (is_palindrome(string)) {
            palindromes.push_back(string);
        }
    }
    return palindromes;
}
//----------------------------------------------------------------------
//Q3
vector<int> sieve_of_eratosthenes(vector<int> input_list) {
    sort(input_list.begin(), input_list.end());
    input_list.erase(unique(input_list.begin(), input_list.end()), input_list.end());

    input_list.erase(remove_if(input_list.begin(), input_list.end(),
                                    [](int num) { return num < 2; }),
                     input_list.end());

    vector<int> prime_list;
    while (!input_list.empty()) {
        int prime = input_list[0];
        prime_list.push_back(prime);

        input_list.erase(remove_if(input_list.begin(), input_list.end(),
                                        [prime](int num) { return num % prime == 0; }),
                         input_list.end());
    }

    return prime_list;
}
//----------------------------------------------------------------------
//Q4
string to_lower_and_remove_spaces(const string input) {
    string result;
    for (char c : input) {
        if (c != ' ' && c != '\t') {
            result.push_back(tolower(static_cast<unsigned char>(c)));
        }
    }
    return result;
}

vector<string> anagrams(const string word, const vector<string> word_list) {
    string sorted_word = to_lower_and_remove_spaces(word);
    sort(sorted_word.begin(), sorted_word.end());

    vector<string> anagram_list;

    for (const string element : word_list) {
        string data = to_lower_and_remove_spaces(element);
        sort(data.begin(), data.end());

        if (sorted_word == data) {
            anagram_list.push_back(element);
        }
    }

    return anagram_list;
}
//----------------------------------------------------------------------
int main() {

}
