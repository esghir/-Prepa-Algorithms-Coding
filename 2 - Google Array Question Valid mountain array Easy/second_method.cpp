#include<iostream>
#include<vector>
using namespace std ;

bool mountain(vector<int> &vec){
    int i=1;
    while((i<vec.size()) && (vec[i-1]<vec[i]))
    i++;
    if((i==1)|| (i==vec.size()))
    return false;
    while((i<vec.size()) && (vec[i-1]>vec[i]))
    i++;
    return i == vec.size();

}
int main(){
    vector<int> vec = {0,2,5,1,2};
    if(mountain(vec))
    cout<< " the result is True";
    else 
    cout<<"false";
    return 0;
}
