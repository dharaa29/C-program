bool isAnagram(char* s, char* t)
{
    int dp[26];
    for(int i=0;i<26;i++)
    {
        dp[i]=0;
    }
    for(int i=0;s[i];i++)
    {
        dp[s[i]-'a']++;
    }
    for(int i=0;t[i];i++)
    {
        dp[t[i]-'a']--;
    }
    for(int i=0;i<26;i++)
    {
        if(dp[i]!=0)
        {
            return false;
        }
    }
    return true;

    
}