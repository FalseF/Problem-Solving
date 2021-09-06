class Solution {
public:
    bool isValid(string S) {
        
    int len = S.length();
     stack<char>st;
     int ck =0;
     for(int i =0;i<len;i++)
     {
     	if(S[i]=='}')
     	{
     		if(!st.empty())
     		{
     			if(st.top()=='{') 
     			{ 
     			    st.pop();
     			}
     			else
     			{
     				ck=1;
     				break;
     			}
     		}
     		
     		else 
     		{
     			ck=1;
     			break;
     		}
     }
     else if(S[i]==')')
     	{
     		if(!st.empty())
     		{
     			if(st.top()=='('){st.pop();}
     			else
     			{
     				ck=1;
     				break;
     			}
     		}
     		else
     		{
     			ck=1;break;
     		}
     	}
     else if(S[i]==']')
     	{
     		if(!st.empty())
     		{
     			if(st.top()=='['){st.pop();}
     			else
     			{
     				ck=1;
     				break;
     			}
     		}
     		else
     		{
     			ck=1;break;
     		}
     	}
     	else
     	{
     		st.push(S[i]);
     	}
     }
     
    if(ck==1 || st.size()>0)  return false;
    else return true;
        
    }
};