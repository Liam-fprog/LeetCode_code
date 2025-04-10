class Solution {
public:
    int addDigits(int num) {
        if(num<10)return num;
        bool verif = false;
        int res = 0;
        int temp = num;
        vector<int> v;
        while(verif == false){
            while(temp>0){
                v.push_back(temp%10);
                temp = temp/10;
            }
            for(int i = 0; i<v.size(); i++){
                cout<<res<< " " << v[i] << endl;
                res += v[i];
            }
            if(res < 10){return res;}
            temp = res;
            res = 0;
            v.clear();
            //verif = true;

        }
        return 0;
    }
};