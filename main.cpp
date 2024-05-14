#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include <array>
#include <cctype>
#include <unordered_map>
#include <unordered_set>
using namespace std;
const int SIZE = 4;
double sumColumn(const double m[][SIZE], int rowSize, int columnIndex) {
 double sum = 0;
 for (int i = 0; i < rowSize; ++i) {
 sum += m[i][columnIndex];
 }
 return sum;
}
const int SIZE_2 = 4;
double sumMajorDiagonal(const double m[][SIZE_2]) {
 double sum = 0;
 for (int i = 0; i < SIZE; ++i) {
 sum += m[i][i];
 }
 return sum;
}
const int N = 4;
void multiplyMatrix(const double a[][N], const double b[][N], double c[][N]) {
 for (int i = 0; i < N; ++i) {
 for (int j = 0; j < N; ++j) {
 c[i][j] = 0;
 for (int k = 0; k < N; ++k) {
 c[i][j] += a[i][k] * b[k][j];
 }
 }
 }
}
void search(std::string& s, char& key) {
 bool found = false;
 for (char c : s) {
 if (c == key) {
 found = true;
 break;
 }
 }
 if (found) {
 std::cout << "Found" << std::endl;
 } else {
 std::cout << "Not found" << std::endl;
 }
}
int count(const std::string& s, char a) {
 int occurrences = 0;
 for (char c : s) {
 if (c == a) {
 occurrences++;
 }
 }
 return occurrences;
}
void count(const char s[], int counts[]) {
 // Initialize counts array to all zeros
 for (int i = 0; i < 26; ++i) {
 counts[i] = 0;
 }
 // Iterate through the string
 for (int i = 0; s[i] != '\0'; ++i) {
 char c = s[i];
 // Check if the character is a letter (case-insensitive)
 if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
 // Convert to lowercase if needed
 if (c >= 'A' && c <= 'Z') {
 c += ('a' - 'A');
 }
 // Increment the count for the corresponding letter
 counts[c - 'a']++;
 }
 }
}
int countAuthenticChars(const std::string& s) {
 std::unordered_set<char> authenticChars;
 for (char c : s) {
 if (c >= 'A' && c <= 'Z') {
 authenticChars.insert(c);
 }
 }
 return authenticChars.size();
}
std::vector<int> findSmallerNeighbors(const std::string& input) {
 std::vector<int> result;
 for (int i = 1; i < input.size() - 1; ++i) {
 if (input[i] < input[i - 1] && input[i] < input[i + 1]) {
 result.push_back(input[i] - '0'); // Convert char to int
 }
 }
 return result;
}
using namespace std;
#define val 33.3
#define number 50
int a;
int& fun(){
 return a;
}
int foo(){
 return a;
}
int findLargestElement(const int* arr, int size) {
 if (size == 0) {
 return 0; // Return 0 for an empty array
 }
 const int* ptr = arr;
 int max = *ptr;
 for (int i = 1; i < size; ++i) {
 if (*(ptr + i) > max) {
 max = *(ptr + i);
 }
 }
 return max;
}
std::array<int, 10> countDigits(const int & number10) {
 std::array<int, 10> counts{}; // Initialize all counts to zero
 int num = number10;
 while (num > 0) {
 int digit = num % 10;
 counts[digit]++;
 num /= 10;
 }
 return counts;
}
std::array<int, 10> countDigits(const int& number11) {
 std::array<int, 10> counts{}; // Initialize all counts to zero
 int num = number11;
 while (num > 0) {
 int digit = num % 10;
 counts[digit]++;
 num /= 10;
 }
 return counts;
}
std::array<int, 10> countDigits(const int& number12) {
 std::array<int, 10> counts{}; // Initialize all counts to zero
 int num = number12;
 while (num > 0) {
 int digit = num % 10;
 counts[digit]++;
 num /= 10;
 }
 return counts;
}
std::array<int, 10> countDigits(const int& number13) {
 std::array<int, 10> counts{}; // Initialize all counts to zero
 int num = number13;
 while (num > 0) {
 int digit = num % 10;
 counts[digit]++;
 num /= 10;
 }
 return counts;
}
std::array<int, 10> countDigits(const int& number14) {
 std::array<int, 10> counts{}; // Initialize all counts to zero
 int num = number14;
 while (num > 0) {
 int digit = num % 10;
 counts[digit]++;
 num /= 10;
 }
 return counts;
}
 char toLower(const char s) {
 if (s >= 'A' && s <= 'Z') {
 return s - 'A' + 'a'; // Convert uppercase to lowercase
 }
 return s; // Return unchanged if already lowercase
 }
 void countChar(const char* str, int& vowelCount, int& consonantCount) {
 vowelCount = 0;
 consonantCount = 0;
 while (*str != '\0') {
 char c = toLower(*str); // Convert character to lowercase
 if (c >= 'a' && c <= 'z') {
 if (c == 'a',c == 'e', c == 'i', c == 'o', c == 'u') {
 vowelCount++;
 } else {
 consonantCount++;
 }
 }
 str++; // Move to the next character
 }
 }
void sortArray(int* arr, int size) {
 for (int i = 0; i < size - 1; ++i) {
 for (int j = i + 1; j < size; ++j) {
 if (*(arr + i) > *(arr + j)) {
 // Swap elements if they are out of order
 int temp = *(arr + i);
 *(arr + i) = *(arr + j);
 *(arr + j) = temp;
 }
 }
 }
}
void factorial(int n, int* fact) {
 *fact = 1;
 for (int i = 1; i <= n; ++i) {
 *fact *= i;
 }
}
std::string adjustCase(const std::string& word) {
 int upperCount = 0, lowerCount = 0;
 // Count the number of uppercase and lowercase letters in the word
 for (char c : word) {
 if (std::isupper(c)) {
 upperCount++;
 } else if (std::islower(c)) {
 lowerCount++;
 }
 }
 // Determine the case to convert the word to
 char targetCase = (upperCount > lowerCount) ? toupper(word[0]) : tolower(word[0]);
 // Convert all letters to the determined case
 std::string adjustedWord;
 for (char c : word) {
 adjustedWord += (targetCase == toupper(c)) ? toupper(c) : tolower(c);
 }
 return adjustedWord;
}
int romanToInt(std::string s) {
 std::unordered_map<char, int> romanMap{
 {'I', 1}, {'V', 5}, {'X', 10},
 {'L', 50}, {'C', 100}, {'D', 500},
 {'M', 1000}
 };
 int result = 0;
 for (int i = 0; i < s.length(); ++i) {
 int current = romanMap[s[i]];
 int next = (i < s.length() - 1) ? romanMap[s[i + 1]] : 0;
 if (current < next) {
 result += next - current;
 ++i;
 } else {
 result += current;
 }
 }
 return result;
}
int main() {
 std::cout<<"Problem_1"<<std::endl;
 const int rows = 5;
 const double matrix[rows][SIZE] = {
 {5, 3, 1, 6},
 {-5, 2, 1, 5},
 {66, 16, -3, 11},
 {2, 55, 0, 404}
 };
 for (int i = 0; i < SIZE; ++i) {
 std::cout << "Sum of column " << i << " = " << sumColumn(matrix, rows, i) <<
std::endl;
 }
 std::cout<<"Problem_2"<<std::endl;
 const double matrix1[SIZE_2][SIZE_2] = {
 {1.0, 2.0, 3.0, 4.0},
 {2.0, 4.5, 1.2, 7.8},
 {5.0, 6.0, 7.0, 8.0},
 {9.3, 5.6, 0.8, 3.1}
 };
 const double matrix2[SIZE_2][SIZE_2] = {
 {9.0, 10.0, 11.0, 12.0},
 {13.0, 14.0, 15.0, 16.0},
 {6.4, 8.7, 2.9, 4.0},
 {5.2, 1.7, 3.5, 6.8}
 };
 std::cout << "Output: " << sumMajorDiagonal(matrix1) << std::endl;
 std::cout << "Output: " << sumMajorDiagonal(matrix2) << std::endl;
 std::cout<<"Problem_3"<<std::endl;
 const double M1[N][N] = {
 {1.0, 2.0, 3.0, 4.0},
 {5.0, 6.0, 7.0, 8.0},
 {9.0, 10.0, 11.0, 12.0},
 {13.0, 14.0, 15.0, 16.0}
 };
 const double M2[N][N] = {
 {0.5, 1.5, 2.5, 3.5},
 {4.5, 5.5, 6.5, 7.5},
 {8.5, 9.5, 10.5, 11.5},
 {12.5, 13.5, 14.5, 15.5}
 };
 double result[N][N];
 multiplyMatrix(M1, M2, result);
 std::cout << "Output:" << std::endl;
 for (int i = 0; i < N; ++i) {
 for (int j = 0; j < N; ++j) {
 std::cout << result[i][j] << " ";
 }
 std::cout << std::endl;
 }
 std::cout<<"Problem_4"<<std::endl;
 std::string input1 = "! ALWAYS!";
 char key1 = '!';
 search(input1, key1);
 std::string input2 = "# Is it true?";
 char key2 = '$';
 search(input2, key2);
 std::cout<<"Problem_5"<<std::endl;
 std::string input5_1 = "T The True story";
 char a1 = 'T';
 std::cout << "Output: " << count(input1, a1) << std::endl;
 std::string input5_2 = "a Hello World";
 char a2 = 'a';
 std::cout << "Output: " << count(input2, a2) << std::endl;
 std::cout<<"Problem_6"<<std::endl;
 const int SIZE = 26;
 int counts[SIZE];
 const char input[] = "Hello World! How are you?";
 count(input, counts);
 std::cout << "Output:" << std::endl;
 for (int i = 0; i < SIZE; ++i) {
 if (counts[i] > 0) {
 char letter = 'a' + i;
 std::cout << letter << ":" << counts[i] << " ";
 }
 }
 std::cout << std::endl;
 std::cout<<"Problem_7"<<std::endl;
 int n7;
 cout << "Enter the number of grades: ";
 cin >> n7;
 vector<int> grades(n7);
 cout << "Enter " << n7 << " grades: ";
 for(int i = 0; i < n7; ++i) {
 cin >> grades[i];
 }
 int minimum = grades[0];
 int maximum = grades[0];
 int sum = grades[0];
 for(int i = 1; i < n7; ++i) {
 if(grades[i] < minimum) {
 minimum = grades[i];
 }
 if(grades[i] > maximum) {
 maximum = grades[i];
 }
 sum += grades[i];
 }
 double average = static_cast<double>(sum) / n7;
 cout << "Minimum=" << minimum << endl;
 cout << "Maximum=" << maximum << endl;
 cout << "Average=" << average << endl;
 std::cout<<"Problem_8"<<std::endl;
 int n8;
 std::cout << "Enter the number of elements: ";
 std::cin >> n8;
 std::vector<int> numbers(n8);
 std::cout << "Enter the numbers: ";
 for (int i = 0; i < n8; ++i) {
 std::cin >> numbers[i];
 }
 // Remove zeros and negative numbers
 numbers.erase(std::remove_if(numbers.begin(), numbers.end(), [](int num) { return
num <= 0; }), numbers.end());
 // Sort the elements
 std::sort(numbers.begin(), numbers.end());
 // Output the sorted elements
 std::cout << "Output: ";
 for (int num : numbers) {
 std::cout << num << " ";
 }
 std::cout << std::endl;
 std::cout<<"Problem_9"<<std::endl;
 std::string s;
 std::cout << "Enter the string: ";
 std::cin >> s;
 int count = countAuthenticChars(s);
 std::cout << "Number of authentic characters: " << count << std::endl;
 std::cout<<"Problem_10"<<std::endl;
 std::string input_10;
 std::cout << "Enter the numbers: ";
 std::cin >> input_10;
 std::vector<int> smallerNeighbors = findSmallerNeighbors(input_10);
 std::cout << "Output: ";
 for (int num : smallerNeighbors) {
 std::cout << num << " ";
 }
 std::cout << std::endl;
 std::cout<<"Problem_11"<<std::endl;
 int n1=9,n2=11, *ptr_1= nullptr, *ptr_2= nullptr, k=0;
 double t;
 //*ptr_1=&n1;
 //ptr_1=&n2;
 //*ptr_2=&n2;
 //ptr_2=&n1;
 //t=val;
 //k=val;
 //foo()=number;
 //fun()=number;
 cout<<(number/2)<<" "; // Output: 50
 // cout<<(number/4)<<" "; // Uncommented code
 cout<<(number/4)<<" "; // Output: 12
 // cout<<val<<" "; // Uncommented code
 cout<<val<<" "; // Output: 32.3
 cout<<(number/n1)<<endl; // Output: 8
 std::cout<<"Problem_12"<<std::endl;
 srand(static_cast<unsigned int>(time(nullptr)));
 // Create an array of 10 random integers
 int arr[10];
 for (int i = 0; i < 10; ++i) {
 arr[i] = rand() % 100; // Generate random integers between 0 and 99
 }
 // Create a pointer and assign the array to it
 int* ptrA = arr;
 // Display address and value of each element of the array using ptrA
 for (int i = 0; i < 10; ++i) {
 std::cout << "Address: " << ptrA + i << ", Value: " << *(ptrA + i) <<
std::endl;
 }
 std::cout<<"Problem_13"<<std::endl;
 int n_13;
 std::cout << "Enter the size of the array: ";
 std::cin >> n_13;
 std::cout << "Enter the elements of the array: ";
 for (int i = 0; i < n_13; ++i) {
 std::cin >> arr[i];
 }
 int largest = findLargestElement(arr, n_13);
 std::cout << "Largest element: " << largest << std::endl;
 std::cout<<"Problem_14"<<std::endl;
 std::cout<<"Problem_15"<<std::endl;
 std::cout<<"Problem_16"<<std::endl;
 int num, result_2;
 std::cout << "Enter a number: ";
 std::cin >> num;
 factorial(num, &result_2);
 std::cout << "Factorial of " << num << ": " << result_2 << std::endl;
 std::cout<<"Problem_17"<<std::endl;
 const char* str = "Happy New Year";
 int vowelCount, consonantCount;
 countChar(str, vowelCount, consonantCount);
 std::cout << "vowels: " << vowelCount << " consonants: " << consonantCount <<
std::endl;
 std::cout<<"Problem_18"<<std::endl;
 const int size = 7;
 std::cout << "Input: ";
 for (int i = 0; i < size; ++i) {
 std::cout << *(arr + i);
 }
 std::cout << std::endl;
 sortArray(arr, size);
 std::cout << "Output: ";
 for (int i = 0; i < size; ++i) {
 std::cout << *(arr + i);
 }
 std::cout << std::endl;
 std::cout<<"Problem_19"<<std::endl;
 int x = 0;
 int n19;
 std::cout << "Enter the number of operations: ";
 std::cin >> n19;
 std::cout << "Enter the operations: ";
 for (int i = 0; i < n19; ++i) {
 std::string operation;
 std::cin >> operation;
 if (operation == "x++" || operation == "++x") {
 ++x;
 } else if (operation == "x--" || operation == "--x") {
 --x;
 }
 }
 std::cout << "Output: " << x << std::endl;
 return 0;
 int x19 = 0;
 int n191;
 std::cout << "Enter the number of operations: ";
 std::cin >> n191;
 std::cout << "Enter the operations: ";
 for (int i = 0; i < n191; ++i) {
 std::string operation;
 std::cin >> operation;
 if (operation == "x++" || operation == "++x") {
 ++x;
 } else if (operation == "x--" || operation == "--x") {
 --x;
 }
 }
 std::cout << "Output: " << x << std::endl;
 return 0;
 std::cout<<"Problem_20"<<std::endl;
 std::string roman;
 std::cout << "Enter a Roman numeral: ";
 std::cin >> roman;
 int integerEquivalent = romanToInt(roman);
 std::cout << "Integer equivalent: " << integerEquivalent << std::endl;
 std::cout<<"Problem_21"<<std::endl;
 std::string word;
 std::cout << "Enter a word: ";
 std::cin >> word;
 std::string adjustedWord = adjustCase(word);
 std::cout << "Output: " << adjustedWord << std::endl;
 return 0;
}