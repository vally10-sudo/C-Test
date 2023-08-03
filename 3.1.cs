//C#中的值类型和引用类型是同源的，不但可以再值类型之间和引用类型之间转换，也可以再值类型和引用类型之间转换
//将值类型转换为引用类型的过程叫装箱
//将引用类型转为值类型的过程称为拆箱
//1.装箱
// 允许将值类型转换为引用类型
// 1)从任何类型到object类型的转换
// 2）从任何值类型到System.ValueType的装换
// 3）从任何值类型到值类型的接口转换
// 4）从任何枚举类型到System.Enum类型的转换
namespace Zhuangxiangchuli{
    class Programming
    {
public static void Main()
{
    int mm=100; //定义值类型
    object nn=mm; //将值类型变量装箱到引用类型
    Console.WriteLine("值为{0},装箱对象为{1}",mm,nn);
    mm=200;  //改变值
    Console.WriteLine("值为{0}，装箱对象为{1}",mm,nn);
    Console.ReadKey();

}
    }
}