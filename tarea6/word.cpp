#include <iostream>
#include <map>
#include <vector>

using namespace std;
typedef map<char, int> Map;

void createMap(Map &abc){
        char letter = 'a';
        for(int i = 0; i < 26; i++){
            abc[letter] = 0;
            letter++;
        }
    }

int main(){
    string in;
    vector<string> tmp;
    vector<vector<string>> dic;
    Map mapp;
    
    createMap(mapp);
    while(cin >> in && in != "#"){
        tmp.push_back(in);
        dic.push_back(tmp);
        tmp.clear();
    }
    cin.ignore();
    while(getline(cin, in) && in != "#"){
        int cont = 0;
        bool flag = true;
        for(int i = 0; i < in.size(); i += 2){
            mapp[in[i]]++;
        }
        Map copy = mapp;
        for(int i = 0; i < dic.size(); i++){
            for(int j = 0; j < dic[i].size(); j++){
                for(int k = 0; k < dic[i][j].size(); k++){
                    if(mapp[dic[i][j][k]] > 0 && flag){
                        mapp[dic[i][j][k]]--;
                    }else{
                        flag = false;
                    }
                    
                }
                mapp = copy;
                if(flag){
                    cont++;
                }
                flag = true;
            }
        }
        cout << cont << endl;
        cont = 0;
        mapp.clear();
    }
    return 0;
}
