#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(){
    list<string> dict, puzzle;
    string input, x;
    while(cin >> input && input != "#"){
        dict.push_back(input);
    }
    cin.ignore();
    while(getline(cin, input) && input != "#"){
        puzzle.push_back(input);
    }
    for(list<string>::iterator it = puzzle.begin(); it != puzzle.end(); it++){
    string x = *it;
        for(int j = 0; j < x.size(); j += 2){
            cout << "Puzzle: " << x[j] << endl;
            for(list<string>::iterator itr = dict.begin(); itr != dict.end(); itr++){
                string ref = *itr;
                for(int i = 0; i < ref.size(); i++){
                    cout << "dict: " << ref[i] << endl;
                }
            }
        }
    }

    return 0;
}