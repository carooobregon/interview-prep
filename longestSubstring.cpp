#include <iostream>
#include <map>

using namespace std;

// Given a string, find the length of the longest substring without repeating characters.
// https://leetcode.com/problems/longest-substring-without-repeating-characters/

// The way I approached this problem was by creating a hash map where I added each character I concatenated on the string.
// Before adding a new char to the string, an iterator checks if the char already exists in the map
// If it already exists, it clears up the map, string and counter and starts making up new substring starting with with the next char
// Accepted by leetcode

int lengthOfLongestSubstring(string str) {
    map<int, int> myMap;      
    string myS;
    int cont = 0;
    int max = 0;
    int startingch = 0;
    int pos = 0;
    map<int, int>::iterator it;
    while(pos < str.length()){
        myS+=str[pos];
        cont++;
        myMap.insert(pair<int,int>(str[pos], 1));
        it = myMap.find(str[pos+1]);
        if (it != myMap.end()){
            startingch++;
            pos = startingch;
            myMap.clear();
            if(cont > max)
                max = cont;
            cont=0;
            myS="";
        }
        else
            pos++;
    }
    if(cont > max)
        max = cont;
    return max; 
}


int main(){
    string myS = "abcdeab";
    int myB = lengthOfLongestSubstring(myS);
    cout << myB << endl;
}
