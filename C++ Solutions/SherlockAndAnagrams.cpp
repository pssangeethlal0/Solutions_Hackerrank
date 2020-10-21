#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int sherlockAndAnagrams(string s) {

    int diff = 1,len = s.length(), res = 0;

    for(int i=0; i<len-1; i++){
        vector<string> subs(0);

        for(int j=0; j<len-diff+1; j++){
            
            string temp = s.substr(j,diff);
            sort(temp.begin(), temp.end());
            cout << temp << endl;
            subs.push_back(temp);
            // j = j + diff -1;
        }
        diff++;

        for(int x=0; x<subs.size(); x++){
            for(int y=x+1; y<subs.size(); y++){
                if(subs[x] == subs[y]){
                    res++;
                }
            }
        }
    }

    return res;

}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = sherlockAndAnagrams(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
