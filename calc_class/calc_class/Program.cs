using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace calc_class
{

    class Program
    {
        static void Main(String[] args)
        {
            MathClass myClass = new MathClass();

  
            myClass.FirstNumber = 10;
            myClass.SecondNumber = 10;

            Console.WriteLine("Addition result :" + myClass.Addition());
            Console.WriteLine("Substraction result :" + myClass.Substraction());
            Console.WriteLine("Multiplication result :" + myClass.Multiplication());
            Console.WriteLine("Division result :" + myClass.Division());
            Console.ReadLine();
        }



    }
}

    class MathClass
    {
        private int _firstNumber;
        private int _secondNumber;

        public MathClass(int firstNumber, int secondNumber)
        {
            _firstNumber = firstNumber;
            _secondNumber = secondNumber;
        }

        public MathClass()
        {
            _firstNumber = 0;
            _secondNumber = 0;
        }

        public int FirstNumber
        {

            set
            {
                _firstNumber = value;
            }
            get
            {
                return _firstNumber;

            }
        }

        public int SecondNumber
        {

            set
            {
                _secondNumber = value;
            }
            get
            {
                return _secondNumber;

            }
        }

        public int Addition()
        {
            return _firstNumber + _secondNumber;
        }
    public int Substraction()
    {
        return _firstNumber - _secondNumber;
    }
    public int Multiplication()
    {
        return _firstNumber * _secondNumber;
    }
    public int Division()
    {
        return _firstNumber / _secondNumber;
    }
}


////////////////////////////////////////////////////////////
///
//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;

//namespace Classobject
//{
//    class Class1
//    {
//        public static int Sum(int num1, int num2)
//        {
//            int total;
//            total = num1 + num2;
//            return total;
//        }

//        public static int Substract(int num1, int num2)
//        {
//            int sub;
//            sub = num1 - num2;
//            return sub;
//        }

//        public static int product(int num1, int num2)
//        {
//            int multiply;
//            multiply = num1 / num2;
//            return multiply;
//        }

//        public static int divide(int num1, int num2)
//        {
//            int div;
//            div = num1 * num2;
//            return div;
//        }




//        public static void Main()
//        {
//            System.Console.WriteLine("\n\nFunction to calculate the arthimatic operations of two numbers :\n");
//            System.Console.WriteLine("--------------------------------------------------------------------\n");


//            int a = 0;
//            int b = 0;



//            bool check;
//            System.Console.WriteLine("give two values for 'a' and 'b'/n");


//            do
//            {
//                check = false;
//                try
//                {
//                    System.Console.Write("Enter the value for a : ");
//                    a = Convert.ToInt32(Console.ReadLine());
//                }
//                catch (Exception)
//                {
//                    System.Console.WriteLine("enter a value greater than zero");
//                    check = true;
//                }
//            } while (a < 0 || a > 2147483647 || check);


//            do
//            {
//                check = false;
//                try
//                {
//                    System.Console.Write("Enter the value for b : ");
//                    b = Convert.ToInt32(Console.ReadLine());
//                }
//                catch (Exception)
//                {
//                    System.Console.WriteLine("enter a value greater than zero");
//                    check = true;
//                }
//            } while (b < 0 || b > 2147483647 || check);


//            System.Console.WriteLine("\nThe sum of two numbers is : {0} \n", Sum(a, b));
//            System.Console.WriteLine("\nThe substarction of two numbers is : {0} \n", Substract(a, b));
//            System.Console.WriteLine("\nThe Product of two numbers is : {0} \n", product(a, b));
//            System.Console.WriteLine("\nThe Divide of two numbers is : {0} \n", divide(a, b));

//            Console.ReadKey();
//        }
//    }
//}
