class CollClass
{
public const int intMaxNum = 3; //表示数组的长度
private string[] arrStr; //声明数组的引用
public string this[int index] //定义索引器
get {return arrStr[index];} //通过索引器取值
set {arrStr[index]=value;}  //通过索引器赋值
public CollClass()
{
    arrStr = new string[intMaxNum];
}

class Program
{
    static void Main(string[] args)
    {
        CollClass cc = new CollClass(); //创建CollClass类的对象
        cc[0]="Csharp";//通过索引器给数组元素赋值
        cc[1]="ASP.NET";
        cc[2]="Visual Basic";
        for(int i=0;i<CollClass.intMaxNum;i++)
        {
            Console.WriteLine(cc[i]);

        }
        Console.Read();
    }
}

}