public void button1_Click(object sender,EventArgs e)
{
    int num1,num2,num3;
    int max;
    num1 = int.Parse(textBox1.Text);
    num2 = int.Parse(textBox2.Text);
    num3 = int.Parse(textBox3.Text);
    max = num1 > num2 ? (num1 > num3? num1:num3) : (num2>num3?num2:num3);
    MessageBox.Show("三个数中的最大值为"+ max,"最大数");
    
}