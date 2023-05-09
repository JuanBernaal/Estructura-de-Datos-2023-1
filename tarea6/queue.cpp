#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int p, c, cont = 1;
    scanf("%d %d", &p, &c);
    while(p != 0 && c != 0){
        list<int> queue, ans;
        char input;
        int e;
        for(int i = 1; i <= p; i++){
            queue.push_back(i);
        }
        for(int i = 0; i < c; i++){
            scanf(" %c", &input);
            list<int>::iterator it = queue.begin();
            if(input == 'N'){
                ans.push_back(*it);
                queue.push_back(*it);
                queue.pop_front();
            }else{
                scanf("%d", &e);
                if(!queue.empty()){
                    bool flag = true;
                    for(list<int>::iterator itr = queue.begin(); itr != queue.end() && flag == true; itr++){
                        if(*itr == e){
                            queue.push_front(*itr);
                            queue.erase(itr);
                            flag = false;
                        }
                    }
                }
            }
        }
        printf("Case %d:\n", cont);
        cont++;
        for(list<int>::iterator iterador = ans.begin(); iterador != ans.end(); iterador++){
            cout << *iterador << endl;
        }
        scanf("%d %d", &p, &c);
    }
    return 0;
}