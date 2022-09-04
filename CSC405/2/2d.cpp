#include <iostream>
using namespace std;
int main()
{
    int count[5] = {0, 0, 0, 0, 0}, spoils = 0;
    int vote, n;
    cout << " Enter the number of voters: ";
    cin >> n;
    cout << "\n Cast the votes: ";
    while (n--)
    {
        cin >> vote;
        if (vote >= 1 && vote <= 5)
            ++count[vote - 1];
        else
            ++spoils;
    }
    for (int i = 1; i <= 5; ++i)
        cout << "\n Votes for candidate " << i << ": " << count[i - 1];
    cout << "\n Spoilt Ballots: " << spoils;
    return 0;
}
// Akshat Mittal
// 20107