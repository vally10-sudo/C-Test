namespace WriteLine2{
    class Program
    {
        public static void Main()
        {
            string aa="mmnnzz";
            Console.WriteLine(aa);
            Console.WriteLine("|{0}|",aa);
            Console.WriteLine("|{0,10}|",aa);
            Console.WriteLine("|{0.-10}|",aa);

            bool bb = true;
            Console.WriteLine(bb);
            Console.WriteLine("|{0,10}|",bb);
            Console.WriteLine("|{0.-10}|",bb);

            int i = 2000;
            Console.WriteLine(i);
            Console.WriteLine("|{0}|",i);
            Console.WriteLine("|{0,10:D6}|",i);
            Console.WriteLine("|0x{0,-10:X12}",i);
            Console.WriteLine("|{0,10:N8}",i);

            decimal cc = 6666666.1111111m;
            Console.WriteLine(cc);
            Console.WriteLine("|{0}|",cc);
            Console.WriteLine("|0,-10:E8|",cc);
            Console.ReadKey();

        }
    }
}

//分别定义4个不同类型的变量