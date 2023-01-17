using Test;
using System.Text;

string str = "xaxbyyay";
StringBuilder str1 = new StringBuilder(str.Substring(0, str.Length/2));
StringBuilder str2 = new StringBuilder(str.Substring(str.Length/2, str.Length/2));
for(int i=0; i<str.Length/2; i++)
{
    int index = str2.ToString().IndexOf(str[i]); 
    if(index >= 0)
    {
        str2.Remove(str2.ToString().IndexOf(str1[i]), 1);
    }
}
    

Console.WriteLine(str2.Length);


string s = "xaxbyyay";
char[] s2 = s.Substring(0, s.Length / 2).ToCharArray();
Array.Sort(s2);
char[] s1 = s.Substring(s.Length / 2, s.Length / 2).ToCharArray();
Array.Sort(s1);
int counter = 0;
bool[] visited = new bool[s.Length / 2];
for (int i = 0; i < s.Length / 2; i++)
{
    for (int j = 0; j < s.Length / 2; j++)
    {
        if (!(visited[j]) && s1[i] == s2[j])
        {
            counter++;
            visited[j] = true;
        }
    }

}
Console.WriteLine(s.Length / 2 - counter);


