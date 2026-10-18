#include <string>
#include <vector>

using std::string;
using std::vector;

bool isPalindrome(const string &s)
{
    int left = 0;
    int right = s.size() - 1;

    while (left < right)
    {
        if (s[left] != s[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {};