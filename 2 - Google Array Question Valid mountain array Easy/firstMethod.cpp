#include<iostream>
#include<vector>
using namespace std ;

bool mountain(vector<int> &vec){
    int inc=0,dec =0;
    if(vec.size()<3)
    return false;

    int last=0, current=0;
    for(int i=1;i<vec.size();i++){
        last = vec[i-1];
        current = vec[i];
        if((last < current )&& (dec == 0)){
            inc++;
        }else if(last > current){
            dec++;
        }
        else
        return false;
    }
    if((dec != 0) & (inc !=0))
    return true;
    else
    return false;

}
int main(){
    vector<int> vec = {0,3,2,5,1};
    if(mountain(vec))
    cout<< " the result is True";
    else 
    cout<<"false";
    return 0;
}