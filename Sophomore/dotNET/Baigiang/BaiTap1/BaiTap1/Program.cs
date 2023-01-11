// See https://aka.ms/new-console-template for more information

using System;


namespace BaiTap1
{
    class Program
    {
        /*static void Main(string[] args)
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
            Console.WriteLine(Int32.TryParse(s, out t) + " t = " + (t + 1));
            // Biến t đang là biến giá trị trở về biến tham chiếu do có out

            string s1 = "12.1";
            double z1 = Convert.ToDouble(s1); // Ép kiểu từ kiểu string sang kiểu double
            Console.WriteLine("z1 = {0}", z1);
            Console.WriteLine("z1 + 1 = {0}", z1 + 1);

            // Ép từ kiểu dữ liệu giá trị về kiểu dữ liệu tham chiếu
            Console.ReadKey();

        }*/
        //static void HV(int a, int b) // Biến a đang là biến giá trị
        static void HV(int a, int b) // Thêm từ khóa ref để biến nó thành biến tham chiếu
        {
            Console.WriteLine("Truoc HV: a = {0}, b = {1}", a, b);
            int temp = a;
            a = b;
            b = temp;
            Console.WriteLine("Sau HV: a = {0}, b = {1}", a, b);
        }
        static void Main(string[] args)
        {
            int m, n;
            // Nhập m, n từ bàn phím
            Console.Write("m = ");
            m = Convert.ToInt32(Console.ReadLine());
            Console.Write("n = ");
            n = Convert.ToInt32(Console.ReadLine());
            HV(m, n);
            Console.WriteLine("m = {0}, n = {1}", m, n);

            Console.ReadKey();
        }
    }
}
