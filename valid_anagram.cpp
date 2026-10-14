#include <string>
#include <vector>
using std::string;
using std::vector;

bool isAnagram(const string &word, const string &t)
{
    if (word.size() != t.size())
    {
        return false;
    }

    int counter[26] = {0};

    for (int i = 0; i < word.length(); i++)
    {
        counter[word[i] - 'a']++;
        counter[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (counter[i] != 0)
        {
            return false;
        }
    }
    return true;
}