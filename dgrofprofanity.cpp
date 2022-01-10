#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void) 
{
    int i;
    int profanity=0;
    string input;
    string bad[] = {/*the bad words given*/};           //add the words here from the given list
    vector <string> badwords(bad, bad + sizeof(bad) / sizeof(string));

    while (cin >> input)                                //input will be the comments
    {
        for (i = 0; i < badwords.size(); ++i)
            if (badwords[i] == input)
            {
            
                profanity=profanity+1;
            
            }
    }
    cout<<profanity;

    return 0;
}