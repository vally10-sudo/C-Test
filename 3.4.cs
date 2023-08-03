namespace aa
{
    enum aa:byte   //定义一个枚举aa，并设置其类型为byte,分别设置四个枚举值，并分别赋值
    {
        aa1=2,
        aa2=3,
        aa3=4,
        aa4=5
    }
    class Program
    {
    static void Main(string[] args)
        {
        byte mm;
        string nn;
        aa mn; //分别定义三个变量，其中mn是枚举类型，并设置mn的值为aa3的值
        mn = aa.aa3;
        Console.WriteLine("myDirection = {0}",mn);
        mm = (byte)mn; //对枚举值mn进行显示转换，并通过Convert.ToString(mn)获得枚举字符串的值
        nn = Convert.ToString(mn);
        Console.WriteLine("byte 是 = {0}",mn);
        Console.WriteLine("string 是= {0}",nn);
        Console.ReadKey();
        }
    }
}