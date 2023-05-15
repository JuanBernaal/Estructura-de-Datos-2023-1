#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
typedef vector<char>::iterator Iterator;

int compare(vector<char> vec, vector<char> &str){
    int ans = 0;
    Iterator it = str.begin();
    while(it != str.end()){
        //cout << "itititititit: " << *it << endl;
        Iterator itr = vec.begin();
        bool flag = true;
        while(itr != vec.end()){
            //cout << "itr: " << *itr << endl;
            if(*it == *itr){
                vec.erase(itr);
                str.erase(it);
                it--;
                flag = false;
            }else{
                itr++;
            }
        }
        it++;
    }
    if(vec.size() == 0 || str.size() == 0){
        ans = 1;
    }
    return ans;
}

int main(){
    string input;
    vector<char> tmp, puz, ans;
    vector<vector<char>> dic;
    int cont = 0;
    
    while(getline(cin, input) && input != "#"){
        for(int i = 0; i < input.size(); i++){
            tmp.push_back(input[i]);
        }
        dic.push_back(tmp);
        tmp.clear();
    }
    while(getline(cin, input) && input != "#"){
        for(int i = 0; i < input.size(); i++){
            if(input[i] != ' '){
                puz.push_back(input[i]);
            }
        }
        //Comprobado hasta aqui bueno.
        vector<char> copy = puz;
        for(int i = 0; i < dic.size(); i++){
            //cout << "i: " << i << endl;
            int sum = compare(dic[i], puz);
            puz = copy;
            cont += sum;
            //cout << "Cont: " << cont << endl;
        }
        ans.push_back(cont);
        cont = 0;
        puz.clear(); 
    }
    for(int i = 0; i < ans.size(); i++){
        printf("%d\n", ans[i]);
    }
    return 0;
}
