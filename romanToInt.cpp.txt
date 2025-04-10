class Solution {
public:
    int romanToInt(string s) {
        int entier = 0;
        if(s == "I")return 1;
        if(s == "V")return 5;
        if(s == "X")return 10;
        if(s == "L")return 50;
        if(s == "C")return 100;
        if(s == "D")return 500;
        if(s == "M")return 1000;
        for(int i =0; i<s.length(); i++){

            if(s[i] == 'V'){entier = entier+5; cout << "c'est passe dans V" << endl;}
            if(s[i] == 'L'){entier = entier+50; cout << "c'est passe dans L" << endl;}
            if(s[i] == 'D'){entier = entier+500; cout << "c'est passe dans D" << endl;}
            if(s[i] == 'M'){entier = entier+1000; cout << "c'est passe dans M" << endl;}


            if(s[i] == 'I' && s[i+1] == 'V' ){entier = entier +4;i=i+1;  cout << "c'est passe dans IV" << endl;}else
            if(s[i] == 'I' && s[i+1] == 'X' ){entier = entier +9;i=i+1; cout << "c'est passe dans IX" << endl;}else
            if(s[i] == 'I'){entier = entier+ 1; cout << "c'est passe dans I" << endl;}

            if(s[i] == 'X' && s[i+1] == 'L' ){entier = entier +40;i=i+1; cout << "c'est passe dans XL" << endl;}else
            if(s[i] == 'X' && s[i+1] == 'C' ){entier = entier +90;i=i+1; cout << "c'est passe dans XC" << endl;}else
            if((s[i] == 'X' && i == 0)||(s[i] == 'X' && s[i-1] != 'I')){entier = entier+ 10; cout << "c'est passe dans X" << endl;}

            if(s[i] == 'C' && s[i+1] == 'D' ){entier = entier +400;i=i+1; cout << "c'est passe dans CD" << endl;}else
            if(s[i] == 'C' && s[i+1] == 'M' ){entier = entier +900; i=i+1; cout << "c'est passe dans CM" << endl;}else
            if((s[i] == 'C' && i == 0)||(s[i] == 'C' && s[i-1] != 'X')){entier = entier+ 100; cout << "c'est passe dans C" << endl;}

            
            
           
        }
        
        return entier;
    }
};