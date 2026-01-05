#include <bits/stdc++.h>

using namespace std;
vector<string> split(const string& input, char delimiter) {
    vector<string> result;
    string current;

    for (char c : input) {
        if (c == delimiter) {
            result.push_back(current);
            current.clear();
        } else {
            current.push_back(c);
        }
    }

    result.push_back(current);

    return result;
}
int main() {
    std::ifstream file("input.txt");
    std::stringstream buffer;
    buffer << file.rdbuf();

    std::string input = buffer.str();
    long long sum=0;
    vector<string> arr=split(input,',');
    for(string a : arr){

        vector<string> nums=split(a,'-');
        for(long long k=stoll(nums[0]);k<=stoll(nums[1]);k++){
            string num=to_string(k);
            bool flag=true;
            for(int i=0;i<num.size()/2;i++){
                
            }
        }
    }
cout<<sum;

}
