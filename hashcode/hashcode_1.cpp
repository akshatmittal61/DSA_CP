#include<bits/stdc++.h>
using namespace std;
class contributor{
    public:
    string name;
    int n_skills;
    vector<pair<string,int>> skills;
};
int main()
{
    int nc,np;
    // contributor contributors[nc];
    for (int i = 0; i <nc; i++)
    {
        contributor c;
        cin>>c.name;
        string skillName;
        int level;
        cin>>skillName>>level;
        c.skills.push_back(make_pair(skillName,level));
    }
    
    return 0;
}