package Caluculator;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class MyFrame {
    public void myFrame(){
        Compute calculation = new Compute();


        //创建窗口和配置
        Frame frame = new Frame("Calculator  (计算器只能在符合double的运算精度范围和运算规律内运算 精度为18位有效数字)");//创建窗口
        frame.setVisible(true);//窗口可见
        frame.setSize(680,600);//大小
        frame.setLocation(500,300);
        frame.setBackground(Color.pink);
        frame.setLayout(null); // 将布局暂时设置为空
        frame.setResizable(false); // 大小不能改变
        frame.setFont(new Font("SimSong",Font.BOLD,20));//字体样式，加粗，大小


        //设置输入文本框
        TextField textField = new TextField();
        textField.setBounds(20,90,400,120);
        frame.add(textField);

        //输出文本框
        TextArea textField02 = new TextArea();
        textField02.setBounds(450,90,200,410);
        //textField02.setEnabled(false);//不可更改
        frame.add(textField02);



        myButton(frame,textField,calculation,textField02); // 设置按键并监听

        //窗口监听
        frame.addWindowListener(new WindowAdapter() { //x号结束程序
            @Override
            public void windowClosing(WindowEvent e) {
                System.exit(0); // 结束程序
            }
        });

    }

    public void myButton(Frame frame,TextField textField,Compute calculation,TextArea textField02){


        //键盘监听回车 与等号同价
        textField.addKeyListener(new KeyListener() {
            @Override
            public void keyTyped(KeyEvent e) {

            }
            @Override
            public void keyPressed(KeyEvent e) {
                if(e.getKeyCode() == KeyEvent.VK_ENTER){
                    getAns(textField,calculation,textField02);
                }
            }
            @Override
            public void keyReleased(KeyEvent e) {

            }
        });


        Button buttonEqual = new Button("=");
        buttonEqual.setBounds(320,510,100,50);
        frame.add(buttonEqual);
        buttonEqual.addActionListener(new AbstractAction() {//按键监听
            @Override
            public void actionPerformed(ActionEvent e) {
                getAns(textField,calculation,textField02);
            }
        });

        Button buttonClear = new Button("Clear");
        buttonClear.setBounds(450,510,200,50);
        frame.add(buttonClear);
        buttonClear.addActionListener(new AbstractAction() {//按键监听
            @Override
            public void actionPerformed(ActionEvent e) {
                textField02.setText("");
            }
        });


        //按钮
        Button buttonLeft = new Button("(");
        buttonLeft.setBounds(20,270,100,50);
        frame.add(buttonLeft);
        buttonLeft.addActionListener(new AbstractAction() {//按键监听
            @Override
            public void actionPerformed(ActionEvent e) {
                String text = textField.getText();
                textField.setText(text + "(");
            }
        });

        Button buttonRight = new Button(")");
        buttonRight.setBounds(120,270,100,50);
        frame.add(buttonRight);
        buttonRight.addActionListener(new AbstractAction() {//按键监听
            @Override
            public void actionPerformed(ActionEvent e) {

                String text = textField.getText();
                if(text.length() != 0)
                    textField.setText(text + ")");
            }
        });

        Button buttonDel = new Button("DEL");
        buttonDel.setBounds(220,270,100,50);
        frame.add(buttonDel);
        buttonDel.addActionListener(new AbstractAction() {//按键监听
            @Override
            public void actionPerformed(ActionEvent e) {
                String text = textField.getText();
                if (text.length() != 0) text = text.substring(0, text.length() - 1);
                textField.setText(text);
            }
        });


        Button buttonExcept = new Button("÷");
        buttonExcept.setBounds(320,270,100,50);
        frame.add(buttonExcept);
        buttonExcept.addActionListener(new AbstractAction() {//按键监听
            @Override
            public void actionPerformed(ActionEvent e) {
                String text = textField.getText();
                if(text.charAt(text.length() - 1) == '+' || text.charAt(text.length() - 1) == '-'
                        || text.charAt(text.length() - 1) == '*'|| text.charAt(text.length() - 1) == '/') {
                    text = text.substring(0, text.length() - 1);
                }
                    textField.setText(text + "/");
            }
        });

        Button buttonMultiply = new Button("*");
        buttonMultiply.setBounds(320,330,100,50);
        frame.add(buttonMultiply);
        buttonMultiply.addActionListener(new AbstractAction() {//按键监听
            @Override
            public void actionPerformed(ActionEvent e) {
                String text = textField.getText();
                if(text.charAt(text.length() - 1) == '+' || text.charAt(text.length() - 1) == '-'
                        || text.charAt(text.length() - 1) == '*'|| text.charAt(text.length() - 1) == '/') {
                    text = text.substring(0, text.length() - 1);
                }
                    textField.setText(text + "*");
            }
        });

        Button buttonMinus = new Button("-");
        buttonMinus.setBounds(320,390,100,50);
        frame.add(buttonMinus);
        buttonMinus.addActionListener(new AbstractAction() {//按键监听
            @Override
            public void actionPerformed(ActionEvent e) {
                String text = textField.getText();
                if(text.charAt(text.length() - 1) == '+' || text.charAt(text.length() - 1) == '-'
                        || text.charAt(text.length() - 1) == '*'|| text.charAt(text.length() - 1) == '/') {
                    text = text.substring(0, text.length() - 1);
                }
                    textField.setText(text + "-");
            }
        });

        Button buttonPlus = new Button("+");
        buttonPlus.setBounds(320,450,100,50);
        frame.add(buttonPlus);
        buttonPlus.addActionListener(new AbstractAction() {//按键监听
            @Override
            public void actionPerformed(ActionEvent e) {
                String text = textField.getText();
                if(text.charAt(text.length() - 1) == '+' || text.charAt(text.length() - 1) == '-'
                        || text.charAt(text.length() - 1) == '*'|| text.charAt(text.length() - 1) == '/') {
                    text = text.substring(0, text.length() - 1);
                }
                    textField.setText(text + "+");
            }
        });

        Button buttonCE = new Button("CE");
        buttonCE.setBounds(20,510,100,50);
        frame.add(buttonCE);
        buttonCE.addActionListener(new AbstractAction() {//按键监听
            @Override
            public void actionPerformed(ActionEvent e) {
                textField.setText("");
            }
        });

        Button buttonPoint = new Button(".");
        buttonPoint.setBounds(220,510,100,50);
        frame.add(buttonPoint);
        buttonPoint.addActionListener(new AbstractAction() {//按键监听
            @Override
            public void actionPerformed(ActionEvent e) {
                String text = textField.getText();
                textField.setText(text + ".");
            }
        });


        Button buttonZero = new Button("0");
        buttonZero.setBounds(120,510,100,50);
        frame.add(buttonZero);
        buttonZero.addActionListener(new AbstractAction() {//按键监听
            @Override
            public void actionPerformed(ActionEvent e) {
                String text = textField.getText();
                textField.setText(text + "0");
            }
        });

        Button buttonOne = new Button("1");
        buttonOne.setBounds(20,450,100,50);
        frame.add(buttonOne);
        buttonOne.addActionListener(new AbstractAction() {//按键监听
            @Override
            public void actionPerformed(ActionEvent e) {
                String text = textField.getText();
                textField.setText(text + "1");
            }
        });

        Button buttonTow = new Button("2");
        buttonTow.setBounds(120,450,100,50);
        frame.add(buttonTow);
        buttonTow.addActionListener(new AbstractAction() {//按键监听
            @Override
            public void actionPerformed(ActionEvent e) {
                String text = textField.getText();
                textField.setText(text + "2");
            }
        });
        Button buttonThree = new Button("3");
        buttonThree.setBounds(220,450,100,50);
        frame.add(buttonThree);
        buttonThree.addActionListener(new AbstractAction() {//按键监听
            @Override
            public void actionPerformed(ActionEvent e) {
                String text = textField.getText();
                textField.setText(text + "3");
            }
        });

        Button buttonFour = new Button("4");
        buttonFour.setBounds(20,390,100,50);
        frame.add(buttonFour);
        buttonFour.addActionListener(new AbstractAction() {//按键监听
            @Override
            public void actionPerformed(ActionEvent e) {
                String text = textField.getText();
                textField.setText(text + "4");
            }
        });

        Button buttonFive = new Button("5");
        buttonFive.setBounds(120,390,100,50);
        frame.add(buttonFive);
        buttonFive.addActionListener(new AbstractAction() {//按键监听
            @Override
            public void actionPerformed(ActionEvent e) {
                String text = textField.getText();
                textField.setText(text + "5");
            }
        });

        Button buttonSix = new Button("6");
        buttonSix.setBounds(220,390,100,50);
        frame.add(buttonSix);
        buttonSix.addActionListener(new AbstractAction() {//按键监听
            @Override
            public void actionPerformed(ActionEvent e) {
                String text = textField.getText();
                textField.setText(text + "6");
            }
        });

        Button buttonSeven = new Button("7");
        buttonSeven.setBounds(20,330,100,50);
        frame.add(buttonSeven);
        buttonSeven.addActionListener(new AbstractAction() {//按键监听
            @Override
            public void actionPerformed(ActionEvent e) {
                String text = textField.getText();
                textField.setText(text + "7");
            }
        });

        Button buttonEight = new Button("8");
        buttonEight.setBounds(120,330,100,50);
        frame.add(buttonEight);
        buttonEight.addActionListener(new AbstractAction() {//按键监听
            @Override
            public void actionPerformed(ActionEvent e) {
                String text = textField.getText();
                textField.setText(text + "8");
            }
        });


        Button buttonNine = new Button("9");
        buttonNine.setBounds(220,330,100,50);
        frame.add(buttonNine);
        buttonNine.addActionListener(new AbstractAction() {//按键监听
            @Override
            public void actionPerformed(ActionEvent e) {
                String text = textField.getText();
                textField.setText(text + "9");
            }
        });
    }

    private void getAns(TextField textField,Compute calculation,TextArea textField02) {
        String text02 = textField02.getText();
        String text = textField.getText();
        text02 += "\n" + text;

        if(calculation.check(text)) {
            // 检查输入是否正确
            calculation.compute (text);
            text02 += "\n=";
            textField02.setText(text02 + (calculation.compute (text)) + "\n");
            textField.setText((calculation.compute (text)));
        }
        else {
            System.out.println("表达式不合法");
            textField02.setText(text02 + "\n表达式不合法\n");
        }
    }

}

