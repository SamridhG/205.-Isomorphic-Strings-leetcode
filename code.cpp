class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,int>A;
         for(int i=0;i<s.size();i++)
        {
            auto p=A.find(s[i]);// checking weather the key->value present in map or not
            if(p->second==0)// if not present
            {
                A[s[i]]=t[i]-67;// then add
            }
            else// if prsent
            {
                if(p->second!=t[i]-67)//check the old key value matches or same as new one if not return false as per question
                {
                    return false;
                }
            }
        }
        map<char,int>B;
        for(int i=0;i<t.size();i++)// same do for string t 
        {
            auto p=B.find(t[i]);
            if(p->second==0)
            {
                B[t[i]]=s[i]-67;
            }
            else
            {
                if(p->second!=s[i]-67)
                {
                    return false;
                }
            }
        }
        return 1;
    }
};
