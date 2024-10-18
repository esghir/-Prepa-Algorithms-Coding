#include <iostream>
#include <vector>
using namespace std;
vector<int> moveZeros(vector<int> vec){
        for (int i=0 ; i<vec.size();i++) {   
        if(vec[i]==0){
        vec.erase(vec.begin()+i);
        vec.push_back(0);
        }
    }
return vec;
}


int main() {
    std::vector<int> vec = {1,0, 2, 3,0, 4, 5};


    // Print the vector after removing
for(int i:moveZeros(vec))
cout<<i <<" - ";

    return 0;
}
