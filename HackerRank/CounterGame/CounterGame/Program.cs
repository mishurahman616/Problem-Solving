string counterGame(long n)
{
    string[] winnerList = new string[] { "Richard", "Louise" };
    int winnerIndex = 0;

    while (n != 1)
    {
        winnerIndex++;
        long x = 1;
        if(n>0 && (n & (n - 1)) == 0){
            n/= 2;
            continue;
        }
        while (x <= n)
        {
            if ((x<<1) <= 0 || (x << 1) > n)
            {
                
                break;
            }
            x = x << 1;


        }
        n = n - x;
        
    }
    if (winnerIndex % 2 == 0)
    {
        winnerIndex = 0;
    }
    else
    {
        winnerIndex = 1;
    }
    return winnerList[winnerIndex];


}

int counter = 0;
for (long x = long.MaxValue - 5; x >= 1; x -= 15)
{
    counter++;
    Console.WriteLine(counterGame(x));
    if(counter==15) break;
}