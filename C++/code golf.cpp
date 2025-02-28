#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n,x,min,max;
    string s1,s2,substr;
    // Swap two variables without a temporary variable
    a ^= b ^= a ^= b; // Bitwise XOR swap (use with caution for performance reasons)

    // Check if number is even
    bool isEven = (n & 1) == 0;

    // Check if number is power of 2
    bool isPowerOfTwo = n && !(n & (n - 1));

    // Count set bits in an integer
    int countBits = __builtin_popcount(n); // GCC specific

    // Get the maximum of two values
    int max = a > b ? a : b;  // Ternary operator version
    int max = std::max(a, b); // Standard library version

    // Absolute value
    int abs = n < 0 ? -n : n; // Manual version
    int abs = std::abs(n);    // Standard library version

    // Convert char to uppercase/lowercase
    char upper = c | 32;  // Lowercase to uppercase (if c is a letter)
    char lower = c & ~32; // Uppercase to lowercase (if c is a letter)

    // Round floating point to nearest integer
    int rounded = (int)(x + 0.5);                   // For positive numbers only
    int rounded = (int)(x + (x >= 0 ? 0.5 : -0.5)); // Works for any number

    // Find if strings are anagrams
    bool areAnagrams = std::is_permutation(s1.begin(), s1.end(), s2.begin());

    // Reverse a string in-place
    std::reverse(str.begin(), str.end());

    // Sort a vector
    std::sort(vec.begin(), vec.end());

    // Find the sum of all elements in a vector
    int sum = std::accumulate(vec.begin(), vec.end(), 0);

    // Check if a string contains a substring
    bool contains = str.find(substr) != std::string::npos;

    // Get current time since epoch in seconds
    auto now = std::chrono::system_clock::now().time_since_epoch() / std::chrono::seconds(1);

    // Generate a random number between min and max
    int random = min + rand() % (max - min + 1);

    // Convert integer to string
    std::string str = std::to_string(n);

    // Check if all elements satisfy a condition
    bool allPositive = std::all_of(vec.begin(), vec.end(), [](int x){ return x > 0; });
    return 0;
}