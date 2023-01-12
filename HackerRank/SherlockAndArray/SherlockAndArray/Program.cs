 string balancedSums(List<int> arr)
{
    int i = 0, j = arr.Count - 1;
    long leftSum = 0, rightSum = 0;

    while (i != j)
    {
        if (leftSum + arr[i] <= rightSum + arr[j])
        {
            leftSum += arr[i];
            i++;
        }
        else if (rightSum + arr[j] <= leftSum + arr[i])
        {
            rightSum += arr[j];
            j--;
        }
    }



    if (leftSum == rightSum)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }

}
Console.WriteLine(balancedSums(new List<int> {1, 2, 3 }));