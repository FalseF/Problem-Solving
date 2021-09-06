class Solution {
public:
    map<int,string>index;
vector<string>v;
void fun(int start,string digit, string res)
{
	if(start==digit.size())
	{
		v.push_back(res);
		return ;
	}
	
	for(auto i:index[digit[start]-'0'])
	{
		fun(start+1,digit,res+i);
	}
    
}
    vector<string> letterCombinations(string S) {
        
        if(S=="") return v;
         index[2]="abc";
    index[3]="def";
    index[4]="ghi";
    index[5]="jkl";
    index[6]="mno";
    index[7]="pqrs";
    index[8]="tuv";
    index[9]="wxyz";
    fun(0,S,"");
        return v;
        
    }
};