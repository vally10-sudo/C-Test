//实例说明方法WriteLine()的使用流程
namespace WriteLine1{
class ProgramWriter
{
static void Main(string[] args)
{
    bool zz = true;
    int i =20;
    double mm=10.05;
    string nn = "机械工业出版社";
    Console.WriteLine(i);
    Console.WriteLine(nn);
    Console.WriteLine("zz={0},i={1},mm={2}",zz,i,mm);
    Console.WriteLine("zz={0,5},i={1,8},mm={2,9},nn={3,-10}",zz,i,mm,nn);
    Console.ReadKey();

}
}
}

//定义4个不同变量，并分别赋值
//通过方法WriteLine()将变量i,mm,zz的值输出
//使用格式化字符串的"[i]"格式，通过WriteLine()方法将各变量值输出
//如果输出的数据是数值类型，则还可以采用"{i,NN}"和{i,m:NN}格式化字符串
//i设置数据索引
//m指定输出字符的宽度
//冒号后面的参数NN设置格式控制字符