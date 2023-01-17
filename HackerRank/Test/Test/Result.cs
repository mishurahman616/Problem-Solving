using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Test
{
    public class Result
    {

        public static int CalculateLCM(int a, int b)
        {
            return (b / CalculateGCF(a, b)) * a;
        }
        public static int findLCM(List<int> a)
        {
            a.Sort();
            int lcm = a[0];
            for (int i = 1; i < a.Count; i++)
            {
                lcm = Result.CalculateLCM(lcm, a[i]);
            }
            return lcm;
        }
        public static int CalculateGCF(int a, int b)
        {
            if (b == 0) return a;
            return CalculateGCF(b, a % b);
        }
        public static int findGCF(List<int> b)
        {
            b.Sort();
            int gcf = b[0];
            for (int i = 1; i < b.Count; i++)
            {
                gcf = Result.CalculateGCF(b[i], gcf);
            }
            return gcf;
        }
    }
}
