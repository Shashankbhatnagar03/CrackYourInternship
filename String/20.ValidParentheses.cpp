class Solution
{
public:
    bool isValid(string s)
    {
        // 40-(  ,41-) , 91-[ ,93-],123-{,125-}
        stack<char> current;
        if (s.length() == 1)
            return false;
        for (int i = 0; i < s.length(); i++)
        {

            // if(!current.empty()) cout<<(current.top())<<" "<<endl;

            if (s[i] == ')' || s[i] == ']' || s[i] == '}')
            { // cout<<"in first if"<<endl;
                if ((!current.empty()) && s[i] == ')' && current.top() == '(')
                { // cout<<"in ()"<<endl;
                    current.pop();
                }
                else if ((!current.empty()) && s[i] == ']' && current.top() == '[')
                { // cout<<"in []"<<endl;
                    current.pop();
                }

                else if ((!current.empty()) && s[i] == '}' && current.top() == '{')
                { // cout<<"in {}"<<endl;
                    current.pop();
                }

                else
                    return false;
            }
            else
            {
                current.push(s[i]);
                // cout<<"in else of first if"<<endl;
            }
        }

        if (current.empty())
            return true;
        else
            return false;
        return true;
    }
};