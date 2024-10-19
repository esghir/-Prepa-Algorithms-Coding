#include<iostream>
#include<vector>
#include<string>
using namespace std;
string substring(string & str){
int max = 0;
string substr="";

for (char &i : str){
        if (substr.find(i) == string::npos) {
            substr +=i;
            max = substr.size();
        }
    
else if(substr.size() < max)
substr.clear();

}

    return substr;
}

int main() {
    string str = "bbbb";
    cout << "Longest substring without repeating characters: " << substring(str) << endl;
    return 0;
}