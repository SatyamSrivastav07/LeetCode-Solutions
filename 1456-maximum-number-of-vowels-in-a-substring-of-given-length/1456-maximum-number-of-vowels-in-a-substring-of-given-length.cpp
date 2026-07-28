#include <bits/stdc++.h>
using namespace std;

// ==================================================
// TYPE ALIASES
// ==================================================

using ll = long long;
using ull = unsigned long long;
using ld = long double;

using pii = pair<int, int>;
using pll = pair<ll, ll>;

using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vector<int>>;
using vvll = vector<vector<ll>>;

// ==================================================
// CONSTANTS
// ==================================================

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

// ==================================================
// MACROS
// ==================================================

#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) static_cast<int>((x).size())

// ==================================================
// GENERAL UTILITY FUNCTIONS
// ==================================================

namespace utils {

// --------------------------------------------------
// CHARACTER FUNCTIONS
// --------------------------------------------------

bool isVowel(char ch) {
    ch = static_cast<char>(tolower(static_cast<unsigned char>(ch)));

    return ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u';
}

bool isConsonant(char ch) {
    return isalpha(static_cast<unsigned char>(ch)) && !isVowel(ch);
}

bool isDigit(char ch) {
    return isdigit(static_cast<unsigned char>(ch));
}

bool isAlphabet(char ch) {
    return isalpha(static_cast<unsigned char>(ch));
}

bool isUppercase(char ch) {
    return isupper(static_cast<unsigned char>(ch));
}

bool isLowercase(char ch) {
    return islower(static_cast<unsigned char>(ch));
}

char toLower(char ch) {
    return static_cast<char>(
        tolower(static_cast<unsigned char>(ch))
    );
}

char toUpper(char ch) {
    return static_cast<char>(
        toupper(static_cast<unsigned char>(ch))
    );
}

// --------------------------------------------------
// STRING CASE CONVERSION
// --------------------------------------------------

string toLowerCase(string str) {
    for (char& ch : str) {
        ch = toLower(ch);
    }

    return str;
}

string toUpperCase(string str) {
    for (char& ch : str) {
        ch = toUpper(ch);
    }

    return str;
}

// --------------------------------------------------
// PALINDROME FUNCTIONS
// --------------------------------------------------

bool isPalindrome(const string& str) {
    int left = 0;
    int right = sz(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

bool isPalindromeIgnoreCase(string str) {
    str = toLowerCase(str);
    return isPalindrome(str);
}

// Ignores spaces, punctuation and letter case.
// Example: "A man, a plan, a canal: Panama"
bool isValidPalindrome(const string& str) {
    int left = 0;
    int right = sz(str) - 1;

    while (left < right) {
        while (
            left < right &&
            !isalnum(static_cast<unsigned char>(str[left]))
        ) {
            left++;
        }

        while (
            left < right &&
            !isalnum(static_cast<unsigned char>(str[right]))
        ) {
            right--;
        }

        char leftChar = toLower(str[left]);
        char rightChar = toLower(str[right]);

        if (leftChar != rightChar) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

bool isNumberPalindrome(ll number) {
    if (number < 0) {
        return false;
    }

    ll original = number;
    ll reversed = 0;

    while (number > 0) {
        int digit = number % 10;

        if (reversed > (LLONG_MAX - digit) / 10) {
            return false;
        }

        reversed = reversed * 10 + digit;
        number /= 10;
    }

    return original == reversed;
}

bool isArrayPalindrome(const vector<int>& nums) {
    int left = 0;
    int right = sz(nums) - 1;

    while (left < right) {
        if (nums[left] != nums[right]) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

// --------------------------------------------------
// VOWEL AND CHARACTER COUNT
// --------------------------------------------------

int countVowels(const string& str) {
    int count = 0;

    for (char ch : str) {
        if (isVowel(ch)) {
            count++;
        }
    }

    return count;
}

int countConsonants(const string& str) {
    int count = 0;

    for (char ch : str) {
        if (isConsonant(ch)) {
            count++;
        }
    }

    return count;
}

int countDigits(const string& str) {
    int count = 0;

    for (char ch : str) {
        if (isDigit(ch)) {
            count++;
        }
    }

    return count;
}

int countSpaces(const string& str) {
    return static_cast<int>(
        count(str.begin(), str.end(), ' ')
    );
}

int countWords(const string& str) {
    stringstream ss(str);
    string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }

    return count;
}

// --------------------------------------------------
// STRING CLEANING
// --------------------------------------------------

string removeSpaces(const string& str) {
    string result;

    for (char ch : str) {
        if (!isspace(static_cast<unsigned char>(ch))) {
            result += ch;
        }
    }

    return result;
}

string removeVowels(const string& str) {
    string result;

    for (char ch : str) {
        if (!isVowel(ch)) {
            result += ch;
        }
    }

    return result;
}

string removeNonAlphanumeric(const string& str) {
    string result;

    for (char ch : str) {
        if (isalnum(static_cast<unsigned char>(ch))) {
            result += ch;
        }
    }

    return result;
}

string trim(const string& str) {
    int start = 0;
    int end = sz(str) - 1;

    while (
        start <= end &&
        isspace(static_cast<unsigned char>(str[start]))
    ) {
        start++;
    }

    while (
        end >= start &&
        isspace(static_cast<unsigned char>(str[end]))
    ) {
        end--;
    }

    if (start > end) {
        return "";
    }

    return str.substr(start, end - start + 1);
}

// --------------------------------------------------
// STRING REVERSAL
// --------------------------------------------------

string reverseString(string str) {
    reverse(all(str));
    return str;
}

void reverseStringInPlace(string& str) {
    reverse(all(str));
}

void reverseWords(vector<char>& str) {
    reverse(all(str));

    int start = 0;

    for (int end = 0; end <= sz(str); end++) {
        if (end == sz(str) || str[end] == ' ') {
            reverse(str.begin() + start, str.begin() + end);
            start = end + 1;
        }
    }
}

// Example:
// "hello world" -> "world hello"
string reverseWordOrder(const string& str) {
    stringstream ss(str);
    vector<string> words;
    string word;

    while (ss >> word) {
        words.push_back(word);
    }

    reverse(all(words));

    string result;

    for (int i = 0; i < sz(words); i++) {
        if (i > 0) {
            result += ' ';
        }

        result += words[i];
    }

    return result;
}

// --------------------------------------------------
// STRING FREQUENCY
// --------------------------------------------------

array<int, 26> lowercaseFrequency(const string& str) {
    array<int, 26> frequency{};

    for (char ch : str) {
        ch = toLower(ch);

        if (ch >= 'a' && ch <= 'z') {
            frequency[ch - 'a']++;
        }
    }

    return frequency;
}

unordered_map<char, int> characterFrequency(
    const string& str
) {
    unordered_map<char, int> frequency;

    for (char ch : str) {
        frequency[ch]++;
    }

    return frequency;
}

unordered_map<string, int> wordFrequency(
    const string& str
) {
    unordered_map<string, int> frequency;
    stringstream ss(str);
    string word;

    while (ss >> word) {
        frequency[word]++;
    }

    return frequency;
}

char firstNonRepeatingCharacter(const string& str) {
    unordered_map<char, int> frequency;

    for (char ch : str) {
        frequency[ch]++;
    }

    for (char ch : str) {
        if (frequency[ch] == 1) {
            return ch;
        }
    }

    return '\0';
}

char mostFrequentCharacter(const string& str) {
    if (str.empty()) {
        return '\0';
    }

    unordered_map<char, int> frequency;

    for (char ch : str) {
        frequency[ch]++;
    }

    char answer = str[0];
    int maximumFrequency = 0;

    for (char ch : str) {
        if (frequency[ch] > maximumFrequency) {
            maximumFrequency = frequency[ch];
            answer = ch;
        }
    }

    return answer;
}

// --------------------------------------------------
// ANAGRAM FUNCTIONS
// --------------------------------------------------

bool isAnagram(string first, string second) {
    if (first.size() != second.size()) {
        return false;
    }

    array<int, 256> frequency{};

    for (char ch : first) {
        frequency[
            static_cast<unsigned char>(ch)
        ]++;
    }

    for (char ch : second) {
        frequency[
            static_cast<unsigned char>(ch)
        ]--;
    }

    for (int count : frequency) {
        if (count != 0) {
            return false;
        }
    }

    return true;
}

bool isAnagramIgnoreCase(string first, string second) {
    first = toLowerCase(first);
    second = toLowerCase(second);

    return isAnagram(first, second);
}

// --------------------------------------------------
// SUBSTRING AND PREFIX FUNCTIONS
// --------------------------------------------------

bool startsWith(
    const string& str,
    const string& prefix
) {
    if (prefix.size() > str.size()) {
        return false;
    }

    return equal(
        prefix.begin(),
        prefix.end(),
        str.begin()
    );
}

bool endsWith(
    const string& str,
    const string& suffix
) {
    if (suffix.size() > str.size()) {
        return false;
    }

    return equal(
        suffix.rbegin(),
        suffix.rend(),
        str.rbegin()
    );
}

bool contains(
    const string& str,
    const string& target
) {
    return str.find(target) != string::npos;
}

vector<string> split(
    const string& str,
    char delimiter
) {
    vector<string> parts;
    string part;
    stringstream ss(str);

    while (getline(ss, part, delimiter)) {
        parts.push_back(part);
    }

    return parts;
}

string join(
    const vector<string>& words,
    const string& separator
) {
    string result;

    for (int i = 0; i < sz(words); i++) {
        if (i > 0) {
            result += separator;
        }

        result += words[i];
    }

    return result;
}

// --------------------------------------------------
// DUPLICATE STRING FUNCTIONS
// --------------------------------------------------

string removeDuplicateCharacters(const string& str) {
    array<bool, 256> visited{};
    string result;

    for (char ch : str) {
        unsigned char index =
            static_cast<unsigned char>(ch);

        if (!visited[index]) {
            visited[index] = true;
            result += ch;
        }
    }

    return result;
}

bool hasDuplicateCharacters(const string& str) {
    array<bool, 256> visited{};

    for (char ch : str) {
        unsigned char index =
            static_cast<unsigned char>(ch);

        if (visited[index]) {
            return true;
        }

        visited[index] = true;
    }

    return false;
}

// --------------------------------------------------
// NUMBER FUNCTIONS
// --------------------------------------------------

ll gcd(ll first, ll second) {
    first = abs(first);
    second = abs(second);

    while (second != 0) {
        first %= second;
        swap(first, second);
    }

    return first;
}

ll lcm(ll first, ll second) {
    if (first == 0 || second == 0) {
        return 0;
    }

    return abs((first / gcd(first, second)) * second);
}

bool isEven(ll number) {
    return number % 2 == 0;
}

bool isOdd(ll number) {
    return number % 2 != 0;
}

bool isPrime(ll number) {
    if (number < 2) {
        return false;
    }

    if (number == 2) {
        return true;
    }

    if (number % 2 == 0) {
        return false;
    }

    for (ll divisor = 3;
         divisor <= number / divisor;
         divisor += 2) {

        if (number % divisor == 0) {
            return false;
        }
    }

    return true;
}

vector<bool> sieve(int limit) {
    vector<bool> prime(limit + 1, true);

    if (limit >= 0) {
        prime[0] = false;
    }

    if (limit >= 1) {
        prime[1] = false;
    }

    for (int number = 2;
         number <= limit / number;
         number++) {

        if (!prime[number]) {
            continue;
        }

        for (int multiple = number * number;
             multiple <= limit;
             multiple += number) {

            prime[multiple] = false;
        }
    }

    return prime;
}

vector<int> getPrimes(int limit) {
    vector<bool> prime = sieve(limit);
    vector<int> primes;

    for (int number = 2; number <= limit; number++) {
        if (prime[number]) {
            primes.push_back(number);
        }
    }

    return primes;
}

vector<int> getDivisors(int number) {
    vector<int> divisors;

    for (int divisor = 1;
         divisor <= number / divisor;
         divisor++) {

        if (number % divisor == 0) {
            divisors.push_back(divisor);

            if (divisor != number / divisor) {
                divisors.push_back(number / divisor);
            }
        }
    }

    sort(all(divisors));
    return divisors;
}

int countDigits(ll number) {
    if (number == 0) {
        return 1;
    }

    number = abs(number);
    int count = 0;

    while (number > 0) {
        count++;
        number /= 10;
    }

    return count;
}

int digitSum(ll number) {
    number = abs(number);
    int sum = 0;

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    return sum;
}

ll reverseNumber(ll number) {
    bool isNegative = number < 0;
    number = abs(number);

    ll reversed = 0;

    while (number > 0) {
        int digit = number % 10;

        if (reversed > (LLONG_MAX - digit) / 10) {
            throw overflow_error("Number reversal overflow");
        }

        reversed = reversed * 10 + digit;
        number /= 10;
    }

    return isNegative ? -reversed : reversed;
}

ll power(ll base, ll exponent) {
    ll result = 1;

    while (exponent > 0) {
        if (exponent & 1LL) {
            result *= base;
        }

        base *= base;
        exponent >>= 1LL;
    }

    return result;
}

ll modularPower(
    ll base,
    ll exponent,
    ll modulus = MOD
) {
    if (modulus == 1) {
        return 0;
    }

    ll result = 1;
    base %= modulus;

    while (exponent > 0) {
        if (exponent & 1LL) {
            result = (__int128)result * base % modulus;
        }

        base = (__int128)base * base % modulus;
        exponent >>= 1LL;
    }

    return result;
}

// Works when modulus is prime.
ll modularInverse(ll number, ll modulus = MOD) {
    return modularPower(number, modulus - 2, modulus);
}

// --------------------------------------------------
// ARRAY AND VECTOR FUNCTIONS
// --------------------------------------------------

template <typename T>
T vectorSum(const vector<T>& nums) {
    return accumulate(nums.begin(), nums.end(), T{});
}

template <typename T>
T vectorMinimum(const vector<T>& nums) {
    if (nums.empty()) {
        throw invalid_argument("Vector is empty");
    }

    return *min_element(all(nums));
}

template <typename T>
T vectorMaximum(const vector<T>& nums) {
    if (nums.empty()) {
        throw invalid_argument("Vector is empty");
    }

    return *max_element(all(nums));
}

template <typename T>
void removeDuplicatesSorted(vector<T>& nums) {
    nums.erase(
        unique(all(nums)),
        nums.end()
    );
}

template <typename T>
void removeDuplicatesUnsorted(vector<T>& nums) {
    unordered_set<T> visited;
    vector<T> result;

    for (const T& value : nums) {
        if (visited.insert(value).second) {
            result.push_back(value);
        }
    }

    nums = move(result);
}

template <typename T>
unordered_map<T, int> frequencyMap(
    const vector<T>& nums
) {
    unordered_map<T, int> frequency;

    for (const T& value : nums) {
        frequency[value]++;
    }

    return frequency;
}

template <typename T>
bool containsDuplicate(const vector<T>& nums) {
    unordered_set<T> values;

    for (const T& value : nums) {
        if (!values.insert(value).second) {
            return true;
        }
    }

    return false;
}

template <typename T>
vector<T> prefixSum(const vector<T>& nums) {
    vector<T> prefix(nums.size() + 1, 0);

    for (int i = 0; i < sz(nums); i++) {
        prefix[i + 1] = prefix[i] + nums[i];
    }

    return prefix;
}

template <typename T>
T rangeSum(
    const vector<T>& prefix,
    int left,
    int right
) {
    return prefix[right + 1] - prefix[left];
}

// --------------------------------------------------
// BINARY SEARCH FUNCTIONS
// --------------------------------------------------

template <typename T>
int binarySearch(
    const vector<T>& nums,
    const T& target
) {
    int left = 0;
    int right = sz(nums) - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (nums[middle] == target) {
            return middle;
        }

        if (nums[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return -1;
}

template <typename T>
int lowerBoundIndex(
    const vector<T>& nums,
    const T& target
) {
    return static_cast<int>(
        lower_bound(all(nums), target) - nums.begin()
    );
}

template <typename T>
int upperBoundIndex(
    const vector<T>& nums,
    const T& target
) {
    return static_cast<int>(
        upper_bound(all(nums), target) - nums.begin()
    );
}

// --------------------------------------------------
// PRINT FUNCTIONS
// --------------------------------------------------

template <typename T>
void printVector(const vector<T>& nums) {
    for (const T& value : nums) {
        cout << value << ' ';
    }

    cout << '\n';
}

template <typename T>
void printMatrix(const vector<vector<T>>& matrix) {
    for (const auto& row : matrix) {
        printVector(row);
    }
}

} // namespace utils

// ==================================================
// GRAPH DIRECTIONS
// ==================================================

const vector<pair<int, int>> directions4 = {
    {-1, 0},
    {0, 1},
    {1, 0},
    {0, -1}
};

const vector<pair<int, int>> directions8 = {
    {-1, -1},
    {-1, 0},
    {-1, 1},
    {0, -1},
    {0, 1},
    {1, -1},
    {1, 0},
    {1, 1}
};

// ==================================================
// LEETCODE SOLUTION CLASS
// ==================================================

class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0;
        for (int i = 0; i < k; i++) {
            count += utils::isVowel(s[i]);
        }
        int maxCount = count;
        for (int i = k; i < s.length(); i++) {
            count -= utils::isVowel(s[i - k]);
            count += utils:: isVowel(s[i]);
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};

    int solve(vector<int>& nums) {
       
        return 0;
    }

