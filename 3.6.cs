//使用数组
namespace shuzu{
    class Program
    {
        static void Main(string[] args)
        {
            string[] Club ={
                "AA","BB","CC","DD","EE","FF","GG","HH"
            };
            int i;
            Console.WriteLine("超级男声{0}强：",Club.Length);
            for(i=0;i<Club.Length;i++)
            {
                Console.WriteLine(Club[i]);

            }
            Console.ReadKey();
        }
    }
}

//定义一个string类型的数组
//在数组内设置8个值，保存8个数据
//通过Club.Length获取数组内数据的个数8