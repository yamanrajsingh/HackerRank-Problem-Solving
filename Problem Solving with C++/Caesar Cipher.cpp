string caesarCipher(string s, int k) {
int a=97;
int z=65;
string ans="";
for(int i=0;i<s.size();i++)
{
    if(s[i]>='a' && s[i]<='z')
    {
         int b=s[i];
         int p=b-a;
         p++;
         int c=(p+k)%26;
         char d=(a-1)+c;
         if(c==0)
         {
             ans+='z';
         }
         else
         {
             ans+=d; 
         }
        
    }
    else if(s[i]>='A' && s[i]<='Z')
    {
         int b=s[i];
          int p=b-z;
         p++;
         int c=(p+k)%26;
         char d=(z-1)+c;
         if(c==0)
         {
             ans+='Z';
         }
         else
         {
             ans+=d; 
         }
    }
    else {
    
        ans+=s[i];
    }
    
    }

 return ans;
  
}