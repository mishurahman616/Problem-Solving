
using System.Text;

int n = 1;
List<string> grid = new List<string>() { ".......", "...O...", "....O..", ".......", "OO.....", "OO....." };
List<StringBuilder> result = new List<StringBuilder>();
for(int i=0; i<grid.Count; i++)
{
    StringBuilder newRow = new StringBuilder(new string('O', grid[0].Length));
    result.Add(newRow);
}
if(n%3== 0)
{
    for (int row = 0; row < grid.Count; row++)
        {

            for (int col = 0; col < grid[row].Length; col++)
            {
            if (grid[row][col] == 'O')
            {
                result[row][col] = '.';
                if (row > 0)
                {
                    result[row - 1][col] = '.';
                }
                if(row < grid.Count - 1)
                {
                    result[row + 1][col] = '.';
                }
                if(col > 0)
                {
                    result[row][col - 1] = '.';
                }
                if (col < grid[0].Length-1)
                {
                    result[row][col + 1] = '.';
                }
            }
        }

        }
}
    
foreach(var res in result)
{
    Console.WriteLine(res);
}
Console.WriteLine(new string('/', grid.Count));
if (n % 3 == 1)
{
    Console.WriteLine(String.Join("\n", grid));
}