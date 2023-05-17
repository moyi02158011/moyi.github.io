import java.awt.*;

public class Main {
    public static void main(String[] args) {
        Frame frame = new Frame("Hello world"); //可以设置标题


        frame.setSize(500,300); //窗口大小
        frame.setLocation(1200,500); // 窗口初始位置
        frame.setBounds(1000,500,500,300); //窗口位置和大小

        frame.setBackground(Color.PINK); // 颜色
        frame.setAlwaysOnTop(true); // 是否展示在最前面
        frame.setResizable(true); //是否改变大小
        frame.setTitle("Hello world");//设置标题



        frame.setVisible(true);
    }
}