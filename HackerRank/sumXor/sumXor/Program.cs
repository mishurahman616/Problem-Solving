using sumXor;

//long n = 800;
//long counter = 0;
//long x = 0;
//while (x <= n)
//{
//    Console.WriteLine($"{n|x}    {n^x}    {x}");
//    if ((n | x) == (n ^ x)) counter++;
//    x++;
//}
//List<int> asd = new List<int>() { 4, 3, 5 };
//asd.Sort();
//Console.WriteLine(asd[0]);
//string s = Convert.ToString(n, 2);
//int z = s.Count(ch => ch == '0');
//Console.WriteLine(Math.Pow(2, z));
//Console.WriteLine(z);
//Console.WriteLine(x);
//Console.WriteLine(counter);


//others
//List<int> a = new List<int>() { 2,4 };
//List<int> b = new List<int>() { 16,32,96 };

//int counter = 0;
//int lcm = Result.findLCM(a);
//int gcf = Result.findGCF(b);
//for (int i = lcm; i <= gcf; i += lcm)
//{
//    if (gcf % i == 0)
//    {
//        counter++;
//    }
//}
//Console.WriteLine(counter); 

string s = "xaxbbbxx";
char[] s2 = s.Substring(0, s.Length / 2).ToCharArray() ; 
Array.Sort(s2) ;
char[] s1 = s.Substring(s.Length/2, s.Length/2).ToCharArray();
Array.Sort(s1);
int counter = 0;
bool[] visited = new bool[s.Length/2];
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
Console.WriteLine(s.Length/2-counter);