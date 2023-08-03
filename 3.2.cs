namespace chaixiangchuli{
    class Program
    {
        int aa=200; //定义一个值类型
        object bb=aa; //将值类型变量装想到一个引用类型对象中
        Console.WriteLine("装箱处理：值为{0},装箱对象为{1}",aa,bb);
        int cc = (int) bb; //取消装箱
        Console.WriteLine("拆箱处理：装箱对象为{0},值为{1}",bb,cc);
        Console.Readkey();
    }
}

