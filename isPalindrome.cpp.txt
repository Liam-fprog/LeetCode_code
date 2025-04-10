class Solution {
public:
    bool isPalindrome(int x) {
       vector<int> v;
    vector<int> v2;
    int temp = x;
    if(x<0)return false;
    if(x == 0)return true;
    if(x/10<0)return true;
    
    while(temp>0){
        v.push_back(temp%10);
        v2.push_back(temp%10);
        cout << "J'ai mis la valeur : " << temp%10 << endl;
        temp = temp/10;
    }

    for(auto i: v){
        cout << i;
    }    
    cout << endl;

    reverse(v2.begin(),v2.end());

    if(v == v2)return true;

    return false; 
    }
};