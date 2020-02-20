using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace exercise2_6
{
    class Program
    {
        static void Main(string[] args)
        {
            double pnum = 1;
            bool check;

            int[] i;
            int k = 0;
            i = new int[2];
            do
            {
                check= false;
                try
                {
                    Console.WriteLine("give two values for 'a' and 'b' :");
                    Console.WriteLine("Enter the value for a  :");
                    i[0] = Convert.ToInt32(Console.ReadLine());
                    Console.WriteLine("Enter the value for b  :");
                    i[1] = Convert.ToInt32(Console.ReadLine());

                }
                catch (FormatException ex)
                {
                    Console.WriteLine(ex.Message + "\nPlease Enter  Decimal Value\n");
                    check = true;
                }
            } while (check);


            if (i[1] > 0)
                    {
                        for (int j = i[1]; j > 0; j--)
                            pnum = pnum * i[0];
                    }
                    else if (i[1] < 0)
                    {
                        for (int j = i[1]; j < 0; j++)
                            pnum = pnum / i[0];
                    }
                

            System.Console.WriteLine("the solution for (a*a + b*b + 2*a*b) : {0} ", (i[0] * i[0] + i[1] * i[1] + 2 * i[0] * i[1]));

            System.Console.WriteLine("the solution for  (a + b) / (5 + a – b) : {0}", ((float)((i[0] + i[1]) / (5 + i[0] - i[1]))));

            System.Console.WriteLine("The given value a is {0}", ((i[0] % 2 == 0) ? "even" : "odd"));

            System.Console.WriteLine("The given value b is {0}", ((i[1] % 2 == 0) ? "even" : "odd"));

            System.Console.WriteLine("{0} Raised to the Power of {1} is {2}", i[0], i[1], pnum);

            System.Console.WriteLine("the solution for area of triangle is : {0}", ((float)(0.5 * i[0] * i[1])));

            Console.ReadKey();
        }
    }
}
