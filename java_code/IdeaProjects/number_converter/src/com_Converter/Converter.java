package com_Converter;

import java.awt.*;
import javax.swing.*;
public class Converter extends JFrame {
    JLabel toLabel, fromLabel, inputLabel, outputLabel, titleLabel;
    JComboBox<String> to, from;
    JTextField input, output;
    JButton convert;
    ImageIcon icon = new ImageIcon("");
    Font labels, font, title, inputs;

    // 构造函数
    public Converter() {
        super("进制转换器");
        this.setVisible(true);
        this.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        this.setSize(400, 300);
        this.setLayout(null);
        initialiseObjects();
    }
    public void initialiseObjects() {
        //设置字体
        font = new Font("Arial", Font.PLAIN, 20);
        labels = new Font("Arial", Font.PLAIN, 18);
        title = new Font("Arial", Font.PLAIN, 24);
        inputs = new Font("Arial", Font.PLAIN, 16);

        // 设置下拉列表
        to=new JComboBox<>(new String[] {"2", "8", "16", "10"});
        to.setFont(inputs);
        add(to);

        from=new JComboBox<String>(new String[] {"2", "8", "16", "10"});
        from.setFont(inputs);
        add(from);

        // 设置输入字段
        input=new JTextField(20);
        input.setFont(inputs);
        add(input);

        // 设置输出字段
        output=new JTextField(20);
        output.setFont(inputs);
        output.setEditable(false);
        add(output);

        // 设置转换按钮
        convert=new JButton("conversion", icon);
        convert.setFont(inputs);
        convert.setBackground(Color.WHITE);
        add(convert);

        // 设置标签
        toLabel=new JLabel("To:");
        toLabel.setFont(labels);
        add(toLabel);
        fromLabel = new JLabel("From:");
        fromLabel.setFont(labels);
        add(fromLabel);
        inputLabel=new JLabel("Input:");
        inputLabel.setFont(labels);
        add(inputLabel);
        outputLabel=new JLabel("Output:");
        outputLabel.setFont(labels);
        add(outputLabel);
        titleLabel=new JLabel("number-converter");
        titleLabel.setFont(title);
        add(titleLabel);

        // 调用 makeGUI 方法
        makeGUI();
    }
    public void makeGUI() {
        // 设置布局
        titleLabel.setBounds(100, 15, 300, 30);
        fromLabel.setBounds(50, 80, 120, 25);
        from.setBounds(180, 80, 130, 25);
        toLabel.setBounds(50, 110, 120, 25);
        to.setBounds(180, 110, 130, 25);
        inputLabel.setBounds(50, 140, 100, 25);
        input.setBounds(180, 140, 130, 25);
        outputLabel.setBounds(50, 170, 100, 25);
        output.setBounds(180, 170, 130, 25);
        convert.setBounds(180, 210, 130, 34);
        convert.addActionListener(l -> {
            String in=input.getText();
            String out="";
            String convertTo=String.valueOf(to.getSelectedItem());
            String convertFrom=String.valueOf(from.getSelectedItem());
            try {
                if (convertFrom.equals("10")) {
                    if (convertTo.equals("16")) out = DecimalOperations.decimalToHex(in);
                    else if (convertTo.equals("8")) out = DecimalOperations.decimalToOctal(in);
                    else if (convertTo.equals("2")) out = DecimalOperations.decimalToBinary(in);
                    else out = in;
                }
                else if (convertFrom.equals("16")) {
                    if (convertTo.equals("10")) out = HexadecimalOperations.hexaToDecimal(in);
                    else if (convertTo.equals("8")) out = HexadecimalOperations.hexaToOctal(in);
                    else if (convertTo.equals("2")) out = HexadecimalOperations.hexaToBinary(in);
                    else out = in;
                }
                else if (convertFrom.equals("8")) {
                    if (convertTo.equals("10")) out = OctalOperations.octalToDecimal(in);
                    else if (convertTo.equals("16")) out = OctalOperations.octalToHexa(in);
                    else if (convertTo.equals("2")) out = OctalOperations.octalToBinary(in);
                    else out = in;
                }
                else if (convertFrom.equals("2"))
                    if (convertTo.equals("10")) out = BinaryOperations.binaryToDecimal(in);
                    else if (convertTo.equals("16")) out = BinaryOperations.binaryToHex(in);
                    else if (convertTo.equals("8")) out = BinaryOperations.binaryToOctal(in);
                    else out = in;
            }
            catch (Exception e) {
                out = "input";
            }
            output.setText(out);
        });
    }
    public static void main(String[] args) {
        new Converter();
    }
}