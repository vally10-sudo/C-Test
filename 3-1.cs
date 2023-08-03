private void button1_Click(object,EventArgs e)
{
    if((textBox1.Text.Length == 8)&&(textBox1.Text == "password"))
    MessageBox.Show("输入正确，欢迎进入系统！","欢迎");
    else{
        MessageBox.Show("输入错误，请输入8位密码！","提示",MessageBoxButtons.OK,MessageBoxIcon.Exclamation);
        textBox1.Text = "";
        textBox1.Focus();
    }
}
//不管有多少个分支，程序执行了其中一个分支后，其余分支不再执行
//如果有多个条件表达式都满足要求，也只执行第一个与之匹配的语句序列