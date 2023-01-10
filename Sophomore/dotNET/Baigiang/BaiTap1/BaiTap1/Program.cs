// See https://aka.ms/new-console-template for more information

using System;

namespace BaiTap1
{
    class Program
    {
        static void Main(string[] args)
        {
            int x = 1;
            double y = 2.1;

            // y = x; // ngầm định hiểu -> tự động ép
            x = (int)y; // ép kiểu tường minh

            Console.WriteLine("x = {0}, y = {1}", x, y);

            // string -> số: Parse, TryParse

            string s = "123";
            int z = Int32.Parse(s);
            Console.WriteLine("z + 1 = {0}", z + 1);

            int t;
            Console.WriteLine(Int32.TryParse(s, out t) + " t = " + (t + 1) );
            // Biến t đang là biến giá trị trở về biến tham chiếu do có out

            string s1 = "12.1";
            double z1 = Convert.ToDouble(s1); // Ép kiểu từ kiểu string sang kiểu double
            Console.WriteLine("z1 = {0}", z1);
            Console.WriteLine("z1 + 1 = {0}", z1 + 1);



            Console.ReadKey();


        }
    }
}
