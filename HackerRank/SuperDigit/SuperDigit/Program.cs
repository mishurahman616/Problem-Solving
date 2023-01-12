int superDigit(string n, int k)
{
    long sum = 0;
    foreach (char c in n)
    {
        sum += c - '0';
    }
    sum *= k;
    if (sum % 10 == sum) return Convert.ToInt32(sum);
    else return superDigit(sum.ToString(), 1);
}

Console.WriteLine(superDigit("2345566345634563456546", 2));