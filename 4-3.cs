class CircleShape{
    const float pi=3.14 , x0=0,y0=0; //定义三个常量，分别代表半径和圆心的坐标
    private float redius;//圆的半径
    //声明公有访问属性以访问私有属性redius成员
    public float Radius 
    { get
    {
        return radius;
    }

    set
    {
        if(value<0)
        value=0;
    } 
    }
    //定义方法，计算圆的面积，返回值为float
    public float Area()
    { 
        return pi*radius*radius;
    }
    //定义方法，计算圆我都周长，该方法无返回值，也无参数
    public void Circum()
    {
        Console.WriteLine("圆的周长：{0}",2*pi*radius);
    }

}

